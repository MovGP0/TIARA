/* Ghidra address: 0067fce0 */
/* Ghidra symbol: FUN_0067fce0 */


void FUN_0067fce0(longlong *param_1,char param_2)

{
  if ((char)param_1[100] != param_2) {
    *(char *)(param_1 + 100) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

