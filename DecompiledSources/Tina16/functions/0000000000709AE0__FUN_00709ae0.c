/* Ghidra address: 00709ae0 */
/* Ghidra symbol: FUN_00709ae0 */


void FUN_00709ae0(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [24];
  
  if (-1 < param_2) {
    iVar2 = FUN_00709c10(param_1);
    if (param_2 < iVar2) {
      FUN_00709ce0(param_1,local_38,param_2);
      uVar1 = FUN_00786090(param_1);
      thunk_FUN_03a2fc9d(uVar1,local_38,0xffffffff);
    }
  }
  if (-1 < param_3) {
    iVar2 = FUN_00709c10(param_1);
    if (param_3 < iVar2) {
      FUN_00709ce0(param_1,local_38,param_3);
      uVar1 = FUN_00786090(param_1);
      thunk_FUN_03a2fc9d(uVar1,local_38,0xffffffff);
    }
  }
  return;
}

