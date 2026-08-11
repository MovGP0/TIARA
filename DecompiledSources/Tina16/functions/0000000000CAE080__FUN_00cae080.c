/* Ghidra address: 00cae080 */
/* Ghidra symbol: FUN_00cae080 */


undefined8
FUN_00cae080(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_68;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_0041b910(param_7);
  local_19 = *(undefined1 *)((longlong)param_1 + 0x11c);
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  local_48 = param_6;
  local_40 = param_7;
  (**(code **)(*param_1 + 400))(param_1,param_2,local_res20,param_5);
  *param_3 = *(undefined1 *)((longlong)param_1 + 300);
  *(undefined1 *)((longlong)param_1 + 0x11c) = local_19;
  FUN_00414480(&local_res20);
  FUN_0041b800(&param_7);
  return param_2;
}

