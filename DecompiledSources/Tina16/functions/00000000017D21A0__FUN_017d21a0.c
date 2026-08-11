/* Ghidra address: 017d21a0 */
/* Ghidra symbol: FUN_017d21a0 */


void FUN_017d21a0(longlong param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar9 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  if (0 < iVar9) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8);
      sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
      if ((sVar3 == 0x62) && (iVar7 = iVar7 + 1, iVar7 != param_2)) {
        iVar4 = 1;
        for (uVar8 = (uint)*(byte *)(lVar1 + 4); uVar8 != 0; uVar8 = uVar8 - 1) {
          lVar5 = (longlong)iVar4;
          pcVar2 = *(char **)(*(longlong *)(lVar1 + 0x40) + -8 + lVar5 * 8);
          if (*pcVar2 == '\x06') {
            **(undefined8 **)(pcVar2 + 0x18) = 0;
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + lVar5 * 8) + 0x18) + 8)
                 = 0;
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + lVar5 * 8) + 0x18) +
             0x10) = 0;
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + lVar5 * 8) + 0x18) +
             0x18) = 0;
          }
          iVar4 = iVar4 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}

