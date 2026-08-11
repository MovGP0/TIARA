/* Ghidra address: 01c98160 */
/* Ghidra symbol: FUN_01c98160 */


void FUN_01c98160(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_48;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  char local_21;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_30 = 0;
  puVar2 = auStack_98;
  if ((*(longlong *)(param_1 + 0x2788) != 0) &&
     (cVar3 = FUN_019ac250(*(longlong *)(param_1 + 0x2788)), puVar2 = local_60, cVar3 != '\0')) {
    local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01baefb8,1,*(undefined8 *)PTR_DAT_02004030);
    local_21 = '\0';
    while (local_21 == '\0') {
      iVar4 = (**(code **)(*local_20 + 0x2d0))(local_20);
      if (iVar4 == 1) {
        FUN_0064dd90(local_20[0xd7],&local_68);
        FUN_019ac000(&local_30,local_68,0x14);
        lVar1 = *(longlong *)(param_1 + 0x2788);
        FUN_004169a0(&local_70,lVar1 + 0x293);
        iVar4 = FUN_00416db0(local_30,local_70);
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(longlong *)local_20[0xd8] + 0x260))((longlong *)local_20[0xd8]);
          FUN_019ac230(lVar1,uVar5);
          local_38 = *(undefined4 *)(param_1 + 0x17f0);
          *(undefined4 *)(param_1 + 0x17f0) = 1;
          FUN_01994230(*(undefined8 *)(param_1 + 0x27a8));
          local_48 = *(longlong *)(param_1 + 0x27a8);
          iVar4 = *(int *)(local_48 + 0x10);
          local_34 = 0;
          if (-1 < iVar4 + -1) {
            do {
              uVar6 = FUN_00b94e60(local_48,local_34);
              FUN_01c980e0(auStack_98,uVar6);
              local_34 = local_34 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          *(undefined4 *)(param_1 + 0x17f0) = local_38;
          local_21 = '\x01';
        }
        else {
          FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,
                       L"The password is not correct. Please try again.",L"Unprotect Circuit",0x10);
        }
      }
      else {
        local_21 = '\x01';
      }
    }
    FUN_00410f20(local_20);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(&local_30);
  return;
}

