/* Ghidra address: 005ec4f0 */
/* Ghidra symbol: FUN_005ec4f0 */


void FUN_005ec4f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_30;
  undefined1 local_25;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),param_2);
  local_24 = FUN_005eb5d0(*(undefined8 *)(param_1 + 0x50),param_4);
  if (-1 < local_24) {
    local_18 = FUN_00409570((longlong)local_24);
    local_48 = &local_25;
    local_24 = FUN_005ebde0(*(undefined8 *)(param_1 + 0x50),param_4,local_18,local_24);
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
    FUN_005ea700(*(undefined8 *)(param_1 + 0x50),param_3);
    local_48 = (undefined1 *)CONCAT71(local_48._1_7_,local_25);
    FUN_005ebd40(*(undefined8 *)(param_1 + 0x50),param_4,local_18,local_24);
    FUN_005ea700(*(undefined8 *)(param_1 + 0x50),local_10);
    FUN_004095f0(local_18);
  }
  FUN_005ea700(*(undefined8 *)(param_1 + 0x50),local_20);
  return;
}

