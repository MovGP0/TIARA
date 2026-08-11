/* Ghidra address: 00bcfd90 */
/* Ghidra symbol: FUN_00bcfd90 */


undefined8 FUN_00bcfd90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    FUN_00bcfba0(param_1,param_2,&DAT_00bcfea4);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x48);
    if (cVar1 == '\0') {
      FUN_00414b50(&local_10,&DAT_00bcfea4);
    }
    else if (cVar1 == '\x01') {
      FUN_00414b50(&local_10,&DAT_00bcfeb8);
    }
    else if (cVar1 == '\x02') {
      FUN_00414b50(&local_10,&DAT_00bcfec8);
    }
    else if (cVar1 == '\x03') {
      FUN_00414b50(&local_10,&LAB_00bcfed8);
    }
    FUN_00bcfba0(param_1,param_2,local_10);
    if (*(char *)(param_1 + 0x49) != '\0') {
      FUN_00416ad0(param_2,local_10);
    }
  }
  FUN_00414480(&local_10);
  return param_2;
}

