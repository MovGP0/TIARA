/* Ghidra address: 0181b010 */
/* Ghidra symbol: FUN_0181b010 */


void FUN_0181b010(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_19 = (undefined1)param_1[0xd9];
  *(undefined1 *)(param_1 + 0xd9) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x6cc) = 1;
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0xd9) = local_19;
  *(undefined1 *)((longlong)param_1 + 0x6cc) = 0;
  return;
}

