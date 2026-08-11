/* Ghidra address: 0137cd50 */
/* Ghidra symbol: FUN_0137cd50 */


void FUN_0137cd50(longlong *param_1)

{
  if ((((char)param_1[0x13] == '\x04') && (*(char *)((longlong)param_1 + 0x104) == '\0')) ||
     ((char)param_1[0x13] == '\b')) {
    (**(code **)(*param_1 + 400))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x198))(param_1);
  }
  return;
}

