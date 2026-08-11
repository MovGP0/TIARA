/* Ghidra address: 00af96d0 */
/* Ghidra symbol: FUN_00af96d0 */


void FUN_00af96d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x9c8) == 0) {
    uVar1 = FUN_00a7a070(&PTR_FUN_00a78ce8,1);
    *(undefined8 *)(param_1 + 0x9c8) = uVar1;
  }
  return;
}

