/* Ghidra address: 0138c740 */
/* Ghidra symbol: FUN_0138c740 */


void FUN_0138c740(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc70) + 0xf0))(*(longlong **)(param_1 + 0xc70));
  if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xc70) + 0x328) == '\0')) {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x40));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40));
  }
  return;
}

