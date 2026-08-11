/* Ghidra address: 004dcd20 */
/* Ghidra symbol: FUN_004dcd20 */


void FUN_004dcd20(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_b0 = auStack_d8;
  FUN_004dccc0(param_1);
  local_10 = *(longlong *)(param_1 + 8);
  local_38 = local_10 + 8;
  local_18 = param_2;
  if (param_3 == '\0') {
    local_3c = FUN_00597520(local_38,&local_18);
  }
  else {
    local_3c = FUN_005976a0(local_38,&local_18);
  }
  local_1c = local_3c;
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

