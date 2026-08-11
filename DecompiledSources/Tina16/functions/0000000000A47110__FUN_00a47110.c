/* Ghidra address: 00a47110 */
/* Ghidra symbol: FUN_00a47110 */


void FUN_00a47110(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = thunk_FUN_0418f5de(param_2,param_4,0);
    thunk_FUN_03a5de49(param_2);
  }
  iVar1 = thunk_FUN_0416e0b3(param_2,param_3,0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),
                             *(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 8),0);
  if (lVar2 != 0) {
    thunk_FUN_0418f5de(param_2,lVar2,0);
  }
  if (iVar1 == 0) {
    FUN_0044d470();
  }
  return;
}

