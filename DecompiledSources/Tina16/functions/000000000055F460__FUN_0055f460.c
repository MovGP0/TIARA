/* Ghidra address: 0055f460 */
/* Ghidra symbol: FUN_0055f460 */


undefined8 FUN_0055f460(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_0055f760(&PTR_FUN_00532728,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

