/* Ghidra address: 01c07040 */
/* Ghidra symbol: FUN_01c07040 */


undefined8 FUN_01c07040(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if ((*(char *)(lVar1 + 0x96) == '\0') || (*(short *)(lVar1 + 0x8c) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return uVar2;
}

