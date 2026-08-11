/* Ghidra address: 00e0e5d0 */
/* Ghidra symbol: FUN_00e0e5d0 */


undefined8 FUN_00e0e5d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,local_res18[0]);
  cVar1 = FUN_00e0e4a0(param_1,local_res18[0],&local_10);
  if (cVar1 != '\0') {
    iVar2 = FUN_004170c0(local_10,local_res18[0],1);
    if (iVar2 == 1) {
      iVar2 = 0;
      if (local_res18[0] != 0) {
        iVar2 = *(int *)(local_res18[0] + -4);
      }
      FUN_00416dc0(&local_18,local_res18[0],2,iVar2 + -1);
      FUN_00416cd0(param_2,4,local_10,&DAT_00e0e6f8,local_18,&LAB_00e0e708);
    }
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return param_2;
}

