/* Ghidra address: 0147e690 */
/* Ghidra symbol: FUN_0147e690 */


undefined8 FUN_0147e690(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 9) {
    FUN_00414ad0(param_1,L"resistor");
  }
  else if (param_2 == 0xe) {
    FUN_00414ad0(param_1,L"voltage_source");
  }
  else if (param_2 == 0x10) {
    FUN_00414ad0(param_1,L"voltage_source");
  }
  else if (param_2 == 0xb) {
    FUN_00414ad0(param_1,L"inductor");
  }
  else if (param_2 == 10) {
    FUN_00414ad0(param_1,L"capacitor");
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,L"voltmeter");
  }
  else if (param_2 == 0x21) {
    FUN_00414ad0(param_1,L"voltmeter2");
  }
  else if (param_2 == 0x57) {
    FUN_00414ad0(param_1,L"transistor_npn");
  }
  else if (param_2 == 0x58) {
    FUN_00414ad0(param_1,L"transistor_pnp");
  }
  else if (param_2 == 0x18) {
    FUN_00414ad0(param_1,L"transistor_npn");
  }
  else if (param_2 == 0x19) {
    FUN_00414ad0(param_1,L"transistor_pnp");
  }
  else if (param_2 == 0x59) {
    FUN_00414ad0(param_1,L"nmos2");
  }
  else if (param_2 == 0x5b) {
    FUN_00414ad0(param_1,L"dnmos2");
  }
  else if (param_2 == 0x17) {
    FUN_00414ad0(param_1,L"diode");
  }
  else if (param_2 == 0x2d) {
    FUN_00414ad0(param_1,&DAT_0147ec38);
  }
  else if (param_2 == 0x55) {
    FUN_00414ad0(param_1,L"opamp2");
  }
  else if (param_2 == 0x56) {
    FUN_00414ad0(param_1,L"iopamp2");
  }
  else if (param_2 == 0x43) {
    FUN_00414ad0(param_1,L"battery");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"ground");
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L"voltage_pin");
  }
  else if (param_2 == 0x3f7) {
    FUN_00414ad0(param_1,L"d_flipflop");
  }
  else if (param_2 == 0x3f6) {
    FUN_00414ad0(param_1,L"jk_flipflop");
  }
  else if (((param_2 == 0x3ea) || (param_2 == 0x3f2)) || (param_2 == 0x8ed)) {
    FUN_00414ad0(param_1,&DAT_0147ed28);
  }
  else if (((param_2 == 0x3ed) || (param_2 == 0x3f3)) || (param_2 == 0x3f8)) {
    FUN_00414ad0(param_1,L"nand");
  }
  else if (((param_2 == 0x3eb) || (param_2 == 0x3f4)) || (param_2 == 0x8f5)) {
    FUN_00414ad0(param_1,&PTR_s_B_0147ed54);
  }
  else if (param_2 == 0x3f9) {
    FUN_00414ad0(param_1,&DAT_0147ed68);
  }
  else if (param_2 == 0x3e9) {
    FUN_00414ad0(param_1,&DAT_0147ed7c);
  }
  else if (param_2 == 0x3ec) {
    FUN_00414ad0(param_1,&DAT_0147ed90);
  }
  else if (param_2 == 0x3fe) {
    FUN_00414ad0(param_1,L"clock");
  }
  else {
    local_18 = 0;
    local_20[0] = param_2;
    FUN_00442f70(&local_10,L"ClassIDToTypeStr: %d",local_20,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return param_1;
}

