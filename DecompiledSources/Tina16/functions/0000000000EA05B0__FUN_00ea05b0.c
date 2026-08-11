/* Ghidra address: 00ea05b0 */
/* Ghidra symbol: FUN_00ea05b0 */


ulonglong FUN_00ea05b0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint local_60;
  int local_5c;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar3 = FUN_00ea0200(param_1,0,8,&local_5c);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (0 < local_5c) {
    uVar3 = FUN_00ea0200(param_1,0,7,&local_60);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = FUN_00ea0200(param_1,0,9,&local_58);
    uVar3 = local_58;
    iVar7 = local_5c;
    uVar9 = local_60;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (0 < local_5c) {
      iVar10 = local_5c / 2;
      iVar1 = local_60 * iVar10;
      iVar2 = FUN_00ea12d0(param_2,local_58 + 2 + (longlong)iVar1 * 2);
      if (iVar2 == 0) {
        uVar4 = uVar3 + (longlong)iVar1 * 2;
      }
      else {
        local_50 = uVar9;
        local_48 = uVar3;
        local_4c = iVar7;
        iVar7 = 0;
        do {
          uVar4 = local_58;
          if (iVar2 < 1) {
            local_5c = iVar10;
            if (iVar10 <= iVar7) {
              return 0xfffffff9;
            }
          }
          else {
            iVar7 = iVar10 + 1;
            if (local_5c <= iVar7) {
              return 0xfffffff9;
            }
          }
          lVar5 = (longlong)(int)local_60;
          iVar10 = (local_5c + iVar7) / 2;
          iVar2 = FUN_00ea12d0(param_2,local_58 + 2 + iVar10 * lVar5 * 2);
        } while (iVar2 != 0);
        uVar4 = uVar4 + iVar10 * lVar5 * 2;
        uVar3 = local_48;
        iVar7 = local_4c;
        uVar9 = local_50;
      }
      uVar3 = uVar3 + (longlong)(int)((iVar7 + -1) * uVar9) * 2;
      uVar8 = uVar4;
      if (local_58 < uVar4) {
        uVar6 = (ulonglong)local_60;
        do {
          iVar7 = FUN_00ea12d0(param_2,uVar8 + (longlong)(int)uVar6 * -2 + 2);
          if (iVar7 != 0) break;
          uVar6 = (ulonglong)(int)local_60;
          uVar8 = uVar8 + uVar6 * -2;
        } while (local_58 < uVar8);
      }
      if (uVar4 < uVar3) {
        uVar6 = (ulonglong)local_60;
        do {
          iVar7 = FUN_00ea12d0(param_2,uVar4 + 2 + (longlong)(int)uVar6 * 2);
          if (iVar7 != 0) break;
          uVar6 = (ulonglong)(int)local_60;
          uVar4 = uVar4 + uVar6 * 2;
        } while (uVar4 < uVar3);
      }
      *param_3 = uVar8;
      *param_4 = uVar4;
      return (ulonglong)local_60;
    }
  }
  return 0xfffffff9;
}

