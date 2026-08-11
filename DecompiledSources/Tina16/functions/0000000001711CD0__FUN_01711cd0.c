/* Ghidra address: 01711cd0 */
/* Ghidra symbol: FUN_01711cd0 */


void FUN_01711cd0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80 [2];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x90),&local_60,iVar8);
      iVar3 = FUN_004170c0(L"<TINADIR>",local_60,1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(L"<COMMONCATDIR>",local_60,1);
        if (iVar3 < 1) {
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0;
      }
      FUN_00b928f0(&local_38,local_60,*(undefined8 *)(param_1 + 0xd0));
      FUN_004414c0(&local_30,local_38,L".TLD");
      cVar1 = FUN_00440a20(local_38,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00440a20(local_30,1), cVar1 != '\0')) {
        (**(code **)(*plVar6 + 0xd8))(plVar6,local_30);
        local_6c = 0;
        FUN_01710ad0(plVar6,&local_68,&local_6c);
        FUN_00b0d000(local_80,local_68,0xfde9);
        FUN_004168b0(&local_40,local_80[0]);
        FUN_004b5450(*(undefined8 *)(param_1 + 0x90),iVar8,local_40);
        do {
          cVar1 = FUN_01710ad0(plVar6,&local_68,&local_6c);
          FUN_00416880(&local_90,local_68);
          FUN_0043ea00(&local_88,local_90);
          if (local_88 != 0) {
            FUN_00b0d000(&local_98,local_68,0xfde9);
            FUN_004168b0(&local_58,local_98);
            FUN_01710860(&local_58);
            iVar3 = FUN_004170c0(&DAT_017122f0,local_58,1);
            if (0 < iVar3) {
              uVar4 = FUN_004170c0(&DAT_017122f0,local_58,1);
              uVar5 = 0;
              if (local_58 != 0) {
                uVar5 = *(undefined4 *)(local_58 + -4);
              }
              FUN_00416e20(&local_58,uVar4,uVar5);
            }
            FUN_0043ea00(&local_a0,local_58);
            FUN_00414b50(&local_58,local_a0);
            FUN_017109f0(&local_a8,&local_58);
            FUN_0043e130(&local_48,local_a8);
            FUN_017109f0(&local_b0,&local_58);
            FUN_0043e130(&local_50,local_b0);
            if (local_50 != 0) {
              iVar3 = FUN_00416db0(local_48,L"SUBCKT");
              if (iVar3 == 0) {
                FUN_01712890(param_1,local_50,local_58,local_40,local_60,uVar7);
              }
              else {
                iVar3 = FUN_00416db0(local_48,L"MODEL");
                if (iVar3 == 0) {
                  FUN_01713700(param_1,local_50,local_58,local_40,local_60,uVar7);
                }
                else {
                  iVar3 = FUN_00416db0(local_48,L"SPARAMS1P");
                  if (iVar3 == 0) {
                    FUN_01714380(param_1,local_50,local_58,local_40,local_60,uVar7);
                  }
                  else {
                    iVar3 = FUN_00416db0(local_48,L"SPARAMS2P");
                    if (iVar3 == 0) {
                      FUN_01713c30(param_1,local_50,local_58,local_40,local_60,uVar7);
                    }
                    else {
                      iVar3 = FUN_00416db0(local_48,L"VHDLMACRO");
                      if (iVar3 == 0) {
                        FUN_01714ad0(param_1,local_50,local_58,local_40,local_60,uVar7);
                      }
                    }
                  }
                }
              }
            }
          }
        } while (cVar1 == '\0');
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar6);
  FUN_00414560(&local_b0,3);
  FUN_00414520(&local_98);
  FUN_00414560(&local_90,2);
  FUN_00414520(local_80);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,7);
  return;
}

