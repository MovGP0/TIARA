/* Ghidra address: 00a22a60 */
/* Ghidra symbol: FUN_00a22a60 */


void FUN_00a22a60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  FUN_00a1bca0(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x30))
  ;
  uVar1 = *(uint *)(param_1 + 0x13c);
  if (0 < (int)uVar1) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar7 = (ulonglong)uVar2;
    iVar4 = *(int *)(param_2 + 0x1c) * 8;
    if (0 < (int)(iVar4 - uVar2)) {
      iVar5 = (uVar2 - 1) + *(int *)(param_2 + 0x1c) * -8;
      iVar6 = -2;
      if (-3 < iVar5) {
        iVar6 = iVar5;
      }
      lVar11 = (ulonglong)((1 - uVar2) + iVar4 + iVar6) + 1;
      uVar8 = (ulonglong)(uVar1 & 3);
      if ((ulonglong)uVar1 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(param_4 + lVar9 * 8);
          FUN_00626680(lVar3 + uVar7,*(undefined1 *)(lVar3 + -1 + uVar7),lVar11);
          lVar3 = *(longlong *)(param_4 + 8 + lVar9 * 8);
          FUN_00626680(lVar3 + uVar7,*(undefined1 *)(lVar3 + -1 + uVar7),lVar11);
          lVar3 = *(longlong *)(param_4 + 0x10 + lVar9 * 8);
          FUN_00626680(lVar3 + uVar7,*(undefined1 *)(lVar3 + -1 + uVar7),lVar11);
          lVar3 = *(longlong *)(param_4 + 0x18 + lVar9 * 8);
          FUN_00626680(lVar3 + uVar7,*(undefined1 *)(lVar3 + -1 + uVar7),lVar11);
          lVar9 = lVar9 + 4;
        } while (uVar1 - uVar8 != lVar9);
      }
      if (uVar8 != 0) {
        plVar10 = (longlong *)(param_4 + lVar9 * 8);
        lVar9 = -uVar8;
        do {
          FUN_00626680(*plVar10 + uVar7,*(undefined1 *)(*plVar10 + -1 + uVar7),lVar11);
          plVar10 = plVar10 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  return;
}

