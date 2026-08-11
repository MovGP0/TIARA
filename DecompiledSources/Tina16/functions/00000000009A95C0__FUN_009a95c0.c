/* Ghidra address: 009a95c0 */
/* Ghidra symbol: FUN_009a95c0 */


undefined8 FUN_009a95c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_009a9660(&PTR_FUN_00943700,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

