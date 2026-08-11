/* Ghidra address: 01571860 */
/* Ghidra symbol: FUN_01571860 */


void FUN_01571860(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  FUN_00416ba0(param_1 + 0x10,0,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

