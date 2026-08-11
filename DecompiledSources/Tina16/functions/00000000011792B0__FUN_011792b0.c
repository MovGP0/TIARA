/* Ghidra address: 011792b0 */
/* Ghidra symbol: FUN_011792b0 */


void FUN_011792b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0xa8))(*(longlong **)(param_1 + 0x7e0));
  if (cVar1 != '\0') {
    FUN_0064e030(*(undefined8 *)(param_1 + 0x7b8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + 0xd0));
  }
  return;
}

