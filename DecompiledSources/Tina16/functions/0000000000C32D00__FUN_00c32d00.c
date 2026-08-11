/* Ghidra address: 00c32d00 */
/* Ghidra symbol: FUN_00c32d00 */


void FUN_00c32d00(longlong *param_1)

{
  longlong lVar1;
  
  FUN_00c35490(param_1);
  FUN_00c34e10(param_1);
  FUN_00c1aa50(param_1[10]);
  FUN_00c22da0(*(undefined8 *)(param_1[0xb] + 0x18));
  lVar1 = param_1[0xb];
  *(undefined2 *)(lVar1 + 0x12) = 0;
  *(undefined2 *)(lVar1 + 0x10) = 0;
  FUN_00c24280(lVar1);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  return;
}

