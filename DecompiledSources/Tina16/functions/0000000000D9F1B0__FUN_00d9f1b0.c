/* Ghidra address: 00d9f1b0 */
/* Ghidra symbol: FUN_00d9f1b0 */


ulonglong FUN_00d9f1b0(void)

{
  undefined8 unaff_RBX;
  undefined8 *in_stack_00000038;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00423010(&local_38,0,0,0x10,0x10);
  *in_stack_00000038 = local_38;
  in_stack_00000038[1] = uStack_30;
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

