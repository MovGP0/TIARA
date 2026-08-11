/* Ghidra address: 00659830 */
/* Ghidra symbol: FUN_00659830 */


void FUN_00659830(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00659750(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  FUN_0065de70(param_1,*(undefined2 *)(param_2 + 8));
  return;
}

