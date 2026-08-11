/* Ghidra address: 00acd590 */
/* Ghidra symbol: FUN_00acd590 */


ulonglong FUN_00acd590(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 unaff_RBX;
  
  *param_3 = 0;
  if (param_2 == 0) {
    FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00acd5e8,
                 *(undefined8 *)(param_1 + 0xe0));
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2 == 0) & 0xffffffff;
}

