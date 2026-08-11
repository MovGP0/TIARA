/* Ghidra address: 018af1c0 */
/* Ghidra symbol: FUN_018af1c0 */


void FUN_018af1c0(longlong param_1)

{
  char cVar1;
  
  FUN_018a9960(*(undefined8 *)(param_1 + 0x848),
               *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x31a));
  cVar1 = FUN_018a9930(*(undefined8 *)(param_1 + 0x848));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x848) + 600))(*(longlong **)(param_1 + 0x848));
  }
  return;
}

