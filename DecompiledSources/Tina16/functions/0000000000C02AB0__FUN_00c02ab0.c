/* Ghidra address: 00c02ab0 */
/* Ghidra symbol: FUN_00c02ab0 */


void FUN_00c02ab0(longlong param_1,longlong param_2)

{
  FUN_00c02800(param_1,*(undefined8 *)(param_2 + 0x4e8),*(undefined8 *)(param_2 + 0x550),
               *(undefined8 *)(param_2 + 0x558));
  *(longlong *)(param_1 + 0x850) = param_2;
  FUN_004d26c0(param_2,param_1);
  return;
}

