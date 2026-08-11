/* Ghidra address: 005de520 */
/* Ghidra symbol: FUN_005de520 */


void FUN_005de520(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  int local_58;
  undefined8 local_50;
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  int local_1c;
  
  local_40 = auStack_78;
  local_34 = 0x400;
  while( true ) {
    local_30 = FUN_004095c0((longlong)(local_34 * 2));
    uVar1 = FUN_00416740(param_2);
    local_50 = FUN_00416740(*(undefined8 *)(param_1 + 8));
    local_58 = local_34;
    local_1c = thunk_FUN_03b4b941(uVar1,0,0,local_30);
    if (local_1c < local_34 + -2) break;
    FUN_004095f0(local_30);
    local_34 = local_34 * 4;
  }
  FUN_005de400(auStack_78);
  FUN_005de5f0(0,local_40);
  return;
}

