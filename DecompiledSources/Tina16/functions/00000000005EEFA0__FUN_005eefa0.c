/* Ghidra address: 005eefa0 */
/* Ghidra symbol: FUN_005eefa0 */


undefined8 FUN_005eefa0(undefined8 param_1,short param_2)

{
  char cVar1;
  int local_28 [2];
  undefined1 local_20;
  
  cVar1 = FUN_005ef040((int)param_2,param_1);
  if (cVar1 == '\0') {
    local_20 = 0;
    local_28[0] = (int)param_2;
    FUN_00442fd0(param_1,&LAB_005eeff4,local_28,0);
  }
  return param_1;
}

