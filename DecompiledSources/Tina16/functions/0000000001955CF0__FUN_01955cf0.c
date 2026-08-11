/* Ghidra address: 01955cf0 */
/* Ghidra symbol: FUN_01955cf0 */


void FUN_01955cf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  
  local_70 = auStack_d8;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  iVar1 = FUN_004170c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),1);
  if (iVar1 == 0) {
    FUN_00468a10(&local_b8,*(undefined8 *)(param_1 + 0x30));
    FUN_01955c10(auStack_d8,*(undefined8 *)(param_1 + 0x28),&local_b8);
  }
  else {
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0180d020(local_38,*(undefined8 *)(param_1 + 0x28),**(undefined2 **)(param_1 + 0x38));
    FUN_00468a10(&local_90,*(undefined8 *)(param_1 + 0x30));
    FUN_0046c3f0(&local_78,&local_90);
    FUN_0180d020(local_40,local_78,**(undefined2 **)(param_1 + 0x38));
    iVar1 = (**(code **)(*local_40 + 0x28))(local_40);
    if (iVar1 == 0) {
      FUN_00468a10(&local_60,*(undefined8 *)(param_1 + 0x30));
    }
    iVar1 = (**(code **)(*local_38 + 0x28))();
    local_44 = 0;
    if (-1 < iVar1 + -1) {
      do {
        iVar2 = (**(code **)(*local_40 + 0x28))(local_40);
        if (local_44 < iVar2) {
          (**(code **)(*local_40 + 0x18))(local_40,&local_98,local_44);
          FUN_00468a10(&local_60,local_98);
        }
        (**(code **)(*local_38 + 0x18))(local_38,&local_a0,local_44);
        FUN_01955c10(auStack_d8,local_a0,&local_60);
        local_44 = local_44 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
  }
  FUN_00460ba0(&local_b8);
  FUN_00414560(&local_a0,2);
  FUN_00460ba0(&local_90);
  FUN_00414480(&local_78);
  FUN_00460ba0(&local_60);
  return;
}

