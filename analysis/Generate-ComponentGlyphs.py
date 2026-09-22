"""Build TIARA's original component icons. No installation files are inputs.

The geometry below is the editable artwork. All marks, including lettering,
are paths. The application can tint them for each theme without loading fonts.
Run with --check to check the generated files without changing them.
"""

import argparse
import html
import json
from pathlib import Path
from urllib.parse import quote

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'glyph' / 'components'
ICONS = {}


def path(d, width=1.6):
    return f'<path d="{d}" stroke-width="{width:g}"/>'


def circle(x, y, radius):
    return f'<circle cx="{x}" cy="{y}" r="{radius}"/>'


def rect(x, y, width, height, radius=0):
    return f'<rect x="{x}" y="{y}" width="{width}" height="{height}" rx="{radius}"/>'


def group(body, transform):
    return f'<g transform="{transform}">{body}</g>'


# Original single-stroke lettering: 4 x 6 units, no installed font required.
LETTERS = {
    'A': 'M0 6V2L2 0 4 2V6M0 3H4',
    'B': 'M0 6V0H2Q5 0 3 3Q5 6 2 6Z',
    'C': 'M4 0H1L0 1V5L1 6H4',
    'D': 'M0 0H2Q4 0 4 3T2 6H0Z',
    'E': 'M4 0H0V6H4M0 3H3',
    'F': 'M4 0H0V6M0 3H3',
    'G': 'M4 1L3 0H1L0 1V5L1 6H4V3H2',
    'H': 'M0 0V6M4 0V6M0 3H4',
    'I': 'M0 0H4M2 0V6M0 6H4',
    'J': 'M0 0H4V5L3 6H1L0 5',
    'K': 'M0 0V6M4 0L0 3 4 6',
    'L': 'M0 0V6H4',
    'M': 'M0 6V0L2 3 4 0V6',
    'N': 'M0 6V0L4 6V0',
    'O': 'M1 0H3L4 1V5L3 6H1L0 5V1Z',
    'P': 'M0 6V0H3L4 1V2L3 3H0',
    'Q': 'M1 0H3L4 1V4L3 5H1L0 4V1ZM2 4L4 6',
    'R': 'M0 6V0H3L4 1V2L3 3H0M2 3L4 6',
    'S': 'M4 0H1L0 1V2L1 3H3L4 4V5L3 6H0',
    'T': 'M0 0H4M2 0V6',
    'U': 'M0 0V5L1 6H3L4 5V0',
    'V': 'M0 0L2 6 4 0',
    'W': 'M0 0V6L2 3 4 6V0',
    'X': 'M0 0L4 6M4 0L0 6',
    'Y': 'M0 0L2 3 4 0M2 3V6',
    'Z': 'M0 0H4L0 6H4',
    '0': 'M1 0H3L4 1V5L3 6H1L0 5V1ZM1 5L3 1',
    '1': 'M0 1L2 0V6M0 6H4',
    '2': 'M0 1L1 0H3L4 1V2L0 6H4',
    '3': 'M0 0H3L4 1V2L2 3 4 4V5L3 6H0',
    '4': 'M0 0V3H4M3 0V6',
    '5': 'M4 0H0V3H3L4 4V5L3 6H0',
    '6': 'M4 0H1L0 1V5L1 6H3L4 5V4L3 3H0',
    '7': 'M0 0H4L1 6',
    '8': 'M1 0H3L4 1V2L3 3H1L0 2V1ZM1 3L0 4V5L1 6H3L4 5V4L3 3',
    '9': 'M4 3H1L0 2V1L1 0H3L4 1V5L3 6H0',
    '+': 'M0 3H4M2 1V5',
    '-': 'M0 3H4',
    '=': 'M0 2H4M0 4H4',
    '>': 'M0 0L4 3 0 6',
    '/': 'M0 6L4 0',
}


def label(value, x=16, y=16, scale=1):
    width = len(value) * 6 - 2
    body = ''.join(group(path(LETTERS[c], 1.15), f'translate({i * 6} 0)')
                   for i, c in enumerate(value))
    return group(body, f'translate({x - width * scale / 2:g} {y - 3 * scale:g}) scale({scale:g})')


def add(names, body, family):
    for name in names.split():
        identifier = 'id_component_' + name
        if identifier in ICONS:
            raise ValueError(f'Duplicate drawing: {identifier}')
        ICONS[identifier] = (body, family)


def custom(identifier, body, family):
    if identifier in ICONS:
        raise ValueError(identifier)
    ICONS[identifier] = (body, family)


LEADS = path('M3 16H9M23 16H29')
VARIABLE = path('M9 25L23 7M18 8L23 7 23 12')
LIGHT_IN = path('M5 4L11 10M7 10H11V6M12 3L18 9M14 9H18V5', 1.2)
LIGHT_OUT = path('M17 9L23 3M19 3H23V7M23 12L29 6M25 6H29V10', 1.2)
SINE = path('M9 16C11 7 13 7 16 16S21 25 23 16')
SQUARE = path('M8 19H12V12H19V19H24')
TRIANGLE = path('M8 20L12 12 20 20 24 12')


def resistor():
    return LEADS + rect(9, 12, 14, 8, 0.6)


def capacitor():
    return path('M3 16H13M13 8V24M19 8V24M19 16H29')


def inductor():
    return path('M3 19H6C6 8 11 8 11 19C11 8 16 8 16 19C16 8 21 8 21 19C21 8 26 8 26 19H29')


def chip(value, clock=False, wave=False):
    pins = path('M3 10H7M3 16H7M3 22H7M25 10H29M25 16H29M25 22H29')
    body = rect(7, 5, 18, 22, 2) + pins
    if clock:
        return body + label(value, y=12, scale=min(1, 12 / (len(value) * 6 - 2))) + path('M7 19L10 22 7 25')
    if wave:
        return body + label(value, y=12, scale=min(1, 12 / (len(value) * 6 - 2))) + path('M11 23H14V19H18V23H21', 1.1)
    return body + label(value, scale=min(1.25, 13 / (len(value) * 6 - 2)))


def block(value):
    return LEADS + rect(7, 7, 18, 18, 2) + label(value, scale=min(1.3, 13 / (len(value) * 6 - 2)))


def meter(value):
    return path('M3 16H6M26 16H29') + circle(16, 16, 10) + label(value, scale=min(1.5, 12 / (len(value) * 6 - 2)))


def amplifier(kind='normal'):
    body = path('M8 5L25 16 8 27ZM3 11H8M3 21H8M25 16H29')
    body += path('M11 10H15M13 8V12M11 21H15', 1.2)
    if kind == 'variable':
        body += path('M18 28L23 21M19 22L23 21 23 25', 1.2)
    elif kind == 'differential':
        body += path('M23 13H28M23 19H28')
    elif kind == 'comparator':
        body += path('M17 18V14H20', 1.2)
    elif kind == 'instrument':
        body += path('M13 14V18M15 14V18', 1.2)
    return body


def diode(kind='normal'):
    body = path('M3 18H10M10 11L21 18 10 25ZM21 11V25M21 18H29')
    if kind == 'zener':
        body += path('M21 11H24M18 25H21')
    elif kind == 'schottky':
        body += path('M21 11H24V14M21 25H18V22')
    elif kind == 'varicap':
        body = path('M3 18H9M9 12L18 18 9 24ZM19 11V25M23 11V25M23 18H29')
    elif kind == 'led':
        body += LIGHT_OUT
    elif kind == 'photo':
        body += LIGHT_IN
    elif kind == 'thyristor':
        body += path('M21 23L26 28H29')
    return body


def transistor(p_type=False, fet=False, depletion=False, junction=False, fourth=False, base_lead=True):
    if fet:
        body = path('M3 16H10M10 8V24M22 4V10H15M22 28V22H15')
        body += path('M15 9V23' if depletion or junction else 'M15 9V12M15 15V17M15 20V23')
        arrow = 'M16 16H22M19 13L22 16 19 19' if p_type else 'M15 16H21M18 13L15 16 18 19'
        body += path(arrow, 1.3)
        if not fourth:
            body += path('M22 16V22')
        else:
            body += path('M22 16H29')
        if junction:
            body = path('M3 16H15M15 7V25M15 10H23V4M15 22H23V28') + path(
                'M8 13L5 16 8 19' if p_type else 'M10 13L13 16 10 19', 1.3)
        return body
    body = path('M12 8V24M12 12L24 5V3M12 20L24 27V29')
    if base_lead:
        body += path('M3 16H12')
    body += path('M20 21L15 22 17 27' if p_type else 'M19 27L24 27 22 22', 1.4)
    return body


def darlington(p_type):
    body = path('M3 10H7M7 5V15M7 8L14 4H27V13L20 16M7 12L15 18H20M20 13V25M20 22L27 27V29')
    arrows = 'M12 13L9 13 10 16M25 23L22 23 23 26' if p_type else 'M11 17L14 17 13 14M23 27H27L26 23'
    return body + path(arrows, 1.2)


def switch(closed=False, alternate=False, push=False):
    body = path('M3 19H8M24 19H29') + circle(9, 19, 1.3) + circle(23, 19, 1.3)
    body += path('M10 19H21' if closed else 'M10 18L21 11')
    if alternate:
        body += path('M24 9H29') + circle(23, 9, 1.3)
    if push:
        body += path('M12 5H20M16 5V11')
    return body


def relay(closed=False, alternate=False, double=False):
    contact = group(switch(closed, alternate), 'translate(0 -3) scale(1 .72)')
    if double:
        contact += group(switch(closed, alternate), 'translate(0 4) scale(1 .72)')
    return contact + path('M16 15V19M3 25H9M23 25H29') + rect(9, 21, 14, 8, 1)


def gate(kind, inputs=2):
    invert = kind in ('nand', 'nor', 'not', 'schmitt')
    if kind in ('buffer', 'not', 'schmitt', 'tristate'):
        tip = 24 if invert else 23
        body = path(f'M8 5L{tip} 16 8 27ZM3 16H8')
    elif kind in ('and', 'nand'):
        body = path('M9 6H15C28 6 28 26 15 26H9Z')
    else:
        body = path('M8 6Q20 6 25 16Q20 26 8 26Q15 16 8 6Z')
        if kind == 'xor':
            body += path('M4 6Q11 16 4 26')
    if kind not in ('buffer', 'not', 'schmitt', 'tristate'):
        ys = {2: (11, 21), 3: (9, 16, 23), 4: (8, 13, 19, 24)}[inputs]
        body += path(''.join(f'M3 {y}H{9 if kind in ("and", "nand") else 10}' for y in ys))
    if invert:
        body += circle(26, 16, 1.7) + path('M28 16H30')
    else:
        body += path('M25 16H29' if kind not in ('buffer', 'schmitt', 'tristate') else 'M23 16H29')
    if kind == 'schmitt':
        body += path('M12 19H15V13H18M12 13H14V19H18', 1.1)
    if kind == 'tristate':
        body += path('M16 4V10')
    return body


def screen(contents):
    return rect(3, 5, 26, 20, 2) + path('M11 29H21M16 25V29') + contents


def waveform(kind):
    wave = {'sine': SINE, 'square': SQUARE, 'triangle': TRIANGLE}[kind]
    return LEADS + circle(16, 16, 10) + group(wave, 'translate(4 4) scale(.75)')


def graph(curve):
    return path('M5 5V26H28M5 10H3M5 18H3M13 26V28M22 26V28', 1.3) + path(curve)


def keyboard(value):
    body = rect(4, 3, 24, 26, 3) + label(value, y=9, scale=.8)
    for x in (9, 16, 23):
        for y in (16, 23):
            body += rect(x - 1.5, y - 1.5, 3, 3, .5)
    return body


def sensor(kind):
    if kind == 'ultrasonic':
        return rect(3, 10, 26, 16, 2) + circle(10, 18, 4) + circle(22, 18, 4) + path('M8 6Q16 1 24 6M12 8Q16 5 20 8M10 26V29M22 26V29', 1.3)
    if kind == 'pir':
        return path('M5 21A11 11 0 0 1 27 21ZM5 24H27M10 24V29M22 24V29M16 10V21M8 15H24', 1.4)
    if kind == 'light':
        return circle(17, 18, 7) + path('M13 25V29M21 25V29M14 21L17 15 20 21', 1.4) + LIGHT_IN
    return rect(9, 12, 14, 13, 3) + circle(16, 18, 3) + path('M12 25V29M20 25V29M8 8Q16 2 24 8M12 10Q16 7 20 10', 1.3)


def build_icons():
    add('ground', path('M16 3V15M5 15H27M9 21H23M13 27H19'), 'Passive')
    add('resistor', resistor(), 'Passive')
    add('potentiometer', resistor() + path('M16 3V12M12 7L16 12 20 7'), 'Passive')
    add('thermistors', resistor() + path('M7 25H12L24 7') + label('T', 26, 6, .6), 'Passive')
    add('photoresistor', group(resistor(), 'translate(0 6)') + LIGHT_IN, 'Optoelectronics')
    add('capacitor rf_capacitors', capacitor(), 'Passive')
    add('charged_capacitor', capacitor() + path('M6 6H10M8 4V8'), 'Passive')
    add('variable_capacitor', capacitor() + VARIABLE, 'Passive')
    add('lossy_capacitor', group(capacitor(), 'translate(0 -4)') + path('M5 12V26H10M22 26H27V12') + rect(10, 23, 12, 6), 'Passive')
    add('inductor inductors rf_inductors_1p rf_inductors_2p', inductor(), 'Passive')
    add('variable_inductor', inductor() + VARIABLE, 'Passive')
    add('energy_storing_inductor', inductor() + path('M10 5H22M18 2L22 5 18 8', 1.3), 'Passive')
    add('nonlinear_inductors', inductor() + path('M7 25H25M9 28L23 22', 1.3), 'Passive')
    coils = path('M4 4V7C14 7 14 12 4 12C14 12 14 17 4 17C14 17 14 22 4 22V28M28 4V7C18 7 18 12 28 12C18 12 18 17 28 17C18 17 18 22 28 22V28')
    add('coupled_inductors', coils, 'Passive')
    add('transformers inductive_coupling', coils + path('M14 5V27M18 5V27', 1.2), 'Passive')
    add('magnetic_core', rect(5, 6, 22, 20, 3) + rect(11, 12, 10, 8, 1) + path('M8 7V25M4 10H12M4 15H12M4 20H12', 1.2), 'Passive')
    add('fuse', LEADS + rect(9, 11, 14, 10, 2) + path('M9 16H23'), 'Passive')
    add('impedance', block('Z'), 'Passive')
    add('transmission_lines', path('M3 10H29M3 22H29M8 7V25M24 7V25'), 'RF')
    add('resistor_networks', path('M4 5H28M8 5V10M16 5V10M24 5V10M8 22V28M16 22V28M24 22V28') + ''.join(rect(x, 10, 4, 12) for x in (6, 14, 22)), 'Passive')
    add('pull_up_resistor pull_up_down_resistor', path('M16 3V8M10 3H22M16 22V29M9 29H23') + rect(12, 8, 8, 14), 'Logic')
    add('battery', path('M3 16H10M10 7V25M15 11V21M20 7V25M25 11V21M25 16H29M5 5H9M7 3V7'), 'Sources')
    add('voltage_source', circle(16, 16, 10) + path('M16 3V6M16 26V29M13 12H19M16 9V15M13 21H19', 1.5), 'Sources')
    add('current_source', circle(16, 16, 10) + path('M16 3V6M16 26V29M16 22V10M12 14L16 10 20 14'), 'Sources')
    add('voltage_generator', waveform('sine'), 'Sources')
    add('current_generator', waveform('sine') + path('M6 28H26M22 25L26 28 22 31', 1.2), 'Sources')
    add('controlled_sources', path('M16 5L27 16 16 27 5 16ZM3 16H5M27 16H29M16 11V21M12 16H20'), 'Sources')
    for names, value in [('pulse_source pulse_source2', 'P'), ('clock clock2', 'C')]:
        add(names, rect(5, 5, 22, 22, 2) + group(SQUARE, 'translate(0 4)') + label(value, y=10, scale=.8) + path('M2 16H5M27 16H30'), 'Sources')
    add('digital_high_source', block('1'), 'Sources')
    add('digital_low_source', block('0'), 'Sources')
    add('digital_voltage_source', path('M16 3V10M9 10L16 3 23 10M16 10V29') + label('1', 25, 23, .7), 'Sources')
    add('data_generator_4-bit', chip('4', wave=True), 'Sources')
    add('data_generator_8-bit', chip('8', wave=True), 'Sources')
    add('quartz_crystal digital_crystal', LEADS + rect(12, 8, 8, 16) + path('M8 9V23M24 9V23'), 'Sources')
    for names, value in [('volt_meter', 'V'), ('amper_meter ampere_meter', 'A'), ('power_meter', 'W'), ('impedance_meter', 'Z')]:
        add(names, meter(value), 'Meters')
    add('ohmmeter', circle(16, 16, 10) + path('M3 16H6M26 16H29M10 21H14V19C7 13 13 8 16 10C23 8 25 14 18 19V21H22'), 'Meters')
    for names, value in [('frequency_meter', 'HZ'), ('efficiency_meter', 'EFF'), ('average_meter', 'AVG'), ('multimeters', 'V/A')]:
        add(names, screen(label(value, y=15, scale=.95)), 'Meters')
    add('oscilloscopes', screen(SINE), 'Meters')
    add('signal_analysers', screen(path('M7 20H10L12 10 14 20H18L21 13 23 20H25', 1.3)), 'Meters')
    add('network_analyser', screen(circle(16, 15, 7) + path('M9 15H23M16 8V22M11 11Q22 12 19 21', 1)), 'Meters')
    add('tinalabii', screen(path('M7 17H11V11H16V17H21M7 21H25', 1.2)) + circle(26, 9, .7), 'Meters')
    add('voltage_pin macro_pin', path('M3 16H11L17 10H27V22H17Z'), 'Connections')
    add('open_circuit', path('M3 16H10M22 16H29') + circle(12, 16, 2) + circle(20, 16, 2), 'Connections')
    add('current_arrow', path('M3 16H29M22 10L29 16 22 22'), 'Meters')
    add('volt_arrow', path('M8 5V27M3 20L8 27 13 20') + label('V', 23, 16, 1.3), 'Meters')
    add('real_time_measurement_point', path('M3 23H16V16') + circle(16, 10, 6) + path('M16 6V10L19 12', 1.2), 'Meters')
    add('logic_indicator logic_indicator2', circle(16, 13, 8) + path('M16 21V29') + label('1', 16, 13, 1), 'Meters')
    add('steady_state_trigger', path('M5 25V8M5 8L2 12M5 8L8 12M11 23L17 7H27M23 3L27 7 23 11'), 'Meters')
    add('steady_state_sensor', path('M4 9H12L18 23H28M22 19L28 23 22 27'), 'Meters')
    for kind in ('normal', 'zener', 'schottky', 'varicap', 'led', 'photo', 'thyristor'):
        names = {'normal': 'diode diodes switching_diode pin_diode_1p pin_diode_2p', 'zener': 'zener_diode', 'schottky': 'schottky_diode', 'varicap': 'varicap_diode rf_varicap_diode', 'led': 'leds', 'photo': 'photodiode', 'thyristor': 'thyristor thyristors'}[kind]
        add(names, diode(kind), 'Semiconductors')
    add('diode_arrays', group(diode(), 'translate(0 -3) scale(1 .7)') + group(diode(), 'translate(0 12) scale(1 .7)'), 'Semiconductors')
    add('diac', path('M3 16H8M8 9L16 16 8 23ZM24 9L16 16 24 23ZM24 16H29'), 'Semiconductors')
    add('triac', path('M3 16H8M8 9L16 16 8 23ZM24 9L16 16 24 23ZM24 16H29M24 22L29 27'), 'Semiconductors')
    bridge_diode = path('M0 0H6M6 -2.5L11 0 6 2.5ZM11 -2.5V2.5M11 0H16.97', 1.1)
    bridge = ''.join(group(bridge_diode, transform) for transform in (
        'translate(4 16) rotate(-45)', 'translate(28 16) rotate(-135)',
        'translate(16 28) rotate(-135)', 'translate(16 28) rotate(-45)'))
    add('bridge_rectifier', bridge + path('M16 2V4M28 16H30M16 28V30M2 16H4', 1.3), 'Semiconductors')
    for prefix, p_type in [('npn', False), ('pnp', True)]:
        add(f'{prefix}_bipolar_transistor {prefix}_bipolar_transistors {prefix}_rf_bipolar_transistors', transistor(p_type), 'Semiconductors')
        add(f'{prefix}_darlington_transistors', darlington(p_type), 'Semiconductors')
    for channel, p_type in [('n', False), ('p', True)]:
        add(f'{channel}mos_enhancement-type {channel}-channel_mos', transistor(p_type, fet=True), 'Semiconductors')
        add(f'{channel}mos_depletion-type', transistor(p_type, fet=True, depletion=True), 'Semiconductors')
        add(f'junction_fet_{channel}-channel {channel}-channel_jfet', transistor(p_type, fet=True, junction=True), 'Semiconductors')
    add('4_terminal_mosfets', transistor(fet=True, fourth=True), 'Semiconductors')
    add('igbt', transistor(base_lead=False) + path('M8 8V24M3 16H8'), 'Semiconductors')
    add('ganfet', group(transistor(fet=True), 'translate(0 3) scale(.85)') + label('GAN', 17, 3, .65), 'Semiconductors')
    add('gaasfet', group(transistor(fet=True, junction=True), 'translate(0 4) scale(.85)') + label('GAAS', 17, 3, .65), 'RF')
    add('2_terminal_phototransistor', group(transistor(base_lead=False), 'translate(4 8) scale(.7)') + LIGHT_IN, 'Optoelectronics')
    add('3_terminal_phototransistor', group(transistor(), 'translate(4 8) scale(.7)') + LIGHT_IN, 'Optoelectronics')
    add('optocouplers', rect(3, 4, 26, 24, 2) + path('M7 9L13 13 7 17ZM14 9V17M21 11V23M21 14L26 10M21 20L26 24M16 12L19 15M17 15H19V13', 1.3), 'Optoelectronics')
    add('solar_cell', group(capacitor(), 'translate(0 6)') + LIGHT_IN, 'Optoelectronics')
    add('bulb', circle(16, 13, 9) + path('M10 7L22 19M22 7L10 19M12 23H20M12 27H20M16 27V30'), 'Electromechanical')
    add('motor', meter('M'), 'Electromechanical')
    add('stepper_motor', meter('M') + path('M8 4H13V1H19V4H24', 1.2), 'Electromechanical')
    add('speaker', path('M3 12H9L19 5V27L9 20H3ZM23 10Q29 16 23 22M26 6Q35 16 26 26', 1.5), 'Electromechanical')
    add('microphones', rect(11, 3, 10, 17, 5) + path('M7 14V17A9 9 0 0 0 25 17V14M16 26V30M10 30H22'), 'Electromechanical')
    add('switch relay_switches', switch(), 'Switches')
    add('alternate_switch changeover_switch', switch(alternate=True), 'Switches')
    add('open_push_button', switch(push=True), 'Switches')
    add('closed_push_button', switch(closed=True, push=True), 'Switches')
    add('changeover_push_button', switch(alternate=True, push=True), 'Switches')
    add('high-low_switch', switch(alternate=True) + label('1', 26, 3, .6) + label('0', 26, 26, .6), 'Switches')
    for names, value, alternate in [('time-controlled_switch', 'T', False), ('time-controlled_alt_switch', 'T', True), ('voltage-controlled_switch', 'V', False), ('voltage-controlled_switch_with_hysteresis', 'H', False)]:
        add(names, group(switch(alternate=alternate), 'translate(0 7) scale(1 .8)') + label(value, 9, 6, .85) + path('M9 11V14', 1.1), 'Switches')
    for name, closed, alternate, double in [('single_pole_open_relay', False, False, False), ('single_pole_closed_relay', True, False, False), ('single_pole_changeover_relay', False, True, False), ('double_pole_open_relay', False, False, True), ('double_pole_changeover_relay', False, True, True)]:
        add(name, relay(closed, alternate, double), 'Switches')
    add('relay_coils', LEADS + rect(8, 8, 16, 16, 1) + path('M10 22L22 10'), 'Switches')
    add('dip_switches', rect(4, 6, 24, 20, 2) + ''.join(rect(x, 10, 4, 12, 1) + path(f'M{x} {13 if x != 14 else 19}H{x + 4}', 2.5) for x in (7, 14, 21)), 'Switches')
    for name, value in [('hex_keypad', 'HEX'), ('hex_key', 'F'), ('ascii_key', 'A'), ('calculator_keypad', '+-')]:
        add(name, keyboard(value), 'Switches')
    for kind in ('and', 'or', 'nand', 'nor'):
        for count in (2, 3, 4):
            add(f'{kind}{count}_gate', gate(kind, count), 'Logic gates')
    for name, kind in [('buffer', 'buffer'), ('inverter', 'not'), ('schmidt_inverter', 'schmitt'), ('3-state_buffer', 'tristate'), ('xor_gate', 'xor')]:
        add(name, gate(kind), 'Logic gates')
    for name, value in [('sr_flipflop', 'SR'), ('d_flipflop', 'D'), ('jk_flipflop', 'JK'), ('latch', 'D'), ('jk_flipflop_with_clear', 'JK'), ('jk_flipflop_with_preset', 'JK')]:
        body = chip(value, clock=name != 'latch')
        if 'clear' in name:
            body += path('M16 27V30M13 30H19', 1.2)
        if 'preset' in name:
            body += path('M16 2V5M13 2H19', 1.2)
        add(name, body, 'Logic ICs')
    for names, value in [('555_timer timers', '555'), ('gates', 'AND'), ('flip-flops___latches', 'D'), ('data_selectors_multiplexers analog_multiplexers', 'MUX'), ('decoders_demultiplexers', 'DEC'), ('buffers___drivers buffers', 'BUF'), ('counters', 'CTR'), ('registers', 'REG'), ('arithmetic_circuits', 'ALU'), ('logic_comparators', '='), ('memory', 'RAM'), ('mcu', 'MCU'), ('real_ad_da', 'AD/DA'), ('analog_switches', 'SW'), ('interface', 'I/O'), ('basic_ic_packages', 'IC'), ('other_components', 'IC'), ('digital_multivibrators', 'P')]:
        add(names, chip(value), 'Logic ICs')
    for names, value in [('ideal_adc ad_converters', 'ADC'), ('ideal_dac da_converters', 'DAC')]:
        body = path('M4 6H21L28 16 21 26H4ZM1 11H4M1 21H4M28 16H31')
        add(names, body + label(value, 15, 16, .9), 'Converters')
    for names, kind in [('ideal_op._amplifier', 'ideal'), ('operational_amplifier operational_amplifiers', 'normal'), ('instrumentation_amplifiers', 'instrument'), ('comparators', 'comparator'), ('fully-differential_amplifiers difference_amplifiers', 'differential'), ('variable_gain_amplifiers', 'variable'), ('current_shunt_monitors', 'normal')]:
        add(names, amplifier(kind), 'Analog ICs')
    add('voltage_regulators', chip('REG') + path('M13 2H19M16 2V5', 1.2), 'Analog ICs')
    add('voltage_references', block('REF'), 'Analog ICs')
    add('smps', chip('DC', wave=True), 'Analog ICs')
    for name, value in [('7_segment_display', '8'), ('hex_display', 'F'), ('bus_display', 'FF'), ('ascii_display', 'A'), ('display_16-bit', '16'), ('lcd_display', 'LCD'), ('lcd_display2', 'LCD')]:
        add(name, screen(label(value, y=15, scale=1.3)), 'Displays')
    add('glcd_display', screen(path('M7 20L12 13 18 18 23 10M7 9H10', 1.3)), 'Displays')
    add('traffic_light', rect(10, 2, 12, 25, 4) + circle(16, 7, 2.2) + circle(16, 14, 2.2) + circle(16, 21, 2.2) + path('M16 27V30'), 'Displays')
    for name, kind in [('ultrasonic_sensor', 'ultrasonic'), ('PIR_sensor', 'pir'), ('light_sensor', 'light'), ('infrared_sensor', 'infrared')]:
        add(name, sensor(kind), 'Sensors')
    for name, kind in [('vco', 'sine'), ('svco', 'sine'), ('tvco', 'triangle'), ('sqvco', 'square')]:
        wave = {'sine': SINE, 'triangle': TRIANGLE, 'square': SQUARE}[kind]
        add(name, rect(5, 6, 22, 20, 2) + group(wave, 'translate(0 3)') + path('M2 16H5M27 16H30M16 2V6M13 3L16 6 19 3', 1.3), 'Analog control')
    add('lag_blocks', graph('M7 24C10 14 16 9 27 9'), 'Analog control')
    add('second_order_lag_blocks', graph('M7 24C12 24 11 4 17 9S23 12 27 10'), 'Analog control')
    add('dead_time_blocks', graph('M7 23H17V9H27'), 'Analog control')
    add('controllers', block('PID'), 'Analog control')
    add('add_sub_mult_div', rect(4, 4, 24, 24, 2) + path('M8 11H14M11 8V14M19 11H25M8 20L14 26M14 20L8 26M19 23H25M22 20V20.1M22 26V26.1', 1.4), 'Analog control')
    add('nonlinear_blocks', graph('M7 23H12L22 8H27'), 'Analog control')
    for letter in 'zghkabs':
        add(f'{letter}_matrix', rect(6, 6, 20, 20, 1) + path('M2 10H6M2 22H6M26 10H30M26 22H30') + label(letter.upper(), scale=1.5), 'Networks')
    add('microstrip', path('M3 9H29M3 23H29M3 16H29', 2), 'RF')
    add('microstrip_open_ended', path('M3 9H25M3 23H25M3 16H23', 2) + circle(25, 16, 2), 'RF')
    add('microstrip_shorted', path('M3 9H25V23H3M3 16H25', 2), 'RF')
    add('rf_circulator', circle(16, 16, 9) + path('M16 1V7M2 25L9 21M23 21L30 25M12 12A6 6 0 1 1 12 21M12 21V17M12 21H16', 1.5), 'RF')
    add('rf_direction_coupler', path('M3 9H29M3 23H29M9 9L23 23M18 23H23V18', 1.6) + rect(7, 5, 18, 22, 2), 'RF')
    add('star', path('M16 16V3M16 16L4 27M16 16L28 27') + circle(16, 16, 2), 'Networks')
    add('delta', path('M16 4L3 27H29ZM16 1V4M1 29L3 27M29 27L31 29'), 'Networks')
    add('bridge', path('M16 4L28 16 16 28 4 16ZM16 1V4M28 16H31M16 28V31M1 16H4M4 16H28'), 'Networks')
    add('jumper', path('M3 20H9Q16 5 23 20H29') + circle(9, 20, 1.2) + circle(23, 20, 1.2), 'Connections')
    add('mounting_hole', circle(16, 16, 9) + circle(16, 16, 4) + path('M16 2V7M16 25V30M2 16H7M25 16H30', 1.2), 'Connections')
    add('connectors', rect(7, 5, 18, 22, 2) + ''.join(circle(13, y, 1.5) + path(f'M3 {y}H7M19 {y}H29') for y in (10, 16, 22)), 'Connections')
    add('fpga_pin', path('M16 29V5M10 11L16 5 22 11') + rect(7, 18, 18, 6, 1), 'Connections')
    for name, value in [('initial_condition1', 'IC'), ('initial_condition2', 'IC'), ('nodeset1', 'NS'), ('nodeset2', 'NS')]:
        body = meter(value)
        if name.endswith('2'):
            body += path('M13 2H19M16 1V4', 1.2)
        add(name, body, 'Simulation')
    add('vacuum_tubes', circle(16, 16, 11) + path('M10 3V10H22M5 16H27M10 23H22M12 23V29M20 23V29', 1.4), 'Semiconductors')
    custom('7 segment display 4 digit', screen(label('8888', y=15, scale=.85)), 'Displays')
    custom('SPI', chip('SPI'), 'Sources')
    custom('HDL', chip('HDL'), 'Logic ICs')
    custom('EEPROM/ROM', chip('ROM'), 'Logic ICs')
    board = rect(4, 4, 24, 24, 3) + rect(11, 11, 10, 10, 1) + path('M2 8H4M2 16H4M2 24H4M28 8H30M28 16H30M28 24H30M8 2V4M16 2V4M24 2V4M8 28V30M16 28V30M24 28V30', 1.3)
    custom('Arduino', board + label('A', scale=.8), 'Boards')
    custom('Arduino Shields', group(board, 'translate(0 4) scale(.8)') + path('M9 3H29V23', 1.6), 'Boards')
    custom('Modules-Breakouts', board + path('M13 16H19M16 13V19', 1.2), 'Boards')


def svg(identifier, body):
    title = identifier.removeprefix('id_component_').replace('_', ' ')
    return ('<svg xmlns="http://www.w3.org/2000/svg" xmlns:dct="http://purl.org/dc/terms/" '
            'dct:license="https://github.com/MovGP0/TIARA/blob/main/LICENSE" '
            'width="32" height="32" viewBox="0 0 32 32" role="img">\n'
            f'  <title>{html.escape(title)}</title>\n'
            '  <!-- Original TIARA artwork. SPDX-License-Identifier: MIT -->\n'
            '  <g fill="none" stroke="#000000" stroke-width="1.6" stroke-linecap="round" stroke-linejoin="round">\n'
            f'    {body}\n'
            '  </g>\n</svg>\n')


def catalogue(rows):
    cards = []
    for row in rows:
        title = html.escape(row['id'].removeprefix('id_component_').replace('_', ' '))
        cards.append(f'<article data-search="{title} {row["family"]}"><div class="pair"><img src="{quote(row["file"])}" alt=""><span class="dark"><img src="{quote(row["file"])}" alt=""></span></div><span>{title}</span><small>{row["family"]}</small></article>')
    return '''<!doctype html>
<html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width">
<title>TIARA component icons</title>
<style>
*{box-sizing:border-box}body{margin:0;padding:40px;background:#f2f5f7;color:#24364a;font:14px system-ui,sans-serif}
header{max-width:1100px;margin:0 auto 30px}h1{font-size:32px;margin:8px 0}p{line-height:1.6;color:#53667a}
input{padding:12px 16px;border:1px solid #c5ced7;border-radius:8px;width:320px;font:inherit}
main{display:grid;grid-template-columns:repeat(auto-fill,minmax(155px,1fr));gap:12px;max-width:1100px;margin:auto}
article{background:white;border:1px solid #dce3e9;border-radius:10px;padding:14px;min-height:144px;overflow-wrap:anywhere}
.pair{display:flex;gap:12px;align-items:center;margin-bottom:12px}.pair>img{margin:8px}.pair img{width:29px;height:29px}
.dark{display:flex;padding:8px;border-radius:6px;background:#172331}.dark img{filter:invert(1)}
small{display:block;color:#64778b;font-size:11px;margin-top:6px}article[hidden]{display:none}
</style><header><small>TIARA / COMPONENT LIBRARY</small><h1>Clear symbols. At every scale.</h1>
<p>Original circuit symbols on a 32-unit grid. Each pair shows the 29-pixel toolbar size on light and dark backgrounds.
The application tints the paths with its theme text color. No fonts or bitmap images are required.</p>
<input type="search" placeholder="Find a component or family" aria-label="Find an icon"> <output></output></header><main>
''' + '\n'.join(cards) + '''
</main><script>
const input=document.querySelector('input');const cards=[...document.querySelectorAll('article')];
function filter(){let count=0;for(const card of cards){card.hidden=!card.dataset.search.toLowerCase().includes(input.value.toLowerCase());if(!card.hidden)count++;}document.querySelector('output').textContent=count+' icons';}
input.addEventListener('input',filter);filter();
</script></html>
'''


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    build_icons()
    rows = [{'id': identifier, 'file': quote(identifier, safe='-_. ') + '.svg', 'family': family}
            for identifier, (_, family) in sorted(ICONS.items())]
    files = {row['file']: svg(row['id'], ICONS[row['id']][0]) for row in rows}
    files['manifest.json'] = json.dumps({'license': 'MIT', 'viewBox': '0 0 32 32', 'icons': rows}, indent=2) + '\n'
    files['index.html'] = catalogue(rows)
    failures = []
    for name, content in files.items():
        target = OUTPUT / name
        if args.check:
            if not target.is_file() or target.read_text(encoding='utf-8') != content:
                failures.append(name)
        else:
            OUTPUT.mkdir(parents=True, exist_ok=True)
            target.write_text(content, encoding='utf-8', newline='\n')
    if failures:
        raise SystemExit('Generated files differ: ' + ', '.join(failures))
    print(f'{len(rows)} component icons {"checked" if args.check else "written"}.')


if __name__ == '__main__':
    main()
