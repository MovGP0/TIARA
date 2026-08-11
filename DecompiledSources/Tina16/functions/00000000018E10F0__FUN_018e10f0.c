/* Ghidra address: 018e10f0 */
/* Ghidra symbol: FUN_018e10f0 */


void FUN_018e10f0(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong *plVar1;
  undefined2 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined2 local_28;
  undefined1 local_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_58 = (undefined2 *)0x0;
  local_30 = 7;
  local_28 = *param_3;
  local_20 = 9;
  local_38 = param_2;
  FUN_018518d0(param_1,&local_38,1);
  plVar1 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),1);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_50);
  FUN_00467e90(&local_58,&local_50);
  *param_3 = *local_58;
  FUN_00414480(&local_58);
  FUN_00460ba0(&local_50);
  return;
}

