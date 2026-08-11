/* Ghidra address: 004b62f0 */
/* Ghidra symbol: FUN_004b62f0 */


void FUN_004b62f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x71) == '\0') {
    if (((((char)param_1[9] != '\0') && ((*(byte *)((longlong)param_1 + 0x32) & 8) == 0)) &&
        (*(char *)((longlong)param_1 + 0x49) != '\x01')) &&
       (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), 5 < iVar1)) {
      FUN_004b60d0(param_1,param_2);
      return;
    }
    FUN_004b5f70(param_1,param_2);
  }
  else {
    FUN_004b4210(param_1,param_2);
  }
  return;
}

