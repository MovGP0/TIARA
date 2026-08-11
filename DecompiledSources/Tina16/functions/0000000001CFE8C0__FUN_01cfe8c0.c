/* Ghidra address: 01cfe8c0 */
/* Ghidra symbol: FUN_01cfe8c0 */


void FUN_01cfe8c0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x210),*(int *)(param_1 + 0x20c) + 1,param_2 + 1,
                       param_1 + 0x21f,param_1 + 0x21e,param_1 + 0x21d);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  if (*(char *)(param_1 + 0x21e) == '\x02') {
    **(undefined2 **)(param_1 + 0x200) = *(undefined2 *)(param_1 + 0x1fe);
  }
  else if (*(char *)(param_1 + 0x21e) == '\x03') {
    **(undefined8 **)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1f0);
  }
  return;
}

