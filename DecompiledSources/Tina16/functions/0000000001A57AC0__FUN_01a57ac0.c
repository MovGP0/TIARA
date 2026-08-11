/* Ghidra address: 01a57ac0 */
/* Ghidra symbol: FUN_01a57ac0 */


void FUN_01a57ac0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  wchar_t *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_d0;
  longlong local_c8;
  longlong local_b8;
  undefined8 local_a8;
  int local_8c;
  int local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_38;
  undefined8 local_30 [2];
  
  local_f0 = auStack_148;
  local_f8 = 0;
  local_100 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30[0] = 0;
  *(undefined1 *)(param_1 + 0x814) = 0;
  puVar2 = auStack_148;
  if (*(char *)(param_1 + 0x293b) == '\0') {
    FUN_01a57310(param_1,1,0);
    *(undefined1 *)(param_1 + 0x293b) = 1;
    puVar2 = local_f0;
  }
  local_f0 = puVar2;
  local_38 = 0;
  FUN_00416ba0(&local_78,*(undefined8 *)(param_1 + 0x830),L"lms_cmd.py");
  FUN_01a3e910(param_1,local_78);
  FUN_0147b670(*(undefined8 *)(param_1 + 0x7f0));
  FUN_01a3ed60(param_1);
  local_128 = L"ls_models.json";
  FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a57fd0);
  cVar3 = FUN_00440a20(local_50,1);
  if (cVar3 != '\0') {
    FUN_00414480(local_30);
    FUN_005d10a0(local_50,0,0);
    FUN_005d1300(local_30,local_50);
    local_38 = FUN_00f30500(local_30[0],0,0);
    FUN_00414480(local_30);
    local_d0 = FUN_004113f0(local_38,&LAB_00f256b8);
    iVar5 = *(int *)(*(longlong *)(local_d0 + 0x10) + 0x10);
    local_88 = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_a8 = FUN_00f33510(local_d0,local_88);
        local_b8 = FUN_004113f0(local_a8,&LAB_00f23b78);
        iVar6 = *(int *)(*(longlong *)(local_b8 + 0x10) + 0x10);
        local_8c = 0;
        if (-1 < iVar6 + -1) {
          do {
            local_c8 = FUN_00f30ba0(local_b8,local_8c);
            (**(code **)(**(longlong **)(local_c8 + 0x10) + 0x18))
                      (*(longlong **)(local_c8 + 0x10),&local_70);
            iVar4 = FUN_00416db0(local_70,L"modelKey");
            if (iVar4 == 0) {
              (**(code **)(**(longlong **)(local_c8 + 0x18) + 0x18))
                        (*(longlong **)(local_c8 + 0x18),&local_58);
              iVar4 = FUN_004170c0(L"nomic-",local_58,1);
              if (iVar4 == 0) {
                FUN_00416ba0(&local_100,L"%s: ",local_58);
                local_110 = L"Local";
                local_108 = 0x11;
                FUN_00442f70(&local_f8,local_100,&local_110,0);
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f0) + 8);
                (**(code **)(*plVar1 + 0x78))(plVar1,local_f8);
              }
            }
            iVar4 = FUN_00416db0(local_70,L"path");
            if (iVar4 == 0) {
              (**(code **)(**(longlong **)(local_c8 + 0x18) + 0x18))
                        (*(longlong **)(local_c8 + 0x18),&local_58);
              iVar4 = FUN_004170c0(L"nomic-",local_58,1);
              if (iVar4 == 0) {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f0) + 0x10);
                (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
              }
            }
            local_8c = local_8c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_88 = local_88 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f0) + 8);
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(bool *)(param_1 + 0x814) = 0 < iVar5;
  if (local_38 != 0) {
    FUN_00410f20(local_38);
  }
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_78,7);
  FUN_00414480(local_30);
  return;
}

