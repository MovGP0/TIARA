/* Ghidra address: 006807e0 */
/* Ghidra symbol: FUN_006807e0 */


void FUN_006807e0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x49c) != param_2) {
    *(char *)(param_1 + 0x49c) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0xcf,(longlong)param_2,0);
    }
  }
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_1 + 0x49c);
  return;
}

