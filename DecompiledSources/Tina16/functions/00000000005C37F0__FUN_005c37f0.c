/* Ghidra address: 005c37f0 */
/* Ghidra symbol: FUN_005c37f0 */


undefined8 FUN_005c37f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_005c4070(&PTR_FUN_005be590,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

