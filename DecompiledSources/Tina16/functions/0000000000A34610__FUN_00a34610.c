/* Ghidra address: 00a34610 */
/* Ghidra symbol: FUN_00a34610 */


void FUN_00a34610(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  FUN_00a33eb0(param_1,7);
  uVar2 = FUN_00a32f90(*(undefined2 *)(param_1 + 0x28));
  puVar1 = *(undefined2 **)(param_1 + 8);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 3) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 4) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 5) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 6) = *(undefined1 *)(param_1 + 0x2e);
  FUN_00a34420(param_1,param_2);
  return;
}

