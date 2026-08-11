/* Ghidra address: 01870650 */
/* Ghidra symbol: FUN_01870650 */


undefined1
FUN_01870650(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong local_a8;
  undefined1 local_99;
  longlong *local_98;
  int local_90;
  int local_8c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_60 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_40[0] = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_99 = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  local_98 = (longlong *)0x0;
  local_8c = 0;
  local_90 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01925478);
  if (cVar2 != '\0') {
    local_98 = plVar1;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_006b9fb0);
  local_a8 = param_2;
  if ((cVar2 == '\0') || (plVar1 == (longlong *)0x0)) {
    cVar2 = FUN_004113d0(param_2,&DAT_01916f10);
    if ((cVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      local_90 = *(int *)(param_2 + 0x10);
      local_a8 = *(longlong *)(param_2 + 8);
      local_8c = local_90;
    }
  }
  else {
    local_8c = FUN_006e5350(param_2);
    local_8c = local_8c + -1;
    local_90 = 0;
  }
  cVar2 = FUN_004113d0(local_a8,&PTR_FUN_006b9fb0);
  if (cVar2 != '\0') {
    if (local_90 <= local_8c) {
      iVar6 = (local_90 - local_8c) + -1;
      iVar5 = local_8c;
      do {
        lVar3 = FUN_006e5360(local_a8,iVar5);
        FUN_00414480(&local_30);
        *(undefined1 *)(param_5 + 8) = 1;
        *(undefined1 *)(param_5 + 9) = 1;
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) {
          cVar2 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x18),&PTR_FUN_0191d1a8);
          if (cVar2 != '\0') {
            uVar4 = (**(code **)(*plVar1 + 0x118))(plVar1);
            FUN_01970f30(uVar4,&local_30,*(undefined8 *)(lVar3 + 0x18));
          }
        }
        if (local_30 == 0) {
          if (local_98 != (longlong *)0x0) {
            local_99 = 1;
            if (iVar5 == local_8c) {
              (**(code **)(*local_98 + 0x358))(local_98,0);
            }
            FUN_0195a600(local_98,0);
            FUN_00414480(local_98 + 0x35);
            (**(code **)(*local_98 + 0x348))(local_98,&local_68);
            FUN_00415f90(&local_68,&DAT_01870b20);
            FUN_004168b0(&local_70,local_68);
            FUN_00416cd0(&local_60,3,local_70,*(undefined8 *)(lVar3 + 0x10),&LAB_01870b58);
            FUN_004168e0(&local_78,local_60);
            (**(code **)(*local_98 + 0x358))(local_98,local_78);
          }
        }
        else {
          local_99 = 1;
          if ((local_8c == local_90) || ((local_98 == (longlong *)0x0 && (iVar5 == local_8c)))) {
            FUN_0195a600(plVar1,*(undefined8 *)(lVar3 + 0x18));
            FUN_00414ad0(plVar1 + 0x35,*(undefined8 *)(lVar3 + 0x10));
            break;
          }
          if (iVar5 == local_8c) {
            (**(code **)(*local_98 + 0x358))(local_98,0);
          }
          FUN_0195a600(local_98,0);
          FUN_00414480(local_98 + 0x35);
          (**(code **)(*local_98 + 0x348))(local_98,&local_48);
          FUN_00415f90(&local_48,&DAT_01870b20);
          FUN_004168b0(&local_50,local_48);
          FUN_00416cd0(local_40,5,local_50,local_30,&DAT_01870b30,*(undefined8 *)(lVar3 + 0x10),
                       &PTR_DAT_01870b44);
          FUN_004168e0(&local_58,local_40[0]);
          (**(code **)(*local_98 + 0x358))(local_98,local_58);
        }
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00414480(&local_60);
  FUN_00414520(&local_58);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return local_99;
}

