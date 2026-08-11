/* Ghidra address: 00a290e0 */
/* Ghidra symbol: FUN_00a290e0 */


undefined8 FUN_00a290e0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = 0;
  FUN_00414b50(local_20,param_2);
  local_28 = FUN_004170c0(&LAB_00a29214,local_20[0],1);
  if (0 < local_28) {
    while( true ) {
      local_2c = 0;
      if (local_20[0] != 0) {
        local_2c = *(int *)(local_20[0] + -4);
      }
      if (local_2c + -2 < local_28) break;
      local_48 = (longlong)local_28;
      if (*(short *)(local_20[0] + -2 + local_48 * 2) == 0x25) {
        local_24 = local_28;
        uVar1 = FUN_00a28fa0(auStack_68);
        lVar2 = FUN_00414de0(local_20);
        *(undefined2 *)(lVar2 + -2 + local_48 * 2) = uVar1;
        local_28 = local_28 + 1;
        FUN_00416e20(local_20,local_28,local_24 - local_28);
      }
      else {
        local_28 = local_28 + 1;
      }
    }
  }
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414480(local_20);
  return param_1;
}

