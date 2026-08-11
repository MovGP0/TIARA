/* Ghidra address: 01703d10 */
/* Ghidra symbol: FUN_01703d10 */


ulonglong FUN_01703d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 unaff_RBX;
  
  *param_4 = 0;
  FUN_01b1e020(*(undefined8 *)(param_1 + 0x768));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

