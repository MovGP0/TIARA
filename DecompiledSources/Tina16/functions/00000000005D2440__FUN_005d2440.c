/* Ghidra address: 005d2440 */
/* Ghidra symbol: FUN_005d2440 */


undefined8 FUN_005d2440(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29 [9];
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  FUN_00416780(&local_40,DAT_02011f42);
  FUN_00416780(&local_48,DAT_02011f40);
  FUN_00416ba0(&local_38,local_40,local_48);
  bVar2 = 0;
  iVar3 = FUN_005d27e0(param_2,local_29);
  cVar1 = FUN_005d2b20(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_005d2c80(param_2);
    if (cVar1 == '\0') {
      uVar5 = FUN_0044f7d0(local_38,param_2,iVar3);
      uVar6 = FUN_0044f7d0(local_38,param_2,iVar3 + 1);
      iVar8 = (uVar5 & 0xff) + (uVar6 & 0xff);
      bVar7 = bVar2;
    }
    else {
      iVar4 = FUN_00441450(local_38,param_2,3);
      iVar8 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        iVar3 = FUN_00441450(local_38,param_2,iVar4 + 1);
        iVar8 = iVar4;
        if (0 < iVar3) {
          iVar8 = iVar3 + -1;
        }
      }
      bVar7 = 0;
      if (iVar3 == 0) {
        iVar8 = 0;
        bVar7 = bVar2;
        if (param_2 != 0) {
          iVar8 = *(int *)(param_2 + -4);
        }
      }
    }
    goto LAB_005d25a4;
  }
  iVar8 = iVar3 + 1;
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (iVar4 < 3) {
LAB_005d24f7:
    bVar7 = 0;
  }
  else {
    cVar1 = FUN_0044f7d0(local_38,param_2,iVar3 + 2);
    if (cVar1 == '\0') goto LAB_005d24f7;
    bVar7 = 1;
  }
  bVar2 = FUN_005d2d40(local_29[0]);
  if ((bVar7 & bVar2) != 0) {
    bVar7 = 0;
  }
LAB_005d25a4:
  FUN_00416dc0(param_1,param_2,1,iVar8);
  if (bVar7 != 0) {
    FUN_00416780(&local_50,DAT_02011f42);
    FUN_00416ad0(param_1,local_50);
  }
  FUN_00414560(&local_50,4);
  return param_1;
}

