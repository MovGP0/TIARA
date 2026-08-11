/* Ghidra address: 005ea880 */
/* Ghidra symbol: FUN_005ea880 */


char FUN_005ea880(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  uint uVar5;
  char local_39;
  undefined1 local_2c [4];
  longlong local_28;
  undefined8 local_20;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_28 = 0;
  FUN_00414b50(&local_28,param_2);
  uVar1 = FUN_005ea1f0(local_28);
  if ((byte)uVar1 == 0) {
    FUN_00416e20(&local_28,1,1);
  }
  local_20 = 0;
  if ((param_3 == '\0') || (local_28 == 0)) {
    uVar3 = FUN_005ea6e0(param_1,uVar1);
    uVar4 = FUN_00416740(local_28);
    uVar2 = thunk_FUN_03ecc02e(uVar3,uVar4,0,*(undefined4 *)(param_1 + 0x2c),&local_20);
    local_39 = FUN_005ea620(param_1,uVar2);
  }
  else {
    uVar3 = FUN_005ea6e0(param_1,uVar1);
    uVar4 = FUN_00416740(local_28);
    uVar2 = thunk_FUN_03de2288(uVar3,uVar4,0,0,(ulonglong)uVar5 << 0x20,
                               *(undefined4 *)(param_1 + 0x2c),0,&local_20,local_2c);
    local_39 = FUN_005ea620(param_1,uVar2);
  }
  if (local_39 != '\0') {
    if (((byte)uVar1 & *(longlong *)(param_1 + 8) != 0) != 0) {
      FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x20),&LAB_005eaa58,local_28);
    }
    FUN_005ea6b0(param_1,local_20,local_28);
  }
  FUN_00414480(&local_28);
  return local_39;
}

