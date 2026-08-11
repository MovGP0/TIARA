/* Ghidra address: 00f49450 */
/* Ghidra symbol: FUN_00f49450 */


void FUN_00f49450(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = 0;
  if (param_2 != 0) {
    iVar2 = 3;
    do {
      lVar3 = (longlong)iVar2;
      lVar4 = (longlong)(iVar2 + 1);
      if ((*(int *)(param_2 + 0xc + lVar3 * 8) != *(int *)(param_2 + 0xc + lVar4 * 8)) ||
         (*(int *)(param_2 + 0x10 + lVar3 * 8) != *(int *)(param_2 + 0x10 + lVar4 * 8))) {
        lVar1 = FUN_00f48c60(&DAT_00f452b0,1,0,lVar1);
        *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_2 + 0xc + lVar3 * 8);
        *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 0x10 + lVar3 * 8);
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 0xc + lVar4 * 8);
        *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x10 + lVar4 * 8);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

