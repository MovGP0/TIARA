/* Ghidra address: 00412340 */
/* Ghidra symbol: FUN_00412340 */


void FUN_00412340(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411b30(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x20) = param_2;
    *param_2 = param_2;
  }
  else {
    *param_2 = **(undefined8 **)(param_1 + 0x20);
    **(undefined8 **)(param_1 + 0x20) = param_2;
    *(undefined8 **)(param_1 + 0x20) = param_2;
  }
  FUN_00411b70(param_1 + 0x28);
  return;
}

