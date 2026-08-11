/* Ghidra address: 01533ae0 */
/* Ghidra symbol: FUN_01533ae0 */


void FUN_01533ae0(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,0);
  cVar1 = FUN_014f6590(*(undefined8 *)(param_1 + 0x1c28),0,0,0);
  if (cVar1 == '\0') {
    FUN_013d8d70(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),PTR_DAT_02004010[0x3ba],1)
    ;
  }
  FUN_0152fd80(param_1);
  return;
}

