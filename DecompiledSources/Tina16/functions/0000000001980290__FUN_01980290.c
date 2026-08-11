/* Ghidra address: 01980290 */
/* Ghidra symbol: FUN_01980290 */


void FUN_01980290(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_004b1060(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_019466e0);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}

