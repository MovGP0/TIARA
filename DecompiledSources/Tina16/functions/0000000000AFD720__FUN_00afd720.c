/* Ghidra address: 00afd720 */
/* Ghidra symbol: FUN_00afd720 */


void FUN_00afd720(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  short local_32;
  longlong local_30;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_78;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  local_40 = *(undefined8 *)(param_1 + 0x70);
  FUN_0043e600(local_20,local_40);
  FUN_00414b50(&local_30,local_20[0]);
  FUN_00414480(local_20);
  while( true ) {
    local_24 = FUN_004170c0(param_2,local_30,1);
    if (local_24 == 0) break;
    local_44 = 0;
    if (param_2 != 0) {
      local_44 = *(int *)(param_2 + -4);
    }
    local_28 = local_24 + local_44 + -1;
    do {
      local_28 = local_28 + 1;
      local_48 = 0;
      if (local_30 != 0) {
        local_48 = *(int *)(local_30 + -4);
      }
    } while (((local_28 != local_48) &&
             (local_32 = *(short *)(local_30 + -2 + (longlong)local_28 * 2), local_32 != 0x3e)) &&
            (local_32 != 0));
    iVar1 = (local_28 - local_24) + 1;
    FUN_00416e20(param_1 + 0x70,local_24,iVar1);
    FUN_00416e20(&local_30,local_24,iVar1);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return;
}

