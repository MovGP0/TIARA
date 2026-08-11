/* Ghidra address: 00bbf910 */
/* Ghidra symbol: FUN_00bbf910 */


int FUN_00bbf910(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_34 = -1;
  iVar2 = FUN_00bbf6b0();
  iVar5 = 0;
  iVar1 = local_34;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_00bbf9f0(param_1,iVar5);
      (**(code **)(lVar4 + 0xf0))(lVar4,local_30);
      iVar3 = FUN_00416db0(local_30[0],local_res10[0]);
      iVar1 = iVar5;
      if (iVar3 == 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_34;
    } while (iVar2 != 0);
  }
  local_34 = iVar1;
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_34;
}

