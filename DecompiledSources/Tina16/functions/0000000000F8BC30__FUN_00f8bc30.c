/* Ghidra address: 00f8bc30 */
/* Ghidra symbol: FUN_00f8bc30 */


undefined8 FUN_00f8bc30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x3464) == 0x20) {
    FUN_00414ad0(param_2,L"flash_rom");
  }
  else {
    FUN_00f8ca80(param_1,&local_10,param_3);
    FUN_00416ba0(param_2,L"flash_rom_",local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

