/* Ghidra address: 01d447a0 */
/* Ghidra symbol: FUN_01d447a0 */


undefined1 FUN_01d447a0(longlong param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong in_R10;
  bool bVar3;
  
  uVar1 = 0;
  if (param_2 < 0x10) {
    uVar2 = (int)CONCAT62((int6)(in_R10 >> 0x10),1) << ((byte)param_2 & 0x1f);
    in_R10 = (ulonglong)uVar2;
    bVar3 = (uVar2 & 0x3fe) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if (param_3 < 0x10) {
      bVar3 = ((int)CONCAT62((int6)(in_R10 >> 0x10),1) << ((byte)param_3 & 0x1f) & 0x3feU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = param_2;
      if ((int)param_3 <= (int)param_2) {
        uVar2 = param_3;
        param_3 = param_2;
      }
      uVar1 = *(undefined1 *)(param_1 + -10 + (longlong)(int)uVar2 * 9 + (longlong)(int)param_3);
    }
  }
  return uVar1;
}

