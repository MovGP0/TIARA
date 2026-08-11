/* Ghidra address: 01b12a50 */
/* Ghidra symbol: FUN_01b12a50 */


void FUN_01b12a50(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00f543c0(&LAB_00f54a40,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_01b12a30;
  }
  FUN_0041b800(&local_10);
  return;
}

