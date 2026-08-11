/* Ghidra address: 010b2240 */
/* Ghidra symbol: FUN_010b2240 */


undefined8 FUN_010b2240(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414480(local_30);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      cVar1 = FUN_010af9d0(lVar2);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_38,*(undefined8 *)(lVar2 + 0x30));
        if (local_res18 != 0) {
          FUN_004414c0(&local_40,local_38,local_res18);
          FUN_00416ba0(&local_38,local_res20,local_40);
        }
        FUN_00416cd0(local_30,3,local_30[0],local_38,&LAB_010b23d0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res18,2);
  return param_2;
}

