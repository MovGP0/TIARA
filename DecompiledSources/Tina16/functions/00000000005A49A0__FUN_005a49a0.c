/* Ghidra address: 005a49a0 */
/* Ghidra symbol: FUN_005a49a0 */


undefined8 FUN_005a49a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_005a4ca0(&PTR_FUN_0059f4d0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

