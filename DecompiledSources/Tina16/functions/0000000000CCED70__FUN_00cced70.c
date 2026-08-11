/* Ghidra address: 00cced70 */
/* Ghidra symbol: FUN_00cced70 */


void FUN_00cced70(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_19 = (undefined1)param_1[0x36];
  *(undefined1 *)(param_1 + 0x36) = 1;
  FUN_00cb42b0(param_1);
  *(undefined1 *)(param_1 + 0x36) = local_19;
  (**(code **)(*param_1 + 0x230))(param_1,param_1);
  (**(code **)(*param_1 + 0x228))(param_1);
  return;
}

