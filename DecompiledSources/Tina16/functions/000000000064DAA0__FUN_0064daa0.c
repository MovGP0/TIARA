/* Ghidra address: 0064daa0 */
/* Ghidra symbol: FUN_0064daa0 */


void FUN_0064daa0(longlong *param_1,undefined8 *param_2)

{
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = *param_2;
  (**(code **)(*param_1 + 0xe0))(param_1,local_30);
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
             ((int)param_1[0x13] - local_28) + (int)local_20,
             (*(int *)((longlong)param_1 + 0x9c) - local_24) + local_20._4_4_);
  return;
}

