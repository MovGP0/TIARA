/* Ghidra address: 01512650 */
/* Ghidra symbol: FUN_01512650 */


void FUN_01512650(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0xd68),&local_10);
  FUN_00414ad0(*(longlong *)(param_1 + 0xed8) + 0x30,local_10);
  FUN_01512f00(param_1,1);
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,1);
  FUN_00414480(&local_10);
  return;
}

