/* Ghidra address: 004e34d0 */
/* Ghidra symbol: FUN_004e34d0 */


undefined8 FUN_004e34d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_004e37d0(&PTR_FUN_00491390,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

