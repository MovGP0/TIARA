/* Ghidra address: 01ba4480 */
/* Ghidra symbol: FUN_01ba4480 */


void FUN_01ba4480(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 0x710);
  *(undefined4 *)(param_1 + 0x730) = 4;
  iVar2 = FUN_00416db0(local_res10[0],L"ready");
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x730) = 1;
  }
  else {
    iVar2 = FUN_00416db0(local_res10[0],&PTR_DAT_01ba4924);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x730) = 1;
      FUN_01ba1140(local_30,lVar1 + 0x9a4);
      FUN_00414ad0(lVar1 + 0x988,local_30[0]);
      FUN_01ba29e0(lVar1,&local_38,lVar1 + 0x99c,lVar1 + 0x9a4);
      FUN_00415dd0(local_20,local_38,0);
      FUN_00416880(&local_40,local_20[0]);
      FUN_01ba4280(param_1,local_40);
      FUN_01ba2180(lVar1,1);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      if (*(char *)(param_1 + 0x738) != '\0') {
        thunk_FUN_0419965d(1000);
      }
      *(undefined4 *)(lVar1 + 0x9ac) = 4;
      FUN_01ba4180(param_1);
    }
    else {
      iVar2 = FUN_00416db0(local_res10[0],L"illegal");
      if (iVar2 == 0) {
        *(undefined4 *)(lVar1 + 0x9ac) = 1;
        *(undefined4 *)(param_1 + 0x730) = 5;
      }
      else {
        iVar2 = FUN_00416db0(local_res10[0],L"black mates");
        if (iVar2 == 0) {
          *(undefined4 *)(lVar1 + 0x9ac) = 7;
          FUN_01ba4180(param_1);
          *(undefined1 *)(lVar1 + 0x9b0) = 0;
        }
        else {
          iVar2 = FUN_00416db0(local_res10[0],L"white mates");
          if (iVar2 == 0) {
            *(undefined4 *)(lVar1 + 0x9ac) = 8;
            FUN_01ba4180(param_1);
            *(undefined1 *)(lVar1 + 0x9b0) = 0;
          }
          else {
            iVar2 = FUN_00416db0(local_res10[0],L"draw");
            if (iVar2 == 0) {
              *(undefined4 *)(lVar1 + 0x9ac) = 6;
              FUN_01ba4180(param_1);
              *(undefined1 *)(lVar1 + 0x9b0) = 0;
            }
          }
        }
      }
    }
  }
  if ((*(int *)(lVar1 + 0x9ac) == 0) && (*(int *)(param_1 + 0x730) == 1)) {
    FUN_01ba4280(param_1,L">> Ready");
    *(undefined1 *)(lVar1 + 0x9b0) = 1;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(lVar1 + 0x9ac) = 1;
    FUN_01ba4180(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),1);
  }
  else if ((*(int *)(lVar1 + 0x9ac) == 4) &&
          ((*(int *)(param_1 + 0x730) == 4 && (*(char *)(lVar1 + 0x9b0) != '\0')))) {
    FUN_00415dd0(local_20,local_res10[0],0);
    FUN_004156b0(&local_48,&LAB_01ba49d4,local_20[0]);
    FUN_00416880(&local_50,local_48);
    FUN_01ba4280(param_1,local_50);
    FUN_00416880(&local_58,local_20[0]);
    FUN_01ba2af0(lVar1,local_58);
    FUN_00416880(&local_60,local_20[0]);
    FUN_01ba1310(local_60,lVar1 + 0x990);
    FUN_01ba2180(lVar1,0);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (*(char *)(param_1 + 0x738) != '\0') {
      thunk_FUN_0419965d(1000);
    }
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(lVar1 + 0x9ac) = 1;
    FUN_01ba4180(param_1);
    if (*(char *)(param_1 + 0x738) != '\0') {
      *(int *)(param_1 + 0x734) = *(int *)(param_1 + 0x734) + 1;
      FUN_01ba42f0(param_1);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_004144d0(&local_48);
  FUN_00414560(&local_40,3);
  FUN_004144d0(local_20);
  FUN_00414480(local_res10);
  return;
}

