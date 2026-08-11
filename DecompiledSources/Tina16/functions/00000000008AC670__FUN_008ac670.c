/* Ghidra address: 008ac670 */
/* Ghidra symbol: FUN_008ac670 */


longlong * FUN_008ac670(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  cVar3 = FUN_00879090(param_3,param_4);
  if (cVar3 != '\0') {
    FUN_00414ad0(param_1,param_3);
    goto code_r0x008ac96f;
  }
  FUN_00414480(param_1);
  iVar6 = 0;
  if (param_3 != 0) {
    iVar6 = *(int *)(param_3 + -4);
  }
  if (iVar6 == 0) {
LAB_008ac712:
    bVar2 = true;
  }
  else {
    cVar3 = FUN_00879100(param_3,param_4);
    if (cVar3 != '\0') goto LAB_008ac712;
    bVar2 = false;
  }
  FUN_00414b50(&local_30,param_2);
  iVar6 = 0;
  if (local_30 != 0) {
    iVar6 = *(int *)(local_30 + -4);
  }
  if (0 < iVar6) {
    cVar3 = FUN_00879100(local_30,param_4);
    if (cVar3 == '\0') {
      FUN_00416ad0(&local_30,param_4);
    }
  }
  FUN_00416ad0(&local_30,param_3);
  iVar6 = 0;
  if (local_30 != 0) {
    iVar6 = *(int *)(local_30 + -4);
  }
  if (0 < iVar6) {
    iVar6 = 1;
    while( true ) {
      iVar4 = 0;
      if (local_30 != 0) {
        iVar4 = *(int *)(local_30 + -4);
      }
      if (iVar4 < iVar6) break;
      sVar1 = *(short *)(local_30 + -2 + (longlong)iVar6 * 2);
      FUN_00416780(local_40,sVar1);
      iVar4 = FUN_00416db0(local_40[0],param_4);
      if (iVar4 == 0) {
        if (iVar6 == 1) {
          FUN_00414ad0(param_1,param_4);
        }
        else {
          cVar3 = FUN_00879100(*param_1,param_4);
          if (cVar3 == '\0') {
            FUN_00416780(&local_48,*(undefined2 *)(local_30 + -2 + (longlong)iVar6 * 2));
            FUN_00416ad0(param_1,local_48);
          }
        }
      }
      else if (sVar1 == 0x2e) {
        cVar3 = FUN_00879100(*param_1,param_4);
        if (cVar3 != '\0') {
          FUN_00416dc0(&local_50,local_30,iVar6,2);
          iVar4 = FUN_00416db0(local_50,&DAT_008ac9d8);
          if (iVar4 == 0) {
            uVar5 = 0;
            if (*param_1 != 0) {
              uVar5 = *(undefined4 *)(*param_1 + -4);
            }
            FUN_00416e20(param_1,uVar5,1);
            while( true ) {
              iVar4 = 0;
              if (*param_1 != 0) {
                iVar4 = *(int *)(*param_1 + -4);
              }
              if (iVar4 < 1) break;
              cVar3 = FUN_00879100(*param_1,param_4);
              if (cVar3 != '\0') break;
              uVar5 = 0;
              if (*param_1 != 0) {
                uVar5 = *(undefined4 *)(*param_1 + -4);
              }
              FUN_00416e20(param_1,uVar5,1);
            }
            iVar6 = iVar6 + 1;
            goto LAB_008ac906;
          }
        }
        FUN_00416780(&local_58,*(undefined2 *)(local_30 + -2 + (longlong)iVar6 * 2));
        FUN_00416ad0(param_1,local_58);
      }
      else {
        FUN_00416780(&local_60,*(undefined2 *)(local_30 + -2 + (longlong)iVar6 * 2));
        FUN_00416ad0(param_1,local_60);
      }
LAB_008ac906:
      iVar6 = iVar6 + 1;
    }
  }
  iVar6 = FUN_00416db0(*param_1,param_4);
  if (iVar6 != 0) {
    cVar3 = FUN_00879100(*param_1,param_4);
    if ((cVar3 != '\0') && (!bVar2)) {
      uVar5 = 0;
      if (*param_1 != 0) {
        uVar5 = *(undefined4 *)(*param_1 + -4);
      }
      FUN_00416e20(param_1,uVar5,1);
    }
  }
code_r0x008ac96f:
  FUN_00414560(&local_60,5);
  FUN_00414480(&local_30);
  return param_1;
}

