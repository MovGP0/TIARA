/* Ghidra address: 00b692b0 */
/* Ghidra symbol: FUN_00b692b0 */


void FUN_00b692b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  
  local_40 = auStack_68;
  local_30 = (longlong *)FUN_00b5bcb0(&DAT_00b5b658,1,param_1);
  local_30[4] = *(longlong *)(param_1 + 0x10);
  local_30[5] = *(longlong *)(param_1 + 0x18);
  FUN_00b5bfc0(local_30,param_2,param_3,param_1 + 0x20);
  (**(code **)(*local_30 + -0x20))(local_30,1);
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}

