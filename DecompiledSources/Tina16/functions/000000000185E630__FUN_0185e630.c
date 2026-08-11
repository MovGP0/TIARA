/* Ghidra address: 0185e630 */
/* Ghidra symbol: FUN_0185e630 */


void FUN_0185e630(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *puVar1 = 0x38464947;
  *(undefined2 *)(puVar1 + 1) = 0x6139;
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 1) {
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x30),0);
    if (*(longlong *)(lVar2 + 0x28) == 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x20);
      *puVar1 = 0x38464947;
      *(undefined2 *)(puVar1 + 1) = 0x6137;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),6);
  return;
}

