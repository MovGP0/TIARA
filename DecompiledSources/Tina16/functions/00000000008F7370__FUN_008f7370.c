/* Ghidra address: 008f7370 */
/* Ghidra symbol: FUN_008f7370 */


undefined8 FUN_008f7370(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00419260(local_40,&DAT_004065c0,1,uVar1);
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + -4) >> 1;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + -4) >> 1;
  }
  if (uVar1 < uVar2) {
    iVar5 = 0;
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_2 + -4) >> 1;
    }
    iVar4 = 1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_00415e60(local_50,*(undefined2 *)(param_2 + -2 + (longlong)iVar4 * 2));
      iVar3 = FUN_00417170(local_50[0],param_3,1);
      if (iVar3 < 1) {
        *(undefined2 *)(local_40[0] + (longlong)iVar5 * 2) =
             *(undefined2 *)(param_2 + -2 + (longlong)iVar4 * 2);
        iVar5 = iVar5 + 1;
      }
      else if (iVar3 <= (int)uVar1) {
        *(undefined2 *)(local_40[0] + (longlong)iVar5 * 2) =
             *(undefined2 *)(param_4 + -2 + (longlong)iVar3 * 2);
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_00419260(local_40,&DAT_004065c0,1,(longlong)iVar5);
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + -4) >> 1;
    }
    iVar5 = 1;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar6 = (longlong)iVar5;
      FUN_00415e60(&local_58,*(undefined2 *)(param_2 + -2 + lVar6 * 2));
      iVar4 = FUN_00417170(local_58,param_3,1);
      if (iVar4 < 1) {
        *(undefined2 *)(local_40[0] + lVar6 * 2) = *(undefined2 *)(param_2 + -2 + lVar6 * 2);
      }
      else {
        *(undefined2 *)(local_40[0] + lVar6 * 2) =
             *(undefined2 *)(param_4 + -2 + (longlong)iVar4 * 2);
      }
      iVar5 = iVar5 + 1;
    }
  }
  lVar6 = 0;
  if (local_40[0] != 0) {
    lVar6 = *(longlong *)(local_40[0] + -8);
  }
  FUN_00456360(&local_60,local_40[0],lVar6 + -1);
  FUN_004168e0(param_1,local_60);
  FUN_00414480(&local_60);
  FUN_004145c0(&local_58,2);
  FUN_00419430(local_40,&DAT_004065c0);
  return param_1;
}

