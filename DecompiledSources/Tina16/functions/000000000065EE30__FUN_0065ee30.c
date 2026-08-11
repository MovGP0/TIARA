/* Ghidra address: 0065ee30 */
/* Ghidra symbol: FUN_0065ee30 */


void FUN_0065ee30(longlong param_1)

{
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_0041b890(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x388),&LAB_0065eea8);
  (**(code **)(*local_10 + 0xb8))(local_10,0);
  FUN_0041b800(&local_10);
  return;
}

