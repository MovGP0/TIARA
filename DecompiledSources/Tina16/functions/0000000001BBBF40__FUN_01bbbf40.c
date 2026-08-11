/* Ghidra address: 01bbbf40 */
/* Ghidra symbol: FUN_01bbbf40 */


undefined8 FUN_01bbbf40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_01bbb610(&DAT_01bb86b8,1,local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
  FUN_00414480(local_res10);
  return uVar1;
}

