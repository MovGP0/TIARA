/* Ghidra address: 01aa1820 */
/* Ghidra symbol: FUN_01aa1820 */


undefined8 FUN_01aa1820(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if (0 < param_3) {
    pcVar1 = (char *)local_res8;
    pcVar2 = (char *)local_res10;
    do {
      if (*pcVar1 != *pcVar2) {
        return 0;
      }
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}

