/* Ghidra address: 00835150 */
/* Ghidra symbol: FUN_00835150 */


undefined8 * FUN_00835150(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 == '\0') {
    FUN_0064dd90(param_1,param_2);
  }
  else {
    FUN_008350c0(param_1,&local_10);
    FUN_008369d0(param_1,param_2,local_10);
    if (*(char *)(param_1 + 0x4e8) != '\0') {
      FUN_00836980(param_1,&local_18,*param_2,0);
      FUN_00414ad0(param_2,local_18);
    }
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

