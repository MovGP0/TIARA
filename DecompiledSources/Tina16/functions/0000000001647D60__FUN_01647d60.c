/* Ghidra address: 01647d60 */
/* Ghidra symbol: FUN_01647d60 */


undefined8 FUN_01647d60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_01647b10(param_1,local_res10[0],0);
  if (iVar1 == -1) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8);
  }
  FUN_00414480(local_res10);
  return local_10;
}

