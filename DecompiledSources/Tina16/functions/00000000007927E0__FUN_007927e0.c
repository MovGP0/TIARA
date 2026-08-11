/* Ghidra address: 007927e0 */
/* Ghidra symbol: FUN_007927e0 */


undefined8 FUN_007927e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00792ae0(&PTR_FUN_0076aff8,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

