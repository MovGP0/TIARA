/* Ghidra address: 007970d0 */
/* Ghidra symbol: FUN_007970d0 */


undefined8 FUN_007970d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00797670(&PTR_FUN_00770f68,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

