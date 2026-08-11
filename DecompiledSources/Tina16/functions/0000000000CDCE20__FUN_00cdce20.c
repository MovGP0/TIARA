/* Ghidra address: 00cdce20 */
/* Ghidra symbol: FUN_00cdce20 */


void FUN_00cdce20(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00882a80(param_1);
  FUN_00877e10(&local_10,PTR_u_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_01eb01a0,0);
  FUN_004194b0(param_1 + 0x78,local_10,&DAT_0086e978);
  *(undefined2 *)(param_1 + 0x80) = 0x3d;
  FUN_00419430(&local_10,&DAT_0086e978);
  return;
}

