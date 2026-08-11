/* Ghidra address: 01cfd3d0 */
/* Ghidra symbol: FUN_01cfd3d0 */


void FUN_01cfd3d0(longlong param_1,undefined8 param_2)

{
  undefined2 local_29 [12];
  undefined8 local_10;
  
  FUN_00417580(local_29,&DAT_01d36af8);
  local_29[0] = *(undefined2 *)(param_1 + 0xba);
  local_10 = param_2;
  FUN_01d39cf0(local_29);
  FUN_00417740(local_29,&DAT_01d36af8);
  return;
}

