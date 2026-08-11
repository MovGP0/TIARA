/* Ghidra address: 01c207e0 */
/* Ghidra symbol: FUN_01c207e0 */


void FUN_01c207e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *in_stack_00000048;
  undefined8 local_10;
  
  local_10 = 0;
  *in_stack_00000048 = 0xffff;
  FUN_00467310(&local_10,param_4);
  FUN_01bcce90(*(undefined8 *)(param_1 + 0x6c8),local_10);
  FUN_00414520(&local_10);
  return;
}

