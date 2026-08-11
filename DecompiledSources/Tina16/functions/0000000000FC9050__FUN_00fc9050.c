/* Ghidra address: 00fc9050 */
/* Ghidra symbol: FUN_00fc9050 */


void FUN_00fc9050(longlong param_1)

{
  int iVar1;
  
  *(double *)(param_1 + 0x740) = 1.0 / *(double *)(param_1 + 0xbe0);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),*(undefined4 *)(param_1 + 0xb44));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),0);
  }
  iVar1 = *(int *)(param_1 + 0xb44);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x724) = 0x20;
    *(undefined4 *)(param_1 + 0x728) = 0x100;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x724) = 1;
    *(undefined4 *)(param_1 + 0x728) = 0x10000;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x724) = 1;
    *(undefined4 *)(param_1 + 0x728) = 0x100;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x724) = 1;
    *(undefined4 *)(param_1 + 0x728) = 0x100;
  }
  FUN_00fc9140(param_1);
  return;
}

