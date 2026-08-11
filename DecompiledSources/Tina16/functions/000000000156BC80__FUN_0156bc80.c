/* Ghidra address: 0156bc80 */
/* Ghidra symbol: FUN_0156bc80 */


void FUN_0156bc80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_90 = auStack_f8;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  local_34 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_58 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),local_34);
      local_68 = *(longlong **)(local_58 + 0x820);
      local_38 = FUN_00e0e000(*(undefined8 *)(local_58 + 0x828),1);
      if ((local_38 == 5) || (local_38 == 6)) {
        iVar1 = (**(code **)(*local_68 + 0x1c8))(local_68);
        local_40 = 0;
        local_44 = iVar1;
        if (-1 < iVar1 + -1) {
          do {
            (**(code **)(*local_68 + 0x210))(local_68,local_40);
            (**(code **)(*local_68 + 0x298))(local_68,&local_70,local_40);
            local_60 = FUN_00e106f0(local_58,local_70);
            if (local_60 == 0) {
              FUN_00416ba0(&local_98,local_70,L": not found in vhdl macro");
              uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_98);
              FUN_004134c0(uVar2);
            }
            local_3c = FUN_00e0f830(local_60);
            if (local_3c < 0) {
              FUN_00416ba0(&local_a0,local_70,L": invalid type");
              uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_a0);
              FUN_004134c0(uVar2);
            }
            local_4c = FUN_015f72e0(*(undefined8 *)(local_60 + 0x18));
            FUN_0043f750(&local_a8,local_3c);
            FUN_0043f750(&local_b0,local_4c);
            local_d8 = local_a8;
            local_d0 = &DAT_0156c09c;
            local_c8 = local_b0;
            FUN_00416cd0(&local_78,5,local_70,&DAT_0156c09c);
            (**(code **)(*local_30 + 0x78))(local_30,local_78);
            local_40 = local_40 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      local_34 = local_34 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416ba0(&local_b8,*(undefined8 *)(param_1 + 0x7a8),L"\\sc_ports.txt");
  (**(code **)(*local_30 + 0x100))(local_30,local_b8);
  FUN_00410f20(local_30);
  FUN_00414560(&local_b8,5);
  FUN_00414560(&local_78,2);
  return;
}

