/* Ghidra address: 0185a9d0 */
/* Ghidra symbol: FUN_0185a9d0 */


void FUN_0185a9d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00a3c420(param_2);
  }
  FUN_00a3c5f0(param_2,param_3);
  return;
}

