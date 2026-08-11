/* Ghidra address: 00cc15b0 */
/* Ghidra symbol: FUN_00cc15b0 */


void FUN_00cc15b0(longlong *param_1,byte param_2)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  FUN_00411a80(param_1,param_2);
  FUN_004d0ea0(param_1,param_2 & 0xfc);
  if ((*(byte *)((longlong)param_1 + 0x69) & 2) != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  local_20 = param_1 + 0x10;
  local_28 = *local_20;
  *local_20 = 0;
  FUN_00410f20(local_28);
  local_30 = (undefined8 *)param_1[10];
  (**(code **)*local_30)(local_30);
  local_38 = (longlong *)param_1[10];
  (**(code **)(*local_38 + 8))(local_38);
  local_40 = param_1 + 10;
  local_48 = *local_40;
  *local_40 = 0;
  FUN_00410f20(local_48);
  FUN_00cbf470(DAT_01ead3e8);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

