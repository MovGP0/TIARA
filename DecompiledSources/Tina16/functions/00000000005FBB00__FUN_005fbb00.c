/* Ghidra address: 005fbb00 */
/* Ghidra symbol: FUN_005fbb00 */


void FUN_005fbb00(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_30 = param_1;
  FUN_00427930(param_1 + 0x10);
  local_28 = param_2[3];
  lVar1 = FUN_005fb810(param_1,param_3);
  param_2[3] = lVar1;
  if (lVar1 != local_28) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  FUN_005fb9a0(param_1,local_28);
  local_20 = param_1;
  FUN_00427ff0(param_1 + 0x10);
  return;
}

