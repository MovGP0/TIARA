/* Ghidra address: 019dcd30 */
/* Ghidra symbol: FUN_019dcd30 */


void FUN_019dcd30(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong local_res8 [4];
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_14 = 0;
  while( true ) {
    iVar2 = 0;
    if (local_res8[0] != 0) {
      iVar2 = *(int *)(local_res8[0] + -4);
    }
    if (iVar2 <= local_14) break;
    FUN_019dcab0(&local_10,local_res8[0],&local_14);
    cVar1 = FUN_005b8460(L".Model",local_10);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x78))(param_2,local_10);
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return;
}

