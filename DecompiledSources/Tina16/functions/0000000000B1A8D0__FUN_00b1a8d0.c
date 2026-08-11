/* Ghidra address: 00b1a8d0 */
/* Ghidra symbol: FUN_00b1a8d0 */


void FUN_00b1a8d0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 8))(param_1,param_2,local_20);
  uVar3 = FUN_00414df0(local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  uVar1 = FUN_00b1a7a0(param_1,uVar3,uVar1);
  lVar4 = FUN_004aeac0(param_1[1],uVar1);
  if (lVar4 != 0) {
    iVar2 = FUN_004aeba0(lVar4,param_2);
    if (-1 < iVar2) {
      FUN_004ae870(lVar4,iVar2);
    }
  }
  FUN_004144d0(local_20);
  return;
}

