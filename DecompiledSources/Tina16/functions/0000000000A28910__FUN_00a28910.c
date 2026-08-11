/* Ghidra address: 00a28910 */
/* Ghidra symbol: FUN_00a28910 */


void FUN_00a28910(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int local_2c [3];
  
  *param_2 = 0;
  *param_3 = 0;
  local_2c[0] = 1;
  cVar1 = FUN_00a288a0(param_1,local_2c);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_3,param_1);
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_2,param_1,1,local_2c[0] + -1);
    FUN_00416dc0(param_3,param_1,local_2c[0] + 1,0x7fffffff);
  }
  return;
}

