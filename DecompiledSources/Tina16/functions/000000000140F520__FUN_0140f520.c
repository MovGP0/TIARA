/* Ghidra address: 0140f520 */
/* Ghidra symbol: FUN_0140f520 */


void FUN_0140f520(longlong param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  FUN_0040d200(&local_30,0x18,0);
  local_30 = 0;
  local_2c = 0;
  local_28 = *(ushort *)(param_1 + 0x788) - 1;
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0140b070(0,0,&local_30,*(undefined8 *)(param_1 + 0x790),*(undefined2 *)(param_1 + 0x78a),
               *(ushort *)(param_1 + 0x788) - 1,*(undefined2 *)(param_1 + 0x7ee),0);
  FUN_0140e330(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  return;
}

