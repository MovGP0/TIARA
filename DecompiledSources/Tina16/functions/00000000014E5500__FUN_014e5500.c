/* Ghidra address: 014e5500 */
/* Ghidra symbol: FUN_014e5500 */


void FUN_014e5500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
            (*(longlong **)(param_1 + 0xe88),local_res10[0],param_3);
  *(undefined1 *)(param_1 + 0xe90) = 1;
  FUN_00414480(local_res10);
  return;
}

