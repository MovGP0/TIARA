/* Ghidra address: 00854410 */
/* Ghidra symbol: FUN_00854410 */


undefined8 FUN_00854410(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_008544b0(&PTR_FUN_008516b8,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

