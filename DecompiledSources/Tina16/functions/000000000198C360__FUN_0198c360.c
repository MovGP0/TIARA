/* Ghidra address: 0198c360 */
/* Ghidra symbol: FUN_0198c360 */


void FUN_0198c360(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x60));
    (**(code **)(*param_2 + 0xe8))
              (param_2,uVar1,(*(int *)((longlong)param_2 + 0xc) - *(int *)(param_1 + 0x28)) + 8,
               ((int)param_2[2] - *(int *)(param_1 + 0x24)) + 8);
  }
  return;
}

