/* Ghidra address: 007889a0 */
/* Ghidra symbol: FUN_007889a0 */


undefined4
FUN_007889a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5,uint param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 *local_80;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_70 = auStack_a8;
  local_38 = *param_3;
  uStack_30 = *(undefined4 *)(param_3 + 1);
  FUN_00414610(param_5);
  local_2c = thunk_FUN_03b57162(param_2);
  thunk_FUN_03b994b9(param_2,1);
  uVar2 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar2,&local_38,2,&local_68);
  if (cVar1 == '\0') {
    local_68 = FUN_00788c20(param_1);
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    local_68 = FUN_00788c20(param_1);
  }
  thunk_FUN_0412a071(param_2,local_68);
  local_4c = *param_4;
  local_44 = param_4[1];
  local_50 = param_6 | 0xa011;
  uVar3 = FUN_00416740(param_5);
  local_88 = local_50 | 0x400;
  thunk_FUN_041a24be(param_2,uVar3,0xffffffff,&local_4c);
  local_44 = CONCAT44(local_44._4_4_,*(undefined4 *)(param_4 + 1));
  uVar2 = param_4[1];
  if (local_44._4_4_ < *(int *)((longlong)param_4 + 0xc)) {
    FUN_00423b50(&local_4c,0,
                 (longlong)(*(int *)((longlong)param_4 + 0xc) - local_44._4_4_) / 2 & 0xffffffff);
    uVar2 = local_44;
  }
  local_44 = uVar2;
  FUN_0040d200(local_64,0x14,0);
  local_64[0] = 0x14;
  local_88 = local_50;
  local_80 = local_64;
  thunk_FUN_041d6f3c(param_2,uVar3,0xffffffff,&local_4c);
  local_3c = local_54;
  thunk_FUN_0402759f(param_2,local_2c);
  FUN_00414480(&param_5);
  return local_3c;
}

