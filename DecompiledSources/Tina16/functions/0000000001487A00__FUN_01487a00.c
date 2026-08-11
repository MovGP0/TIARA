/* Ghidra address: 01487a00 */
/* Ghidra symbol: FUN_01487a00 */


undefined8 FUN_01487a00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_01487f70(&PTR_FUN_014850e0,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

