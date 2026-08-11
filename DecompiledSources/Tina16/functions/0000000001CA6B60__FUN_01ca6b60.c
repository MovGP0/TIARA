/* Ghidra address: 01ca6b60 */
/* Ghidra symbol: FUN_01ca6b60 */


undefined8 FUN_01ca6b60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01ca6e60(&LAB_01c9e5a0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

