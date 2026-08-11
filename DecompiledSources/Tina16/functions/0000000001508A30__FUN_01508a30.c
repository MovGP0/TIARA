/* Ghidra address: 01508a30 */
/* Ghidra symbol: FUN_01508a30 */


void FUN_01508a30(longlong *param_1,undefined8 param_2)

{
  undefined2 local_1a;
  
  local_1a = 0xd;
  FUN_0064de00(param_1[0x178],0);
  (**(code **)(*param_1 + 0x5d8))(param_1,param_2,&local_1a);
  return;
}

