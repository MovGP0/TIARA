/* Ghidra address: 00c0d6e0 */
/* Ghidra symbol: FUN_00c0d6e0 */


char FUN_00c0d6e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  char local_41;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6588);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a83f0);
    if (cVar1 != '\0') {
      pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
      local_41 = (*pcVar3)(param_1);
      if (local_41 != '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a9620);
        uVar5 = (undefined7)((ulonglong)param_1 >> 8);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a8898);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a8f00);
            if (cVar1 != '\0') {
              FUN_00bf36a0(param_1,&local_30);
              if ((local_30 == 0) || (param_1[0xc9] == 0)) {
                uVar2 = 0;
              }
              else {
                uVar2 = (undefined4)CONCAT71(uVar5,1);
              }
              (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
            }
          }
          else {
            FUN_00bf36a0(param_1,&local_28);
            if ((local_28 == 0) || (param_1[0xc9] == 0)) {
              uVar2 = 0;
            }
            else {
              uVar2 = (undefined4)CONCAT71(uVar5,1);
            }
            (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
          }
        }
        else {
          FUN_00bf36a0(param_1,local_20);
          if ((local_20[0] == 0) || (param_1[0xc9] == 0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined4)CONCAT71(uVar5,1);
          }
          (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
        }
      }
      goto code_r0x00c0da95;
    }
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a9900);
    if (cVar1 == '\0') {
      local_41 = FUN_004d44e0(param_1,param_2);
      goto code_r0x00c0da95;
    }
    pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
    local_41 = (*pcVar3)(param_1);
    if (local_41 == '\0') goto code_r0x00c0da95;
    FUN_00bf36a0(param_1,&local_38);
    if ((local_38 == 0) || (param_2[0x27] == 0)) {
LAB_00c0da69:
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_006ab190(param_2[0x27]);
      uVar4 = FUN_007267a0(uVar4,&local_40);
      if (local_40 == 0) goto LAB_00c0da69;
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
    goto code_r0x00c0da95;
  }
  pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
  local_41 = (*pcVar3)(param_1);
  if (local_41 == '\0') goto code_r0x00c0da95;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6938);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6be8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a6ea0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a77d0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a74c0);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a71b0);
            if (cVar1 != '\0') {
              (**(code **)(*param_2 + 0xe8))(param_2,1);
            }
          }
          else {
            uVar2 = FUN_00bff830(param_1);
            (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
          }
        }
        else {
          cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
          (**(code **)(*param_2 + 0xe8))(param_2,cVar1 == '\0');
        }
      }
      else {
        uVar2 = FUN_00bff8b0(param_1);
        (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
      }
    }
    else {
      uVar2 = FUN_00bf2c80(param_1);
      (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
    }
    goto code_r0x00c0da95;
  }
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') {
LAB_00c0d78a:
    uVar2 = 0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x278))(param_1);
    if ((char)uVar4 != '\0') goto LAB_00c0d78a;
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
code_r0x00c0da95:
  FUN_00414560(&local_40,5);
  return local_41;
}

