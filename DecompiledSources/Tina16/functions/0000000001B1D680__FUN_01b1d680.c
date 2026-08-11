/* Ghidra address: 01b1d680 */
/* Ghidra symbol: FUN_01b1d680 */


undefined8 FUN_01b1d680(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_004170c0(&DAT_01b1d734,local_res10[0],1);
  bVar3 = cVar1 + 1;
  bVar2 = FUN_004170c0(&LAB_01b1d744,local_res10[0],1);
  if ((bVar3 == 0) || (bVar2 == 0)) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00416dc0(param_1,local_res10[0],(uint)bVar3,(uint)bVar2 - (uint)bVar3);
  }
  FUN_00414480(local_res10);
  return param_1;
}

