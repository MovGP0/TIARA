/* Ghidra address: 004e9c30 */
/* Ghidra symbol: FUN_004e9c30 */


void FUN_004e9c30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong local_a8;
  bool local_9d;
  int local_8c;
  longlong local_88;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_d0 = auStack_128;
  local_d8 = 0;
  FUN_004e9e60(param_1);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_9d = true;
  }
  else {
    local_10 = *(longlong *)(param_1 + 8);
    local_88 = local_10 + 8;
    local_18 = param_2;
    local_8c = FUN_00596a10(local_88,&local_18);
    local_9d = local_8c == -1;
    local_1c = local_8c;
  }
  if (local_9d == false) {
    if (*(char *)(param_1 + 0x18) == '\x02') {
      FUN_0041ddd0(&local_d8,PTR_PTR_02002e38);
      local_f0 = FUN_004ea390(*(undefined8 *)(param_1 + 8),param_2);
      local_e8 = &local_f0;
      local_e0 = 0x10;
      local_108 = 0;
      uVar1 = FUN_0044d530(&PTR_FUN_004347c0,1,local_d8,&local_e8);
      FUN_004134c0(uVar1);
    }
  }
  else {
    local_a8 = *(longlong *)(param_1 + 8);
    local_b0 = param_2;
    local_b4 = FUN_00597e50(local_a8 + 8,&local_b0);
  }
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  FUN_00414480(&local_d8);
  return;
}

