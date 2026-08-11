/* Ghidra address: 00b41d20 */
/* Ghidra symbol: FUN_00b41d20 */


int FUN_00b41d20(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_00b41cf0(param_1,param_2);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    lVar1 = FUN_00b41cf0(param_1,param_2);
    iVar2 = (param_2 + 1) * 0x400 + *(int *)(lVar1 + 0x10);
  }
  return iVar2;
}

