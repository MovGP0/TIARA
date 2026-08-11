/* Ghidra address: 01c070d0 */
/* Ghidra symbol: FUN_01c070d0 */


undefined8 FUN_01c070d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 800) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01bfd980(*(longlong *)(param_1 + 800));
  }
  return uVar1;
}

