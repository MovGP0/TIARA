/* Ghidra address: 00a18b40 */
/* Ghidra symbol: FUN_00a18b40 */


void FUN_00a18b40(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar3 = *param_4;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x260) + 0xe8 + (longlong)*(int *)(param_2 + 4));
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x260) + 0xf2 + (longlong)*(int *)(param_2 + 4));
    iVar5 = -2;
    if (bVar1 == 0) {
      iVar5 = -1;
    }
    lVar10 = 0;
    uVar9 = 0;
    do {
      if ((ulonglong)*(uint *)(param_1 + 0x88) != 0) {
        uVar7 = *(ulonglong *)(lVar3 + uVar9 * 8);
        uVar6 = *(uint *)(param_1 + 0x88) + uVar7;
        puVar8 = *(undefined1 **)(param_3 + lVar10 * 8);
        do {
          if (bVar1 != 0) {
            FUN_00626680(uVar7,*puVar8,(ulonglong)(iVar5 + 1 + (uint)bVar1) + 1);
            iVar4 = bVar1 + 1;
            do {
              uVar7 = uVar7 + 1;
              iVar4 = iVar4 + -1;
            } while (1 < iVar4);
          }
          puVar8 = puVar8 + 1;
        } while (uVar7 < uVar6);
      }
      if (1 < bVar2) {
        FUN_00a1bca0(lVar3,uVar9 & 0xffffffff,lVar3,(int)uVar9 + 1,bVar2 - 1,
                     *(undefined4 *)(param_1 + 0x88));
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + bVar2;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x19c));
  }
  return;
}

