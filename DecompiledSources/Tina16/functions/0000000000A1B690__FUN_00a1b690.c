/* Ghidra address: 00a1b690 */
/* Ghidra symbol: FUN_00a1b690 */


void FUN_00a1b690(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (param_2 == 0xfe) {
    *(undefined8 *)(param_1[0x49] + 0x28) = param_3;
    return;
  }
  if (param_2 - 0xe0U < 0x10) {
    *(undefined8 *)(param_1[0x49] + 0x30 + (longlong)(int)(param_2 - 0xe0U) * 8) = param_3;
    return;
  }
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 5) = 0x44;
  *(int *)((longlong)puVar1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00a1b6c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}

