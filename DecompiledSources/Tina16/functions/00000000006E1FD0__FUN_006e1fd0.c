/* Ghidra address: 006e1fd0 */
/* Ghidra symbol: FUN_006e1fd0 */


void FUN_006e1fd0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x548) != param_2) {
    *(char *)(param_1 + 0x548) = param_2;
    FUN_006d3ef0(param_1,0x80,param_2 == '\0');
  }
  return;
}

