/* Ghidra address: 00cc2660 */
/* Ghidra symbol: FUN_00cc2660 */


void FUN_00cc2660(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  while( true ) {
    local_30 = FUN_004afa30(param_1[0xf]);
    if (*(int *)(local_30 + 0x10) == 0) break;
    local_24 = *(int *)(local_30 + 0x10) + -1;
    if (-1 < local_24) {
      do {
        uVar1 = FUN_004aeac0(local_30,local_24);
        (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
        local_24 = local_24 + -1;
      } while (local_24 != -1);
    }
    local_20 = param_1[0xf];
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
    FUN_008766a0(500);
  }
  FUN_00cc2710(0,local_40);
  return;
}

