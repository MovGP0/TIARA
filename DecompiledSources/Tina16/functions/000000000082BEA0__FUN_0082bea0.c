/* Ghidra address: 0082bea0 */
/* Ghidra symbol: FUN_0082bea0 */


undefined1 FUN_0082bea0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x529) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x529);
    if (bVar1 < 8) {
      uVar2 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f);
      param_3 = (ulonglong)uVar2;
      bVar3 = (uVar2 & 0x12) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3 == (bool)*(char *)(param_1 + 0x4a8)) {
      if (bVar1 < 8) {
        bVar3 = ((int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f) & 0x24U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (((bVar3 == (bool)*(char *)(param_1 + 0x499)) &&
          (*(int *)(param_1 + 0x4f0) == *(int *)(&DAT_01e17818 + (ulonglong)bVar1 * 4))) &&
         (*(char *)(param_1 + 0x535) == '\0')) goto LAB_0082bf32;
    }
    *(undefined1 *)(param_1 + 0x529) = 0;
  }
LAB_0082bf32:
  return *(undefined1 *)(param_1 + 0x529);
}

