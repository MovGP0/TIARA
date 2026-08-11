/* Ghidra address: 00ae79f0 */
/* Ghidra symbol: FUN_00ae79f0 */


longlong * FUN_00ae79f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50 [2];
  short local_3a;
  longlong local_38;
  longlong local_30;
  
  local_50[0] = 0;
  local_58 = param_2;
  FUN_00414480(param_1);
  lVar3 = local_58;
  iVar1 = 0;
  if (local_58 != 0) {
    iVar1 = *(int *)(local_58 + -4);
  }
  if (0 < iVar1) {
    local_30 = FUN_00416740(local_58);
    iVar1 = 0;
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + -4);
    }
    local_38 = local_30 + -2 + (longlong)iVar1 * 2;
    FUN_00ae74e0(auStack_78);
    while (local_3a != 0) {
      if (local_3a == 0x26) {
        FUN_00ae7670(auStack_78,local_50);
        lVar3 = local_50[0];
        iVar1 = 0;
        if (local_50[0] != 0) {
          iVar1 = *(int *)(local_50[0] + -4);
        }
        if (0 < iVar1) {
          iVar4 = 0;
          if (*param_1 != 0) {
            iVar4 = *(int *)(*param_1 + -4);
          }
          FUN_004169f0(param_1,iVar4 + iVar1);
          uVar2 = FUN_00416740(lVar3);
          lVar3 = FUN_00414de0(param_1);
          FUN_00409a70(uVar2,lVar3 + -2 + (longlong)(iVar4 + 1) * 2,(longlong)(iVar1 * 2));
        }
      }
      else {
        iVar1 = 0;
        if (*param_1 != 0) {
          iVar1 = *(int *)(*param_1 + -4);
        }
        FUN_004169f0(param_1,iVar1 + 1);
        lVar3 = FUN_00414de0(param_1);
        iVar1 = 0;
        if (*param_1 != 0) {
          iVar1 = *(int *)(*param_1 + -4);
        }
        *(short *)(lVar3 + -2 + (longlong)iVar1 * 2) = local_3a;
        FUN_00ae74e0(auStack_78);
      }
    }
  }
  FUN_00414480(local_50);
  return param_1;
}

