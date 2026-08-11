/* Ghidra address: 01530e60 */
/* Ghidra symbol: FUN_01530e60 */


void FUN_01530e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x1c50) + 0x80))
            (*(longlong **)(param_1 + 0x1c50),local_res10[0],param_3);
  *(undefined1 *)(param_1 + 0x1c4a) = 1;
  *(undefined1 *)(param_1 + 0x1c49) = 1;
  FUN_00414480(local_res10);
  return;
}

