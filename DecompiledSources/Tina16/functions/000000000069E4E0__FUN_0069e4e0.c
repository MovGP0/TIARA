/* Ghidra address: 0069e4e0 */
/* Ghidra symbol: FUN_0069e4e0 */


void FUN_0069e4e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_8c8 [32];
  ulonglong local_8a8;
  undefined4 *local_8a0;
  int *local_898;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined1 *local_870;
  undefined8 local_860;
  longlong local_858;
  longlong *local_848;
  undefined8 local_840;
  undefined1 *local_838;
  undefined1 local_82c [2048];
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined8 *local_20;
  
  local_870 = auStack_8c8;
  local_888 = 0;
  local_880 = 0;
  local_878 = 0;
  local_28 = 0;
  local_2c = 0;
  local_8a8 = local_8a8 & 0xffffffff00000000;
  local_8a0 = &local_28;
  local_898 = &local_2c;
  iVar1 = FUN_0069b8c0(1,0,5,0);
  if ((iVar1 == 0) && (iVar1 = thunk_FUN_03ce33a6(), iVar1 != 0x7a)) {
    iVar1 = thunk_FUN_03ce33a6();
    if (iVar1 == 0x7b) {
      FUN_0041ddd0(&local_878,PTR_PTR_020022b0);
      FUN_0069c390(local_878);
    }
    else {
      FUN_00451a00();
    }
  }
  local_20 = (undefined8 *)FUN_00409570(local_28);
  local_8a8 = CONCAT44(local_8a8._4_4_,local_28);
  local_8a0 = &local_28;
  local_898 = &local_2c;
  FUN_0069b8c0(1,0,5,local_20);
  if (local_2c == 0) {
    local_24 = 0x400;
    iVar1 = thunk_FUN_041ae4eb(local_82c,&local_24);
    if (iVar1 == 0) {
      FUN_0040d200(local_82c,(longlong)(local_24 * 2),0);
    }
    local_838 = local_82c;
    local_840 = FUN_0069c340(&local_838);
  }
  else {
    local_840 = *local_20;
  }
  local_848 = (longlong *)FUN_0069e100(param_1);
  iVar1 = (**(code **)(*local_848 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(*local_848 + 0x30))(local_848,local_24);
      local_860 = *(undefined8 *)(lVar3 + 0x10);
      FUN_004167d0(&local_880,local_840);
      iVar2 = FUN_0043e6d0(local_860,local_880);
      if (iVar2 == 0) {
        local_858 = (**(code **)(*local_848 + 0x30))(local_848,local_24);
        uVar4 = FUN_00416740(*(undefined8 *)(local_858 + 0x10));
        uVar5 = FUN_00416740(*(undefined8 *)(local_858 + 8));
        uVar6 = FUN_00416740(*(undefined8 *)(local_858 + 0x18));
        local_8a8 = 0;
        FUN_0069d7c0(param_1,uVar4,uVar5,uVar6);
        FUN_0069e7b0(0,local_870);
        goto LAB_0069e794;
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004095f0(local_20);
  FUN_0041ddd0(&local_888,PTR_PTR_020022b0);
  FUN_0069c390(local_888);
LAB_0069e794:
  FUN_00414560(&local_888,3);
  return;
}

