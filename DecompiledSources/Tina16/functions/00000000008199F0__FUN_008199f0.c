/* Ghidra address: 008199f0 */
/* Ghidra symbol: FUN_008199f0 */


undefined8 FUN_008199f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar1 + 0x4d6) == '\x01') || (*(longlong *)(lVar1 + 0x78) != 0)) {
    uVar2 = FUN_0065b870(lVar1);
    uVar2 = thunk_FUN_03de17fb(uVar2);
    local_30 = *(int *)(param_1 + 0xf8);
    iStack_2c = *(int *)(param_1 + 300);
    thunk_FUN_0415f9d2(uVar2,&local_30);
    local_38 = 0;
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar2,&local_38);
    local_28 = local_20;
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar2,&local_28);
    local_28 = CONCAT44(local_28._4_4_ + (local_38._4_4_ - iStack_2c),
                        (int)local_28 + ((int)local_38 - local_30));
  }
  else {
    local_30 = *(int *)(param_1 + 0xf8);
    iStack_2c = *(int *)(param_1 + 300);
    local_38 = 0;
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar2,&local_38);
    local_28 = local_20;
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar2,&local_28);
    local_28 = CONCAT44(local_28._4_4_ + (local_38._4_4_ - iStack_2c),
                        (int)local_28 + ((int)local_38 - local_30));
  }
  return local_28;
}

