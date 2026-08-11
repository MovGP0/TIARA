/* Ghidra address: 01533230 */
/* Ghidra symbol: FUN_01533230 */


void FUN_01533230(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,0);
  cVar1 = FUN_01328250(*(undefined8 *)(param_1 + 0x1c28),0,0,0);
  if (cVar1 == '\0') {
    FUN_013d45f0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),1);
  }
  FUN_0152fd80(param_1);
  return;
}

