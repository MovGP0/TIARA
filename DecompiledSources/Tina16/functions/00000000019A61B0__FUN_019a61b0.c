/* Ghidra address: 019a61b0 */
/* Ghidra symbol: FUN_019a61b0 */


void FUN_019a61b0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (bVar4) {
        uVar1 = *(short *)(param_2 + -2 + (longlong)iVar2 * 2) - 0x20;
        if (uVar1 < 0x10) {
          bVar4 = ((int)CONCAT62((int6)(short)((uint)iVar2 >> 0x10),1) << ((byte)uVar1 & 0x1f) &
                  0x1001U) != 0;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) goto LAB_019a620b;
        bVar4 = true;
      }
      else {
LAB_019a620b:
        bVar4 = false;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

