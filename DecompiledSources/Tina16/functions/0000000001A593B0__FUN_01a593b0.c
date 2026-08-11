/* Ghidra address: 01a593b0 */
/* Ghidra symbol: FUN_01a593b0 */


void FUN_01a593b0(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_f8 [40];
  undefined1 *local_d0;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_d0 = auStack_f8;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  puVar1 = auStack_f8;
  if (0 < param_2) {
    FUN_01a59570(param_1,param_2);
    FUN_01a59b20(param_1);
    puVar1 = local_d0;
  }
  local_d0 = puVar1;
  FUN_00414560(&local_60,10);
  return;
}

