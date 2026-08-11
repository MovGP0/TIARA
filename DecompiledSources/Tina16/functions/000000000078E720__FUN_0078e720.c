/* Ghidra address: 0078e720 */
/* Ghidra symbol: FUN_0078e720 */


undefined8 FUN_0078e720(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_0078e7c0(&PTR_FUN_00765798,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

