/* Ghidra address: 0055cf00 */
/* Ghidra symbol: FUN_0055cf00 */


void FUN_0055cf00(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0056b500(&LAB_005762e0,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0055cee0;
  FUN_0041b800(&local_10);
  return;
}

