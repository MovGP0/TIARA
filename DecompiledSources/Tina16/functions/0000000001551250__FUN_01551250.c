/* Ghidra address: 01551250 */
/* Ghidra symbol: FUN_01551250 */


void FUN_01551250(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_0043e1a0(&local_50,*(undefined8 *)(param_1 + 0x760));
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                    (*(longlong **)(param_1 + 0x30),local_50);
  if (-1 < iVar5) {
    FUN_00416ad0(param_1 + 0x760,L"_mod");
  }
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  FUN_01550cd0(auStack_a8);
  FUN_01550d60(auStack_a8);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  if (*(char *)(param_1 + 0x94b) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
              (*(longlong **)(param_1 + 0x8f8),L"------------------------------------");
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
              (*(longlong **)(param_1 + 0x8f8),L"-- Main section begin               ");
  }
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"------------------------------------");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"-- entity section                   ");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"------------------------------------");
  local_88 = L" IS ";
  FUN_00416cd0(&local_58,3,L"ENTITY ",*(undefined8 *)(param_1 + 0x760));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_58);
  lVar1 = *(longlong *)(param_1 + 0x750);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar9 = 0;
  if (-1 < iVar5 + -1) {
    do {
      if (iVar9 == 0) {
        plVar2 = *(longlong **)(param_1 + 0x8f8);
        iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar6 + -1);
        FUN_00416ad0(&local_30,L"PORT(");
        plVar2 = *(longlong **)(param_1 + 0x8f8);
        iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x40))(plVar2,iVar6 + -1,local_30);
      }
      lVar8 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar9);
      FUN_01571a60(lVar8,&local_38);
      if ((*(longlong *)(param_1 + 0x938) == 0) ||
         (cVar3 = FUN_00e0f210(*(longlong *)(param_1 + 0x938),*(undefined4 *)(lVar8 + 0x30),
                               param_1 + 0xa10), cVar3 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 0xa08) = uVar4;
      if (*(int *)(lVar8 + 0x58) != 1) {
        if (*(char *)(lVar8 + 0x98) == '\0') {
          FUN_00414ad0(lVar8 + 0x20,*(undefined8 *)(param_1 + 0xa10));
          FUN_01550c40(param_1,&local_40,lVar8);
          FUN_01571620(lVar8,&local_60);
          local_88 = L" : ";
          local_80 = local_60;
          local_78 = &DAT_01551900;
          local_70 = *(undefined8 *)(param_1 + 0xa10);
          FUN_00416cd0(&local_30,6,&DAT_015518d8,local_40);
          if (iVar9 < *(int *)(lVar1 + 0x10) + -1) {
            FUN_00416ad0(&local_30,&DAT_01551910);
          }
          else {
            FUN_00416ad0(&local_30,&DAT_015518c4);
          }
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_30);
        }
        else if (iVar9 == *(int *)(lVar1 + 0x10) + -1) {
          plVar2 = *(longlong **)(param_1 + 0x8f8);
          iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar6 + -1);
          uVar7 = 0;
          if (local_30 != 0) {
            uVar7 = *(undefined4 *)(local_30 + -4);
          }
          FUN_00416e20(&local_30,uVar7,1);
          FUN_00416ad0(&local_30,&DAT_015518c4);
          plVar2 = *(longlong **)(param_1 + 0x8f8);
          iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x40))(plVar2,iVar6 + -1,local_30);
        }
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_88 = L";";
  FUN_00416cd0(&local_68,3,L"END ",*(undefined8 *)(param_1 + 0x760));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_68);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  FUN_00414560(&local_68,8);
  return;
}

