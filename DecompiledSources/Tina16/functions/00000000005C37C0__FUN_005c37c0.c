/* Ghidra address: 005c37c0 */
/* Ghidra symbol: FUN_005c37c0 */


undefined8 FUN_005c37c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_005c3ac0(&PTR_FUN_005bda80,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

