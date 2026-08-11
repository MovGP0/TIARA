/* Ghidra address: 00849eb0 */
/* Ghidra symbol: FUN_00849eb0 */


void FUN_00849eb0(void)

{
  undefined8 uVar1;
  undefined4 *in_R9;
  undefined4 *in_stack_00000028;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_0083fdd0();
  local_20 = (undefined4)uVar1;
  *in_R9 = local_20;
  uStack_1c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *in_stack_00000028 = uStack_1c;
  return;
}

