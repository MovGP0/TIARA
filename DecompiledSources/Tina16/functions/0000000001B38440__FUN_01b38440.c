/* Ghidra address: 01b38440 */
/* Ghidra symbol: FUN_01b38440 */


int FUN_01b38440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  iVar4 = 0;
  bVar1 = 1;
  do {
    while( true ) {
      if (!(bool)(bVar1 & iVar4 < param_6)) {
        FUN_00414560(&local_res10,3);
        return iVar4;
      }
      puVar3 = (undefined8 *)FUN_004aeac0(param_1,iVar4);
      iVar2 = FUN_00416db0(local_res10,*puVar3);
      if (iVar2 == 0) break;
LAB_01b384d0:
      iVar4 = iVar4 + 1;
    }
    iVar2 = FUN_00416db0(local_res18,puVar3[1]);
    if (iVar2 != 0) goto LAB_01b384d0;
    iVar2 = FUN_00416db0(local_res20,puVar3[3]);
    if ((iVar2 != 0) || (param_5 == *(int *)(puVar3[9] + 0x18c))) goto LAB_01b384d0;
    bVar1 = 0;
  } while( true );
}

