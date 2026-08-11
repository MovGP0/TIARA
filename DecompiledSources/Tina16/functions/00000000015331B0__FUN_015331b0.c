/* Ghidra address: 015331b0 */
/* Ghidra symbol: FUN_015331b0 */


void FUN_015331b0(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,2);
  cVar1 = FUN_01324990(2,*(undefined8 *)(param_1 + 0x1c28),0,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_013d3ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),1);
  }
  FUN_0152fd80(param_1);
  return;
}

