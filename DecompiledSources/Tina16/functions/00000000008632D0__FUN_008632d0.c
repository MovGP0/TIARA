/* Ghidra address: 008632d0 */
/* Ghidra symbol: FUN_008632d0 */


undefined4 FUN_008632d0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  undefined8 *in_stack_00000028;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_res20 = in_R9;
  FUN_0041b910(in_R9);
  *in_stack_00000028 = 0;
  (**(code **)(PTR_PTR_01e1bf88 + 0x10))(PTR_PTR_01e1bf88,&local_28);
  lVar1 = FUN_00863630(&DAT_00862820,1,local_28);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x68;
  }
  FUN_0041b840(in_stack_00000028,lVar1);
  local_20 = 0;
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_res20);
  return local_20;
}

