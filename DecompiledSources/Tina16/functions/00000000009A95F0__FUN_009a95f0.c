/* Ghidra address: 009a95f0 */
/* Ghidra symbol: FUN_009a95f0 */


undefined8 FUN_009a95f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_009a9bd0(&PTR_FUN_009442f0,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

