/* Ghidra address: 00a0d720 */
/* Ghidra symbol: FUN_00a0d720 */


void FUN_00a0d720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x00a0d72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}

