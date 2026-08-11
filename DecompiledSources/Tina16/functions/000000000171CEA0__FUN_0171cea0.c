/* Ghidra address: 0171cea0 */
/* Ghidra symbol: FUN_0171cea0 */


undefined8 FUN_0171cea0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_0171d1a0(&PTR_FUN_0170e9b0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

