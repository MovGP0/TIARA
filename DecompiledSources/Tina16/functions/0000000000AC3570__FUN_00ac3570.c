/* Ghidra address: 00ac3570 */
/* Ghidra symbol: FUN_00ac3570 */


int FUN_00ac3570(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 in_stack_00000050;
  int *in_stack_00000058;
  undefined4 *in_stack_00000060;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a93460(param_1,in_stack_00000050,param_4);
  }
  *(undefined4 *)(param_1 + 0x68) = *in_stack_00000060;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *in_stack_00000058 = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar1 = param_4 + iVar1;
  *(int *)(param_1 + 0x74) = iVar1;
  *(int *)(param_1 + 0x7c) = iVar1;
  *(int *)(param_1 + 0x80) = iVar1 + *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x78);
  *(int *)(param_1 + 0x90) = param_3;
  *(int *)(param_1 + 0x98) = param_3 + *in_stack_00000058;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x84);
  return *(int *)(param_1 + 0x80) - param_4;
}

