/* Ghidra address: 004fc6a0 */
/* Ghidra symbol: FUN_004fc6a0 */


undefined8 FUN_004fc6a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                (longlong)*(int *)(param_1 + 0x10) * 8));
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

