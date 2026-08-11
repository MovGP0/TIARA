/* Ghidra address: 0113dc30 */
/* Ghidra symbol: FUN_0113dc30 */


void FUN_0113dc30(longlong param_1,undefined8 param_2,short *param_3)

{
  if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x328) == '\0') {
    if (*param_3 == 0x26) {
      FUN_0113b880(param_1,param_1);
      *param_3 = 0;
    }
    else if (*param_3 == 0x28) {
      FUN_0113b340(param_1,param_1);
      *param_3 = 0;
    }
  }
  return;
}

