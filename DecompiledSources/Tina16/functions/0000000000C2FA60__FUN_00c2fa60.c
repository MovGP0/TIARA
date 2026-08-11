/* Ghidra address: 00c2fa60 */
/* Ghidra symbol: FUN_00c2fa60 */


void FUN_00c2fa60(longlong param_1,longlong *param_2)

{
  FUN_00c1a380(param_2,3);
  FUN_00c1a380(param_2,1);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x28,2);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00c1a380(param_2,5);
    FUN_00c1a380(param_2,2);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x2c,4);
  }
  FUN_00c1a380(param_2,0);
  return;
}

