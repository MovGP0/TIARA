/* Ghidra address: 012cb590 */
/* Ghidra symbol: FUN_012cb590 */


void FUN_012cb590(longlong param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,char param_8,char param_9)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if ((param_4 != '\0' || param_5 != '\0') || (param_6 != '\0')) {
    FUN_00414480(&local_28);
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (param_4 == '\0') {
      if (param_5 == '\0') {
        if (param_9 != '\0') {
          FUN_00414b50(&local_28,L".corner");
        }
        if (param_3 == '\0') {
          FUN_00416ba0(&local_30,local_28,L".refresult.dc");
        }
        else {
          FUN_00416ba0(&local_30,local_28,L".testresult.dc");
        }
        uVar3 = (undefined4)CONCAT71(uVar4,1);
      }
      else {
        if (param_8 != '\0') {
          FUN_00414b50(&local_28,L".corner");
        }
        if (param_3 == '\0') {
          FUN_00416ba0(&local_30,local_28,L".refresult.ac");
        }
        else {
          FUN_00416ba0(&local_30,local_28,L".testresult.ac");
        }
        uVar3 = (undefined4)CONCAT71(uVar4,8);
      }
    }
    else {
      if (param_7 != '\0') {
        FUN_00414b50(&local_28,L".corner");
      }
      if (param_3 == '\0') {
        FUN_00416ba0(&local_30,local_28,L".refresult.tr");
      }
      else {
        FUN_00416ba0(&local_30,local_28,L".testresult.tr");
      }
      uVar3 = (undefined4)CONCAT71(uVar4,6);
    }
    lVar2 = FUN_006dd390(param_2);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),&LAB_012cb984);
    if (iVar1 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),local_40);
      FUN_00416cd0(local_20,4,local_40[0],&LAB_012cb984,*(undefined8 *)(param_2 + 0x10),local_30);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_48);
      lVar2 = FUN_006dd390(param_2);
      FUN_00416cd0(local_20,6,local_48,&LAB_012cb984,*(undefined8 *)(lVar2 + 0x10),&LAB_012cb984,
                   *(undefined8 *)(param_2 + 0x10),local_30);
    }
    FUN_012cb240(param_1,local_20[0],uVar3);
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_30,3);
  return;
}

