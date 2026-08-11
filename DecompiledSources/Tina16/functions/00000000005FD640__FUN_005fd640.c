/* Ghidra address: 005fd640 */
/* Ghidra symbol: FUN_005fd640 */


void FUN_005fd640(longlong *param_1,char param_2)

{
  if ((char)param_1[5] != param_2) {
    *(char *)(param_1 + 5) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

