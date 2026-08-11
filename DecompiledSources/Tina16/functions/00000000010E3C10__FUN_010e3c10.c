/* Ghidra address: 010e3c10 */
/* Ghidra symbol: FUN_010e3c10 */


ulonglong FUN_010e3c10(longlong param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x8d1) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    *(undefined1 *)(param_1 + 0x7ed) = 0;
    FUN_00805200();
  }
  return uVar1 & 0xffffffff;
}

