/* Ghidra address: 00af98a0 */
/* Ghidra symbol: FUN_00af98a0 */


void FUN_00af98a0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_30;
  longlong local_28;
  longlong lStack_20;
  
  local_30 = auStack_68;
  local_28 = param_1[0x106];
  lStack_20 = param_1[0x107];
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  local_48 = 0x7fffffff;
  (**(code **)(*param_1 + 0x4a8))(param_1,param_2,0,1);
  *param_3 = (int)param_1[0x136];
  *param_4 = *(undefined4 *)((longlong)param_1 + 0x9b4);
  param_1[0x106] = local_28;
  param_1[0x107] = lStack_20;
  return;
}

