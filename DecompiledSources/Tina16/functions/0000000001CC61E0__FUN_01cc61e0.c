/* Ghidra address: 01cc61e0 */
/* Ghidra symbol: FUN_01cc61e0 */


void FUN_01cc61e0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = FUN_01d347d0(lVar1,0);
  uVar2 = FUN_00b905f0(*(undefined4 *)(lVar4 + 0x2c),0);
  FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x438),0);
  iVar6 = *(int *)(lVar1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_01d347d0(lVar1,iVar5);
      FUN_0040d200(lVar4 + 0x1a,0x11,0);
      *(undefined1 *)(lVar4 + 0x2a) = 1;
      FUN_0040d200(lVar4 + 0x48,0x88);
      iVar3 = 0;
      do {
        *(undefined1 *)(lVar4 + 0x58 + (longlong)iVar3 * 0x11) = 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      FUN_0040d200(lVar4 + 0xd0,0x80,0);
      *(undefined4 *)(lVar4 + 0x2c) = uVar2;
      *(undefined8 *)(lVar4 + 0x160) = 0;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_01cc2910(lVar1);
  FUN_004b6e40(*(undefined8 *)(lVar1 + 0x438),0);
  return;
}

