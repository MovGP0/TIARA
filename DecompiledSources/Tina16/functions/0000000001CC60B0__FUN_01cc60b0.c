/* Ghidra address: 01cc60b0 */
/* Ghidra symbol: FUN_01cc60b0 */


void FUN_01cc60b0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar1 + 0x10) + -1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    lVar5 = FUN_01d347d0(lVar1,iVar2);
    iVar2 = *(int *)(lVar5 + 0x160);
  }
  FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x438),(longlong)iVar2);
  iVar3 = *(int *)(lVar1 + 0x10) - param_2;
  if (param_2 < 1) {
    iVar3 = 0;
  }
  if ((-1 < iVar3) && (iVar6 = *(int *)(lVar1 + 0x10) + -1, iVar3 <= iVar6)) {
    iVar6 = (iVar6 - iVar3) + 1;
    do {
      lVar5 = FUN_01d347d0(lVar1,iVar3);
      FUN_0040d200(lVar5 + 0x1a,0x11,0);
      *(undefined1 *)(lVar5 + 0x2a) = 1;
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      lVar5 = FUN_01d347d0(lVar1,iVar3);
      FUN_0040d200(lVar5 + 0x48,0x88);
      iVar4 = 0;
      do {
        *(undefined1 *)(lVar5 + 0x58 + (longlong)iVar4 * 0x11) = 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 8);
      FUN_0040d200(lVar5 + 0xd0,0x80,0);
      *(longlong *)(lVar5 + 0x160) = (longlong)iVar2;
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_01cc2910(lVar1);
  FUN_004b6e40(*(undefined8 *)(lVar1 + 0x438),(longlong)iVar2);
  return;
}

