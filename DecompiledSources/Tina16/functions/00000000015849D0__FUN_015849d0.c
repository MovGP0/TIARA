/* Ghidra address: 015849d0 */
/* Ghidra symbol: FUN_015849d0 */


undefined8 FUN_015849d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01584cd0(&PTR_FUN_01578ef8,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

