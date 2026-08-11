/* Ghidra address: 01adb8e0 */
/* Ghidra symbol: FUN_01adb8e0 */


/* WARNING: Removing unreachable block (ram,0x01adbbe5) */

undefined1
FUN_01adb8e0(longlong param_1,longlong param_2,longlong *param_3,char param_4,byte param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar9;
  longlong *local_78;
  undefined1 local_69;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_69 = 0;
  bVar1 = false;
  FUN_01ade6a0(param_1,param_2);
  local_78 = param_3;
  if (param_3 == (longlong *)0x0) {
    bVar1 = true;
    local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01cc5c60(param_2);
    do {
      lVar6 = FUN_01cc5cc0(param_2);
      cVar2 = FUN_004113d0(lVar6,&PTR_FUN_01cb38a0);
      if (cVar2 != '\0') {
        FUN_01cc0ae0(lVar6,&local_40);
        FUN_01ce7b20(&local_40);
        (**(code **)(*local_78 + 0x80))(local_78,local_40,lVar6);
      }
    } while (lVar6 != 0);
  }
  if ((param_2 != 0) && (iVar3 = (**(code **)(*local_78 + 0x28))(local_78), iVar3 != 0)) {
    lVar6 = (**(code **)(*local_78 + 0x30))(local_78,0);
    if (*(char *)(lVar6 + 0x3a) == '\a') {
      iVar3 = (**(code **)(*local_78 + 0x28))();
      local_64 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar7 = (**(code **)(*local_78 + 0x30))(local_78,local_64);
          FUN_013e5360(param_2,uVar7);
          local_64 = local_64 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
      local_68 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_30 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                               (*(longlong **)(param_1 + 0xd8),local_68);
          local_34 = 0;
          if (*(char *)(local_30 + 0x58) == '\x02') {
            lVar6 = 0;
          }
          else if (*(char *)(local_30 + 0x58) == '\a') {
            lVar6 = FUN_01abc400(9,param_2);
          }
          else {
            uVar7 = FUN_01ce8a10(local_30,0);
            uVar4 = FUN_01abd060(uVar7);
            lVar6 = FUN_01abc400(uVar4,param_2);
          }
          if ((*(char *)(local_30 + 0x58) != '\a') ||
             (*(char *)(*(longlong *)(param_2 + 8) + 0x434) != '\x04')) {
            cVar2 = FUN_01abbfb0(*(undefined1 *)(local_30 + 0x58),
                                 *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x434));
            if (cVar2 == '\0') {
LAB_01adbbaf:
              FUN_00410f20(lVar6);
              lVar6 = 0;
            }
            else {
              lVar8 = FUN_01ce8a10(local_30,0);
              if ((lVar8 != 0) && (*(char *)(*(longlong *)(param_2 + 8) + 0x434) != '\v')) {
                lVar8 = FUN_01ce8a10(local_30,0);
                if (*(char *)(*(longlong *)(*(longlong *)(lVar8 + 8) + 8) + 0x434) !=
                    *(char *)(*(longlong *)(param_2 + 8) + 0x434)) goto LAB_01adbbaf;
              }
            }
          }
          if (lVar6 == 0) {
            lVar8 = (**(code **)(*local_78 + 0x30))(local_78,0);
            if (*(char *)(lVar8 + 0x3a) == '\a') goto LAB_01adbd23;
            FUN_013cb810(*(undefined8 *)PTR_DAT_02003ba0,&local_60,
                         *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x434));
            in_stack_ffffffffffffff38 = 0;
            in_stack_ffffffffffffff40 = 0;
            in_stack_ffffffffffffff48 = 0;
            FUN_00416cd0(&local_48,8,local_60,L" curves cannot be inserted ",&DAT_01adbff4,
                         &DAT_01adc004,L" into this coordinate system!",&DAT_01adbff4,&DAT_01adc004,
                         L"Please select another diagram!");
          }
          else {
LAB_01adbd23:
            FUN_00414480(&local_48);
            local_69 = 1;
            iVar5 = (**(code **)(*local_78 + 0x28))();
            local_64 = 0;
            if (-1 < iVar5 + -1) {
              do {
                lVar8 = (**(code **)(*local_78 + 0x30))(local_78,local_64);
                uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
                uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
                if (*(char *)(lVar8 + 0x3a) == '\a') {
                  uVar7 = (**(code **)(*local_78 + 0x30))(local_78,local_64);
                  FUN_013e5360(param_2,uVar7);
                }
                else {
                  uVar7 = (**(code **)(*local_78 + 0x30))(local_78,local_64);
                  in_stack_ffffffffffffff38 = CONCAT44(uVar4,2);
                  in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffff00000000;
                  in_stack_ffffffffffffff48 = CONCAT44(uVar9,0xffffffff);
                  FUN_00f1c5c0(lVar6,param_2,uVar7,&local_34,in_stack_ffffffffffffff38,
                               in_stack_ffffffffffffff40,in_stack_ffffffffffffff48,&local_30,
                               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),
                               param_1,0);
                }
                local_34 = (local_34 + 1) % 0xf;
                local_64 = local_64 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            if (*(char *)(local_30 + 0x58) == '\a') {
              FUN_00410f20(lVar6);
            }
            cVar2 = FUN_01ce33d0(local_30);
            if ((param_5 & cVar2 == '\x01') != 0) {
              FUN_01ce6ab0(local_30,0,0);
            }
            FUN_01ce8540(local_30);
          }
          local_68 = local_68 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_01ad0490(param_1);
    FUN_01acfa60(param_1);
    FUN_01ad9580(param_1,1,0,0);
    if ((local_48 != 0) && (param_4 == '\0')) {
      FUN_0072d440(local_48,1,4,0);
    }
    if (bVar1) {
      FUN_00410f20(local_78);
    }
  }
  FUN_00414560(&local_60,5);
  return local_69;
}

