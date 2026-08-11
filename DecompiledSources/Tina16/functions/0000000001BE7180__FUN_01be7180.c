/* Ghidra address: 01be7180 */
/* Ghidra symbol: FUN_01be7180 */


void FUN_01be7180(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x680) != param_2) {
    *(char *)(param_1 + 0x680) = param_2;
    FUN_00655b90();
  }
  return;
}

