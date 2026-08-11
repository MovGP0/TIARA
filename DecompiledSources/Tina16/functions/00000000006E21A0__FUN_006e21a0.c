/* Ghidra address: 006e21a0 */
/* Ghidra symbol: FUN_006e21a0 */


void FUN_006e21a0(longlong *param_1,char param_2)

{
  if ((char)param_1[0x9b] != param_2) {
    *(char *)(param_1 + 0x9b) = param_2;
    FUN_006d3ef0(param_1,0x20,param_2 == '\0');
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

