/* Ghidra address: 016ea170 */
/* Ghidra symbol: FUN_016ea170 */


void FUN_016ea170(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if ((*(longlong *)(param_2 + 0x60) != 0) && (*(longlong *)(param_2 + 0x68) != 0)) {
    FUN_00409a70(*(undefined8 *)(param_2 + 0x68),*(longlong *)(param_2 + 0x60),
                 *(undefined2 *)(param_2 + 0x58));
  }
  return;
}

