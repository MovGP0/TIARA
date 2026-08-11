/* Ghidra address: 00c53700 */
/* Ghidra symbol: FUN_00c53700 */


bool FUN_00c53700(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0;
  FUN_00416dc0(&local_10,local_res8[0],1,2);
  iVar2 = FUN_00416db0(local_10,&DAT_00c537f4);
  if (iVar2 == 0) {
    FUN_00416dc0(local_res8,local_res8[0],3,0xff);
  }
  cVar1 = FUN_00c53620(local_res8[0]);
  if (cVar1 != '\0') {
    uVar3 = FUN_01aa1170(local_res8[0]);
    *param_2 = uVar3;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return cVar1 != '\0';
}

