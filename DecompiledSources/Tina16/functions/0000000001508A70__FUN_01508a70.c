/* Ghidra address: 01508a70 */
/* Ghidra symbol: FUN_01508a70 */


void FUN_01508a70(undefined8 param_1,longlong *param_2,int param_3,int param_4,short *param_5)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  pcVar5 = (code *)FUN_00411550(param_2,0xffb3);
  cVar2 = (*pcVar5)(param_2);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 600))(param_2);
  }
  iVar3 = (**(code **)(*param_2 + 0x278))(param_2);
  if (iVar3 < param_3) {
    (**(code **)(*param_2 + 0x290))(param_2,param_3);
  }
  iVar4 = (**(code **)(*param_2 + 0x278))(param_2);
  FUN_0064dd90(param_2,local_20);
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  if (iVar3 - param_4 <= iVar4) {
    FUN_0064dd90(param_2,&local_28);
    iVar3 = 0;
    if (local_28 != 0) {
      iVar3 = *(int *)(local_28 + -4);
    }
    (**(code **)(*param_2 + 0x290))(param_2,(iVar3 - param_4) + -1);
  }
  iVar3 = (**(code **)(*param_2 + 0x270))(param_2);
  if (iVar3 != 1) {
    (**(code **)(*param_2 + 0x288))(param_2,1);
  }
  sVar1 = *param_5;
  if (sVar1 == 8) {
    *param_5 = 0;
  }
  else if (sVar1 == 0x25) {
    iVar4 = (**(code **)(*param_2 + 0x278))(param_2);
    FUN_0064dd90(param_2,&local_30);
    iVar3 = 0;
    if (local_30 != 0) {
      iVar3 = *(int *)(local_30 + -4);
    }
    if ((iVar3 - param_4) + -1 < iVar4) {
      FUN_0064dd90(param_2,&local_38);
      iVar3 = 0;
      if (local_38 != 0) {
        iVar3 = *(int *)(local_38 + -4);
      }
      (**(code **)(*param_2 + 0x290))(param_2,(iVar3 - param_4) + -1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x278))(param_2);
      if (param_3 < iVar3) {
        iVar3 = (**(code **)(*param_2 + 0x278))(param_2);
        (**(code **)(*param_2 + 0x290))(param_2,iVar3 + -1);
      }
      else {
        (**(code **)(*param_2 + 0x290))(param_2,param_3);
      }
    }
    (**(code **)(*param_2 + 0x288))(param_2,1);
    *param_5 = 0;
  }
  else if (sVar1 == 0x27) {
    iVar3 = (**(code **)(*param_2 + 0x278))(param_2);
    if (iVar3 < param_3) {
      (**(code **)(*param_2 + 0x290))(param_2,param_3);
    }
    else {
      iVar4 = (**(code **)(*param_2 + 0x278))(param_2);
      FUN_0064dd90(param_2,&local_40);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      if (iVar4 < (iVar3 - param_4) + -1) {
        iVar3 = (**(code **)(*param_2 + 0x278))(param_2);
        (**(code **)(*param_2 + 0x290))(param_2,iVar3 + 1);
      }
    }
    (**(code **)(*param_2 + 0x288))(param_2,1);
    *param_5 = 0;
  }
  else if (sVar1 == 0x2e) {
    *param_5 = 0;
  }
  FUN_00414560(&local_40,5);
  return;
}

