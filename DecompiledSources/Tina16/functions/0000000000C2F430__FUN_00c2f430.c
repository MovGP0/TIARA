/* Ghidra address: 00c2f430 */
/* Ghidra symbol: FUN_00c2f430 */


void FUN_00c2f430(longlong *param_1,longlong *param_2)

{
  FUN_00c2e030(param_1,param_2);
  FUN_00c1a380(param_2,0xb);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 3,0xb);
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  return;
}

