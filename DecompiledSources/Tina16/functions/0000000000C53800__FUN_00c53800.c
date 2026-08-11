/* Ghidra address: 00c53800 */
/* Ghidra symbol: FUN_00c53800 */


byte FUN_00c53800(undefined8 param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = -1;
  FUN_00416dc0(local_20,local_res8[0],8,0xff);
  FUN_0043e1a0(local_30,L"CFG_REG");
  FUN_0043e1a0(&local_38,local_res8[0]);
  iVar3 = FUN_004170c0(local_30[0],local_38,1);
  cVar1 = FUN_00c53700(local_20[0],param_2);
  if ((cVar1 == '\0') || (0xffff < *param_2)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return iVar3 == 1 & bVar2;
}

