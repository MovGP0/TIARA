/* Ghidra address: 00694510 */
/* Ghidra symbol: FUN_00694510 */


void FUN_00694510(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_10 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  uVar2 = thunk_FUN_0411fe47(*(undefined8 *)(param_1 + 0x68));
  FUN_005ffb10(local_10,uVar2);
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  thunk_FUN_0415f9d2(*(undefined8 *)(param_1 + 0x68),&local_2c);
  thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x68),&local_24);
  local_2c._4_4_ = local_2c._4_4_ - local_20;
  local_2c._0_4_ = (int)local_2c - local_24;
  iVar1 = FUN_004230a0(&local_24);
  if (iVar1 < 5000) {
    iVar1 = FUN_004230c0(&local_24);
    if (iVar1 < 5000) {
      thunk_FUN_03abe598(*(undefined8 *)(param_1 + 0x68),&local_24);
      uVar2 = FUN_005ffa40(local_10);
      local_58 = (local_18 - local_20) + local_2c._4_4_;
      thunk_FUN_041a27b3(uVar2,(int)local_2c,local_2c._4_4_,(local_1c - local_24) + (int)local_2c);
      thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x68),&local_24);
      FUN_00423b50(&local_24,-local_24,-local_20);
      uVar2 = FUN_005ffa40(local_10);
      local_14 = thunk_FUN_03b57162(uVar2);
      FUN_00693f50(param_1,local_10,&local_24);
      uVar2 = FUN_005ffa40(local_10);
      thunk_FUN_0402759f(uVar2,local_14);
      uVar2 = FUN_005ffa40(local_10);
      FUN_00693fa0(param_1,uVar2);
    }
  }
  uVar2 = FUN_005ffa40(local_10);
  thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0x68),uVar2);
  FUN_005ffb10(local_10,0);
  FUN_00410f20(local_10);
  return;
}

