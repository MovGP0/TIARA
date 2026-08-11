/* Ghidra address: 017e25e0 */
/* Ghidra symbol: FUN_017e25e0 */


void FUN_017e25e0(longlong param_1,undefined8 param_2)

{
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0040e840(local_118,*(undefined2 *)(param_1 + 0x564));
  FUN_004169a0(&local_10,local_118);
  FUN_00416ba0(param_2,L"label",local_10);
  *(short *)(param_1 + 0x564) = *(short *)(param_1 + 0x564) + 1;
  FUN_00414480(&local_10);
  return;
}

