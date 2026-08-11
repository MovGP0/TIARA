/* Ghidra address: 01d44830 */
/* Ghidra symbol: FUN_01d44830 */


void FUN_01d44830(longlong param_1,uint param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong in_R10;
  bool bVar2;
  
  if (param_2 < 0x10) {
    uVar1 = (int)CONCAT62((int6)(in_R10 >> 0x10),1) << ((byte)param_2 & 0x1f);
    in_R10 = (ulonglong)uVar1;
    bVar2 = (uVar1 & 0x3fe) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (param_3 < 0x10) {
      bVar2 = ((int)CONCAT62((int6)(in_R10 >> 0x10),1) << ((byte)param_3 & 0x1f) & 0x3feU) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar1 = param_2;
      if ((int)param_3 <= (int)param_2) {
        uVar1 = param_3;
        param_3 = param_2;
      }
      *(undefined1 *)(param_1 + -10 + (longlong)(int)uVar1 * 9 + (longlong)(int)param_3) = param_4;
    }
  }
  return;
}

