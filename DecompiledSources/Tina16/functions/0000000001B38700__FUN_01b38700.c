/* Ghidra address: 01b38700 */
/* Ghidra symbol: FUN_01b38700 */


undefined8 FUN_01b38700(undefined8 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 local_118 [264];
  longlong local_10;
  
  local_10 = 0;
  FUN_0040e780(local_118,param_2,0);
  FUN_004169a0(&local_10,local_118);
  iVar1 = 0;
  if (local_10 != 0) {
    iVar1 = *(int *)(local_10 + -4);
  }
  if (iVar1 == 1) {
    FUN_00416ba0(&local_10,&LAB_01b387c8,local_10);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

