/* Ghidra address: 01533320 */
/* Ghidra symbol: FUN_01533320 */


void FUN_01533320(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,2);
  cVar1 = FUN_01394040(2,*(undefined8 *)(param_1 + 0x1c28),0,0,0,0,0,0,0,0,0x1c7,0,0);
  if (cVar1 == '\0') {
    FUN_013d4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),
                 *(undefined2 *)(PTR_DAT_02004010 + 0x39e),0,0,1);
  }
  FUN_0152fd80(param_1);
  return;
}

