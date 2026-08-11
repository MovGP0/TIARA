/* Ghidra address: 012f5430 */
/* Ghidra symbol: FUN_012f5430 */


void FUN_012f5430(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_60;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  
  local_60 = auStack_98;
  local_40 = 0;
  local_48 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  *(undefined8 *)PTR_DAT_020026a0 = 0;
  local_50 = (longlong *)FUN_007fc180(&PTR_FUN_012e7ff8,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*local_50 + 0x2d0))(local_50);
  if (iVar1 == 1) {
    uVar3 = FUN_007fc180(&PTR_FUN_012e9a18,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020026a0 = uVar3;
    FUN_012e9e60(*(undefined8 *)PTR_DAT_020026a0,L"Working... please wait");
    FUN_008059a0(*(undefined8 *)PTR_DAT_020026a0);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    local_28 = (longlong *)FUN_01b21190(local_50[0xe9],0x2c,0);
    local_30 = (longlong *)FUN_01b21190(local_50[0xea],0x2c,0);
    iVar1 = (**(code **)(*local_28 + 0x28))(local_28);
    iVar2 = (**(code **)(*local_30 + 0x28))(local_30);
    if (iVar1 != iVar2) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"Number of items in target_prefix and in circuit_folders mismatch!");
      FUN_004134c0(uVar3);
    }
    iVar1 = (**(code **)(*local_28 + 0x28))();
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_28 + 0x18))(local_28,&local_40,local_34);
        (**(code **)(*local_30 + 0x18))(local_30,&local_48,local_34);
        local_78 = local_40;
        FUN_012f4f80(param_1,local_50[0xe7],local_48,local_50[0xe8]);
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FUN_00410f20(local_28);
  }
  if (local_30 != (longlong *)0x0) {
    FUN_00410f20(local_30);
  }
  if (*(longlong *)PTR_DAT_020026a0 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020026a0);
    FUN_0072d440(L"Finished",2,4,0);
  }
  FUN_00414560(&local_48,2);
  return;
}

