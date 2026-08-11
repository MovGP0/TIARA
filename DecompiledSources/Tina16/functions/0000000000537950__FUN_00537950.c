/* Ghidra address: 00537950 */
/* Ghidra symbol: FUN_00537950 */


undefined8 FUN_00537950(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_005360d0(param_1);
  if ((cVar1 == '\0') && (*(char *)*param_1 == '\x0f')) {
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
  }
  else {
    FUN_005603d0(param_1,param_2,1);
  }
  return param_2;
}

