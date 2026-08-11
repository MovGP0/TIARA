/* Ghidra address: 015571d0 */
/* Ghidra symbol: FUN_015571d0 */


void FUN_015571d0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_268 [32];
  undefined *local_248;
  undefined8 local_240;
  undefined *local_238;
  undefined *local_230;
  int local_220;
  int local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190 [5];
  undefined8 local_168 [2];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_130 [2];
  undefined8 local_120 [6];
  int local_ec;
  longlong local_58 [3];
  undefined8 local_40 [4];
  
  local_218 = 0;
  local_208 = 0;
  local_210 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_130[0] = 0;
  local_40[0] = 0;
  local_58[1] = 0;
  local_1a0 = 0;
  local_120[0] = 0;
  local_58[0] = 0;
  local_1a8 = 0;
  local_150 = 0;
  local_168[0] = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_158 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_190[0] = 0;
  local_1e8 = (undefined *)0x0;
  local_140 = 0;
  local_148 = 0;
  local_220 = param_2;
  local_ec = param_2;
  if (param_2 == 0) {
    FUN_015564e0(auStack_268);
  }
  if ((local_220 == 1) && (*(char *)(param_1 + 0x94c) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x980);
    iVar5 = *(int *)(lVar1 + 0x10);
    local_21c = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar4 = FUN_004aeac0(lVar1,local_21c);
        if (*(int *)(lVar4 + 0x18) == 0) {
          iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),L"real");
          if (iVar3 == 0) {
            FUN_00414b50(&local_1e8,L" := 0.0");
          }
          else {
            FUN_00414b50(&local_1e8,L" := \'0\'");
          }
          if (*(int *)(lVar4 + 0x1c) == 2) {
            FUN_00414480(&local_1e8);
          }
        }
        else {
          FUN_00414480(&local_1e8);
        }
        FUN_00414b50(local_58,*(undefined8 *)(lVar4 + 0x10));
        if (local_1e8 == (undefined *)0x0) {
          FUN_0043e1a0(&local_1f0,local_58[0]);
          iVar3 = FUN_00416db0(local_1f0,L"real");
          if (iVar3 != 0) {
            FUN_0043e1a0(&local_1f8,local_58[0]);
            iVar3 = FUN_00416db0(local_1f8,L"std_logic");
            if ((iVar3 != 0) && (local_58[0] != 0)) goto LAB_01557448;
          }
        }
        else {
LAB_01557448:
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            local_248 = &DAT_01557a3c;
            local_240 = *(undefined8 *)PTR_PTR_02001278;
            local_238 = local_1e8;
            local_230 = &DAT_01557a50;
            FUN_00416cd0(local_40,6,L" signal ",*(undefined8 *)(lVar4 + 8));
          }
          else {
            local_248 = &DAT_01557a3c;
            local_240 = *(undefined8 *)(lVar4 + 0x10);
            local_238 = local_1e8;
            local_230 = &DAT_01557a50;
            FUN_00416cd0(local_40,6,L" signal ",*(undefined8 *)(lVar4 + 8));
          }
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_40[0]);
        }
        local_21c = local_21c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01557ef0(param_1,L"std_logic",0);
    FUN_01557ef0(param_1,L"real",0);
    cVar2 = FUN_0154f5b0(param_1);
    if (cVar2 != '\0') {
      FUN_01557ef0(param_1,L"std_logic",1);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
      local_21c = 0;
      if (-1 < iVar5 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                    (*(longlong **)(param_1 + 0x40),local_58,local_21c);
          FUN_0043e1a0(&local_200,local_58[0]);
          iVar3 = FUN_00416db0(local_200,L"std_logic");
          if (iVar3 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                      (*(longlong **)(param_1 + 0x38),&local_208,local_21c);
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                      (*(longlong **)(param_1 + 0x40),&local_210,local_21c);
            local_248 = &DAT_01557a3c;
            local_240 = local_210;
            local_238 = &DAT_01557a50;
            FUN_00416cd0(local_40,5,L" signal ",local_208);
            (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                      (*(longlong **)(param_1 + 0x8f8),local_40[0]);
          }
          local_21c = local_21c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48));
    if (0 < iVar5) {
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x88))
                (*(longlong **)(param_1 + 0x8f8),*(undefined8 *)(param_1 + 0x48));
    }
    if (*(char *)(param_1 + 0x94e) != '\0') {
      FUN_01556fb0(auStack_268);
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x980) + 0x10)) {
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
    }
  }
  if (local_220 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),L"BEGIN")
    ;
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  }
  if (*(char *)(param_1 + 0x94c) == '\0') {
    FUN_01553fd0(auStack_268);
    FUN_01552c00(auStack_268);
  }
  if (local_220 == 1) {
    if ((*(char *)(param_1 + 0x94c) == '\0') &&
       (*(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10) == 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),L"dummy: process");
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),L" begin");
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),L"  wait;");
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),L" end process dummy;");
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
    }
    local_248 = &DAT_01557a50;
    FUN_00416cd0(&local_218,3,L"END ",*(undefined8 *)(param_1 + 0x778));
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
              (*(longlong **)(param_1 + 0x8f8),local_218);
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  }
  FUN_00414560(&local_218,0x10);
  FUN_00414480(local_190);
  FUN_004144d0(local_168);
  FUN_00414560(&local_158,4);
  FUN_00414480(local_130);
  FUN_00414480(local_120);
  FUN_00414560(local_58,2);
  FUN_00414480(local_40);
  return;
}

