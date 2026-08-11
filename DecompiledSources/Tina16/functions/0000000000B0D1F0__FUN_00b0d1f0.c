/* Ghidra address: 00b0d1f0 */
/* Ghidra symbol: FUN_00b0d1f0 */


undefined8 * FUN_00b0d1f0(undefined8 *param_1,longlong param_2,short *param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_74;
  int local_58;
  longlong local_40 [2];
  
  local_40[0] = 0;
  iVar3 = FUN_00416420(param_3,param_4);
  if (((iVar3 == 0) || (iVar3 = FUN_00416420(param_2,0), iVar3 == 0)) ||
     (iVar3 = FUN_00416420(param_3,0), iVar3 == 0)) {
    FUN_00414b90(param_1,param_2);
  }
  else {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_2 + -4) >> 1;
    }
    uVar5 = 0;
    if (param_3 != (short *)0x0) {
      uVar5 = *(uint *)(param_3 + -2) >> 1;
    }
    uVar6 = 0;
    if (param_4 != 0) {
      uVar6 = *(uint *)(param_4 + -4) >> 1;
    }
    iVar3 = 0;
    FUN_00419260(local_40,&DAT_00b0d1b0,1,(longlong)(int)(uVar4 / uVar5 + 1));
    for (local_74 = 1; local_74 <= (int)((uVar4 - uVar5) + 1); local_74 = local_74 + 1) {
      if (*(short *)(param_2 + -2 + (longlong)local_74 * 2) == *param_3) {
        uVar9 = FUN_00415f70(param_3);
        cVar2 = FUN_0043e2c0(param_2 + -2 + (longlong)local_74 * 2,uVar9,uVar5 * 2);
        if (cVar2 != '\0') {
          *(int *)(local_40[0] + (longlong)iVar3 * 4) = local_74;
          iVar3 = iVar3 + 1;
          local_74 = local_74 + uVar5 + -1;
        }
      }
    }
    if (iVar3 < 1) {
      FUN_00414b90(param_1,param_2);
    }
    else {
      FUN_00416660(param_1,uVar4 + iVar3 * (uVar6 - uVar5));
      local_58 = 1;
      lVar7 = FUN_00415f70(param_2);
      lVar8 = FUN_00415f70(*param_1);
      uVar9 = FUN_00415f70(param_4);
      local_74 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar10 = (longlong)local_74;
          FUN_00409a70(lVar7,lVar8,(longlong)((*(int *)(local_40[0] + lVar10 * 4) - local_58) * 2));
          lVar8 = lVar8 + (longlong)(*(int *)(local_40[0] + lVar10 * 4) - local_58) * 2;
          FUN_00409a70(uVar9,lVar8,(longlong)(int)(uVar6 * 2));
          lVar8 = lVar8 + (longlong)(int)uVar6 * 2;
          iVar1 = *(int *)(local_40[0] + lVar10 * 4);
          lVar7 = lVar7 + (longlong)(int)((iVar1 - local_58) + uVar5) * 2;
          local_58 = iVar1 + uVar5;
          local_74 = local_74 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00409a70(lVar7,lVar8,(longlong)(int)(((uVar4 - local_58) + 1) * 2));
    }
    FUN_00419430(local_40,&DAT_00b0d1b0);
  }
  FUN_00419430(local_40,&DAT_00b0d1b0);
  return param_1;
}

