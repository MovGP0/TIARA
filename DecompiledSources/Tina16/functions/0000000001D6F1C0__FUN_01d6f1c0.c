/* Ghidra address: 01d6f1c0 */
/* Ghidra symbol: FUN_01d6f1c0 */


void FUN_01d6f1c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_3;
  uVar3 = FUN_016ebdc0();
  sVar2 = FUN_01d03160(uVar3);
  if ((sVar2 == 0xbb9) || (sVar2 == 0xbba)) {
    iVar5 = *(int *)(lVar1 + 0x54);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_015f7500(uVar3,iVar4,*(undefined4 *)(lVar1 + 0x5c + (longlong)iVar4 * 4),
                     *(undefined4 *)(lVar1 + 0x54),3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    **(undefined2 **)(lVar1 + 0x30) = *(undefined2 *)(lVar1 + 0x58);
  }
  uVar3 = FUN_019a45d0();
  uVar3 = FUN_0198d430(uVar3);
  FUN_01d04aa0(*(undefined8 *)(lVar1 + 0x38),uVar3);
  return;
}

