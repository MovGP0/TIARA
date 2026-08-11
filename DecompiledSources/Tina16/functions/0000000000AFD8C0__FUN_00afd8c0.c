/* Ghidra address: 00afd8c0 */
/* Ghidra symbol: FUN_00afd8c0 */


void FUN_00afd8c0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00414480(&local_10);
  local_30 = *(undefined8 *)(param_1 + 0x70);
  FUN_0043e600(&local_10,local_30);
  FUN_00414b50(&local_28,local_10);
  FUN_00414480(&local_10);
  local_1c = FUN_004170c0(param_2,local_28,1);
  while (0 < local_1c) {
    FUN_00416e20(param_1 + 0x70,local_1c,1);
    FUN_00414480(&local_18);
    local_38 = *(undefined8 *)(param_1 + 0x70);
    FUN_0043e600(&local_18,local_38);
    FUN_00414b50(&local_28,local_18);
    FUN_00414480(&local_18);
    local_1c = FUN_004170c0(param_2,local_28,1);
  }
  FUN_00414480(&local_28);
  FUN_00414560(&local_18,2);
  return;
}

