/* Ghidra address: 01891eb0 */
/* Ghidra symbol: FUN_01891eb0 */


void FUN_01891eb0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x5a1) != param_2) {
    *(char *)(param_1 + 0x5a1) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x4f8),0xcf,(longlong)param_2,0);
    }
  }
  return;
}

