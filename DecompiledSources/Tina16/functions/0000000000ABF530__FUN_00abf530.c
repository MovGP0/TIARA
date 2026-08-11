/* Ghidra address: 00abf530 */
/* Ghidra symbol: FUN_00abf530 */


undefined4 FUN_00abf530(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000050;
  int *in_stack_00000058;
  undefined1 auStack_28 [32];
  
  *(int *)(param_1 + 0x30) = *in_stack_00000058;
  *in_stack_00000050 = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 990000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_00abf340(auStack_28);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0x34) = *in_stack_00000058 - *(int *)(param_1 + 0x30);
  return *(undefined4 *)(param_1 + 0x58);
}

