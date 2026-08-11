/* Ghidra address: 00f8bba0 */
/* Ghidra symbol: FUN_00f8bba0 */


undefined8 FUN_00f8bba0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x3464) == 0x20) {
    FUN_00414ad0(param_2,L"flash_rom");
  }
  else {
    FUN_00416ba0(param_2,L"flash_rom_",*(undefined8 *)(param_1 + 0x3440));
  }
  return param_2;
}

