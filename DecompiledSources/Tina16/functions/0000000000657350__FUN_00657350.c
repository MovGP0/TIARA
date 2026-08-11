/* Ghidra address: 00657350 */
/* Ghidra symbol: FUN_00657350 */


void FUN_00657350(longlong *param_1,undefined8 param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38[0] = *(undefined4 *)
                 (&DAT_01df73ac +
                 (ulonglong)((*(uint *)((longlong)param_1 + 0xa4) & 0x10000) != 0) * 4);
  local_28 = 0;
  local_20 = 0;
  local_30 = param_2;
  (**(code **)(*param_1 + -0x38))(param_1,local_38);
  return;
}

