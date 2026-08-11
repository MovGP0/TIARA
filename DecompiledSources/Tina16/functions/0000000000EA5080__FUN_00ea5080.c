/* Ghidra address: 00ea5080 */
/* Ghidra symbol: FUN_00ea5080 */


void FUN_00ea5080(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  if (param_2 == (longlong *)0x0) {
    uVar5 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02004cd0);
    FUN_004134c0(uVar5);
  }
  if (param_3 != 1) {
    cVar1 = FUN_00ea4860(param_1);
    if (cVar1 != '\0') {
      bVar7 = param_4 != 1;
      local_60 = param_3;
      if (param_4 != 1) {
        local_60 = param_3 + -1;
      }
      iVar2 = 0;
      iVar6 = 1;
      do {
        if (bVar7) {
          iVar2 = FUN_00ea4640(param_1,0);
          if (param_4 + -1 <= iVar2) {
            bVar7 = false;
            uVar3 = FUN_00ea4640(param_1,0);
            FUN_00416dc0(&local_38,*(undefined8 *)(param_1 + 0x20),1,uVar3);
            (**(code **)(*param_2 + 0x78))(param_2);
            if (*(int *)(param_1 + 0x504) < 1) {
              uVar5 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
              FUN_004134c0(uVar5);
            }
            if (0 < *(int *)(param_1 + 0x504) + -1) {
              if (*(int *)(param_1 + 0x504) < 1) {
                uVar5 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
                FUN_004134c0(uVar5);
              }
              FUN_00ea46f0(param_1,&local_40,*(int *)(param_1 + 0x504) + -1);
              (**(code **)(*param_2 + 0x78))(param_2);
            }
          }
        }
        else {
          iVar4 = FUN_00ea4640(param_1,0);
          FUN_00416dc0(&local_48,*(undefined8 *)(param_1 + 0x20),iVar2 + 1,iVar4 - iVar2);
          (**(code **)(*param_2 + 0x78))(param_2);
          iVar6 = iVar6 + 1;
          if (*(int *)(param_1 + 0x504) < 1) {
            uVar5 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
            FUN_004134c0(uVar5);
          }
          if (0 < *(int *)(param_1 + 0x504) + -1) {
            if (*(int *)(param_1 + 0x504) < 1) {
              uVar5 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
              FUN_004134c0(uVar5);
            }
            FUN_00ea46f0(param_1,&local_50,*(int *)(param_1 + 0x504) + -1);
            (**(code **)(*param_2 + 0x78))(param_2);
          }
        }
        iVar2 = FUN_00ea4640(param_1,0);
        iVar4 = FUN_00ea4580(param_1);
        iVar2 = iVar2 + iVar4;
        if ((1 < local_60) && (local_60 <= iVar6)) break;
        cVar1 = FUN_00ea4940(param_1);
      } while (cVar1 != '\0');
      iVar6 = 0;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
      }
      FUN_00416dc0(&local_58,*(undefined8 *)(param_1 + 0x20),iVar2 + 1,iVar6 - iVar2);
      (**(code **)(*param_2 + 0x78))(param_2,local_58);
      goto code_r0x00ea5389;
    }
  }
  FUN_00ea47c0(param_1,local_30);
  (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
code_r0x00ea5389:
  FUN_00414560(&local_58,6);
  return;
}

