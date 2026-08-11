/* Ghidra address: 0181b5a0 */
/* Ghidra symbol: FUN_0181b5a0 */


void FUN_0181b5a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_19 = (undefined1)param_1[0xd9];
  *(undefined1 *)(param_1 + 0xd9) = param_4;
  (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0xd9) = local_19;
  return;
}

