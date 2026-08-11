/* Ghidra address: 005d1870 */
/* Ghidra symbol: FUN_005d1870 */


void FUN_005d1870(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_005d1640(param_1,0);
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)FUN_005d1120(param_1,0);
  local_28 = param_2;
  if (param_2 != 0) {
    local_28 = *(longlong *)(param_2 + -8);
  }
  FUN_004b6e40(local_20,local_28);
  (**(code **)(*local_20 + 0x50))(local_20,0,0);
  local_30 = param_2;
  if (param_2 != 0) {
    local_30 = *(longlong *)(param_2 + -8);
  }
  FUN_004b8a80(local_20,param_2,local_30);
  FUN_00410f20(local_20);
  return;
}

