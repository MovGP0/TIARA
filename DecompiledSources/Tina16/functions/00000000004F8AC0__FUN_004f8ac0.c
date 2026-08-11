/* Ghidra address: 004f8ac0 */
/* Ghidra symbol: FUN_004f8ac0 */


void FUN_004f8ac0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00520640(&LAB_0051b448,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_004f8aa0;
  }
  FUN_0041b800(&local_10);
  return;
}

