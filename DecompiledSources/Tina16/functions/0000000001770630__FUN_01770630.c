/* Ghidra address: 01770630 */
/* Ghidra symbol: FUN_01770630 */


void FUN_01770630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x80))
            (*(longlong **)(param_1 + 0xf0),local_res10[0],param_3);
  *(undefined1 *)(param_1 + 0x116) = 1;
  *(undefined1 *)(param_1 + 0x111) = 0;
  FUN_00414480(local_res10);
  return;
}

