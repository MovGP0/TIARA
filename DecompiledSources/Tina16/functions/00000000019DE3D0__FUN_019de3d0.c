/* Ghidra address: 019de3d0 */
/* Ghidra symbol: FUN_019de3d0 */


undefined8 * FUN_019de3d0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined8 local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  local_14 = 0;
  while( true ) {
    iVar2 = 0;
    if (local_res10[0] != 0) {
      iVar2 = *(int *)(local_res10[0] + -4);
    }
    if (iVar2 <= local_14) break;
    FUN_019dcab0(&local_10,local_res10[0],&local_14);
    cVar1 = FUN_005b8460(&DAT_019de51c,local_10);
    if (cVar1 != '\0') {
      cVar1 = FUN_005b8460(L".PARAM",local_10);
      if (cVar1 != '\0') {
        FUN_00450070(&local_20,local_10,L".param",L".VAR",2);
        FUN_00414b50(&local_10,local_20);
      }
    }
    FUN_00416cd0(param_1,3,*param_1,local_10,&LAB_019de57c);
  }
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

