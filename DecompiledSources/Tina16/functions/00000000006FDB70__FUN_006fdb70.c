/* Ghidra address: 006fdb70 */
/* Ghidra symbol: FUN_006fdb70 */


int FUN_006fdb70(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  int local_c;
  
  local_20 = auStack_48;
  local_c = FUN_006fd9a0(param_1,param_2,param_3,param_4);
  if (local_c != param_2) {
    if (param_2 < local_c) {
      local_c = local_c + -1;
    }
    local_18 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),param_2);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x4b0),param_2);
    FUN_004aec30(*(undefined8 *)(param_1 + 0x4b0),local_c,local_18);
    FUN_006fd900(param_1);
    FUN_0064fca0(param_1,0x416,(longlong)param_2,0);
    FUN_006fbd10(param_1,0x443,local_c,local_c);
    FUN_006fd910(param_1);
  }
  return local_c;
}

