/* Ghidra address: 010b2cf0 */
/* Ghidra symbol: FUN_010b2cf0 */


void FUN_010b2cf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_010ae9e0(&DAT_010a8e80,1);
  FUN_00414ad0(lVar1 + 0x30,local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_00414480(local_res10);
  return;
}

