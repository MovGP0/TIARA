/* Ghidra address: 0177aa70 */
/* Ghidra symbol: FUN_0177aa70 */


undefined8 FUN_0177aa70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_0177ade0(&PTR_FUN_01766f10,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

