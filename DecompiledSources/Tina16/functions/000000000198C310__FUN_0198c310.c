/* Ghidra address: 0198c310 */
/* Ghidra symbol: FUN_0198c310 */


void FUN_0198c310(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x60));
    (**(code **)(*param_2 + 0xe8))
              (param_2,uVar1,*(int *)((longlong)param_2 + 0xc) - *(int *)(param_1 + 0x34),
               (int)param_2[2] - *(int *)(param_1 + 0x30));
  }
  return;
}

