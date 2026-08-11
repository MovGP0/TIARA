/* Ghidra address: 012f4ad0 */
/* Ghidra symbol: FUN_012f4ad0 */


int FUN_012f4ad0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_2a0;
  undefined1 local_298 [648];
  
  local_2a0 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00417580(local_298,&DAT_00432b90);
  iVar2 = 0;
  FUN_00416cd0(&local_2a0,3,local_res8,&DAT_012f4bfc,local_res10);
  iVar1 = FUN_00441230(local_2a0,0x20,local_298);
  while (iVar1 == 0) {
    iVar1 = FUN_00441290(local_298);
    iVar2 = iVar2 + 1;
  }
  FUN_004412c0(local_298);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414560(&local_res8,2);
  return iVar2;
}

