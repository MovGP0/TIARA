/* Ghidra address: 00c53190 */
/* Ghidra symbol: FUN_00c53190 */


void FUN_00c53190(undefined8 param_1,longlong *param_2)

{
  FUN_00c531c0(param_1,param_2);
  *(undefined4 *)(param_2 + 2) = 0;
  (**(code **)(*param_2 + 0x28))(param_2,0);
  return;
}

