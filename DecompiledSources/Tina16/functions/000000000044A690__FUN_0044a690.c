/* Ghidra address: 0044a690 */
/* Ghidra symbol: FUN_0044a690 */


void FUN_0044a690(longlong param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  while( true ) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (iVar1 < *param_2) {
      return;
    }
    uVar2 = *(short *)(param_1 + -2 + (longlong)*param_2 * 2) - 0x30;
    if (uVar2 < 0x10) {
      bVar3 = ((int)CONCAT62((int6)(short)((uint)*param_2 >> 0x10),1) << ((byte)uVar2 & 0x1f) &
              0x3ffU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) break;
    uVar2 = *(ushort *)(param_1 + -2 + (longlong)*param_2 * 2);
    if ((uVar2 < 0xd800) || (0xdfff < uVar2)) {
      *param_2 = *param_2 + 1;
    }
    else {
      iVar1 = FUN_0044f730(param_1,*param_2);
      *param_2 = iVar1;
    }
  }
  return;
}

