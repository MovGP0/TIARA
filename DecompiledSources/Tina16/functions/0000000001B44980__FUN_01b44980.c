/* Ghidra address: 01b44980 */
/* Ghidra symbol: FUN_01b44980 */


ulonglong FUN_01b44980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 unaff_RBX;
  
  *param_4 = 0;
  FUN_01b1e020(*(undefined8 *)(param_1 + 0x6c0));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

