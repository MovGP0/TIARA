/* Ghidra address: 005d03b0 */
/* Ghidra symbol: FUN_005d03b0 */


void FUN_005d03b0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_005d23a0(&local_10,param_1);
  FUN_005d0d30(local_10,0);
  cVar2 = FUN_005d2c80(local_10);
  if (cVar2 == '\0') {
    FUN_005d2440(local_20,local_10);
    cVar2 = FUN_005d2760(local_20[0]);
    if (cVar2 == '\0') {
      uVar1 = FUN_0044d710(&PTR_FUN_00434528,1,PTR_PTR_02005090);
      FUN_004134c0(uVar1);
    }
  }
  FUN_00440c30(local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

