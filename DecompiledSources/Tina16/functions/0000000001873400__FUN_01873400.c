/* Ghidra address: 01873400 */
/* Ghidra symbol: FUN_01873400 */


void FUN_01873400(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  int local_c;
  
  local_20 = auStack_48;
  local_c = FUN_01873050(param_1,param_2);
  if (-1 < local_c) {
    local_18 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_c);
    FUN_01873240(param_1,1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x10),local_c);
    FUN_018733b0(param_1,1);
    FUN_00410f20(local_18);
  }
  return;
}

