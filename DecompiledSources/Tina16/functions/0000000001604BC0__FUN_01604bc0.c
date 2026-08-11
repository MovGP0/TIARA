/* Ghidra address: 01604bc0 */
/* Ghidra symbol: FUN_01604bc0 */


undefined4 FUN_01604bc0(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  FUN_00414480(&local_30);
  FUN_00414480(param_2);
  iVar2 = 1;
  iVar4 = iVar3;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_00c53600(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
      if (cVar1 != '\0') {
        FUN_00416780(local_40,*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
        FUN_00416ad0(&local_30,local_40[0]);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_00c535d0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar4 * 2));
      if (cVar1 != '\0') {
        FUN_00416780(&local_48,*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar4 * 2));
        FUN_00416ad0(param_2,local_48);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043e130(&local_50,*param_2);
  FUN_00414ad0(param_2,local_50);
  iVar3 = FUN_00416db0(*param_2,&DAT_01604e44);
  if ((((iVar3 == 0) || (iVar3 = FUN_00416db0(*param_2,&DAT_01604e58), iVar3 == 0)) ||
      (iVar3 = FUN_00416db0(*param_2,&DAT_01604e6c), iVar3 == 0)) ||
     (((iVar3 = FUN_00416db0(*param_2,&DAT_01604e80), iVar3 == 0 ||
       (iVar3 = FUN_00416db0(*param_2,&DAT_01604e94), iVar3 == 0)) ||
      ((iVar3 = FUN_00416db0(*param_2,&DAT_01604ea8), iVar3 == 0 ||
       (iVar3 = FUN_00416db0(*param_2,&LAB_01604ebc), iVar3 == 0)))))) {
    local_54 = FUN_0043fc00(local_30);
    *param_3 = 1;
  }
  else {
    local_54 = 0;
    *param_3 = 0;
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  FUN_00414480(local_res8);
  return local_54;
}

