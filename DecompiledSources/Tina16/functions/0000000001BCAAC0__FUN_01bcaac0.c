/* Ghidra address: 01bcaac0 */
/* Ghidra symbol: FUN_01bcaac0 */


void FUN_01bcaac0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_00de0000(param_1,param_2);
  *(undefined8 *)(param_1 + 0x5a8) = param_2;
  cVar1 = FUN_01bcaba0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x590) + 0x130))
              (*(longlong **)(param_1 + 0x590),*(undefined8 *)(param_1 + 0x5a8));
    (**(code **)(**(longlong **)(param_1 + 0x598) + 0x130))
              (*(longlong **)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x5a8));
    (**(code **)(**(longlong **)(param_1 + 0x5a0) + 0x130))
              (*(longlong **)(param_1 + 0x5a0),*(undefined8 *)(param_1 + 0x5a8));
  }
  return;
}

