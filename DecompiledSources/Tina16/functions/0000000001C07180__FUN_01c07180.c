/* Ghidra address: 01c07180 */
/* Ghidra symbol: FUN_01c07180 */


void FUN_01c07180(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  
  local_58 = 0;
  local_50 = 0;
  FUN_004238d0(&local_48,0,0,0,0);
  *(undefined8 *)(param_1 + 0x34c) = local_48;
  *(undefined8 *)(param_1 + 0x354) = uStack_40;
  if (*(longlong *)(param_1 + 800) == 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    FUN_0064dd90(param_1,&local_58);
    local_38 = param_1 + 0x34c;
    uVar2 = FUN_00416740(local_58);
    thunk_FUN_041a24be(uVar1,uVar2,0xffffffff,local_38,0x400);
  }
  else {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    FUN_01bfd990(*(undefined8 *)(param_1 + 800),&local_50);
    local_30 = param_1 + 0x34c;
    uVar2 = FUN_00416740(local_50);
    thunk_FUN_041a24be(uVar1,uVar2,0xffffffff,local_30,0x400);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  return;
}

