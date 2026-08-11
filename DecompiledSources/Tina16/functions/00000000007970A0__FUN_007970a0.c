/* Ghidra address: 007970a0 */
/* Ghidra symbol: FUN_007970a0 */


undefined8 FUN_007970a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00797140(&PTR_FUN_007704b0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

