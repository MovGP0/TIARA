/* Ghidra address: 00d9afc0 */
/* Ghidra symbol: FUN_00d9afc0 */


ulonglong FUN_00d9afc0(void)

{
  undefined8 unaff_RBX;
  undefined8 *in_stack_00000040;
  undefined8 local_20 [2];
  
  FUN_00423c20(local_20,0x10,0x10);
  *in_stack_00000040 = local_20[0];
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

