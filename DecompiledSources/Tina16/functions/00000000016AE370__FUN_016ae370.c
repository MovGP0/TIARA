/* Ghidra address: 016ae370 */
/* Ghidra symbol: FUN_016ae370 */


void FUN_016ae370(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016ae1e0(param_1,1,&local_10);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
            (*(longlong **)(param_1 + 0x18),local_res10[0],local_10);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_00414480(local_res10);
  return;
}

