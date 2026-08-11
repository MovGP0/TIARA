/* Ghidra address: 005e1680 */
/* Ghidra symbol: FUN_005e1680 */


undefined8 FUN_005e1680(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_005e19f0(&PTR_FUN_005d8b90,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

