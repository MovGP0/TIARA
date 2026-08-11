/* Ghidra address: 017d1f40 */
/* Ghidra symbol: FUN_017d1f40 */


void FUN_017d1f40(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8);
      sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
      if ((sVar3 == 10) ||
         (sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                            (*(longlong **)(lVar1 + 0x128)), sVar3 == 0x6d)) {
        iVar4 = 1;
        for (uVar5 = (uint)*(byte *)(lVar1 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
          pcVar2 = *(char **)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)iVar4 * 8);
          if (*pcVar2 == '\x02') {
            *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + 8) = 0;
          }
          iVar4 = iVar4 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

