/* Ghidra address: 00a7a700 */
/* Ghidra symbol: FUN_00a7a700 */


undefined8 FUN_00a7a700(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = FUN_00a79f50(&PTR_FUN_00a79c70,1,param_1);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0xa8);
}

