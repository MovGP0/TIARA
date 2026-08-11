/* Ghidra address: 00c8fd40 */
/* Ghidra symbol: FUN_00c8fd40 */


void FUN_00c8fd40(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int local_2c [3];
  
  if (*(longlong *)(param_1 + 0x20) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))
              (*(longlong **)(param_1 + 0x48),*(longlong *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  bVar1 = *(longlong *)(param_1 + 0x20) != -1;
  *(bool *)(param_1 + 0x28) = bVar1;
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
              (*(longlong **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
    FUN_00c8fcd0(param_1,0xffff,0x1008,param_1 + 0x50);
    if (*(int *)(param_1 + 0x50) == 1) {
      FUN_00c8fcd0(param_1,6,1,local_2c);
      *(bool *)(param_1 + 0x61) = local_2c[0] == 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

