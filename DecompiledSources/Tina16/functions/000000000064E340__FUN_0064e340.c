/* Ghidra address: 0064e340 */
/* Ghidra symbol: FUN_0064e340 */


void FUN_0064e340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x2b0) = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
  }
  if (*(char *)(param_1 + 0x2b8) != '\0') {
    lVar1 = FUN_0064fd00(param_1);
    if (*(longlong *)(param_1 + 0x2b0) != lVar1) {
      *(undefined1 *)(param_1 + 0x2b8) = 0;
    }
  }
  return;
}

