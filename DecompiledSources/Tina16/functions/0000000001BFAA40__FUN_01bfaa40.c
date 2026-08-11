/* Ghidra address: 01bfaa40 */
/* Ghidra symbol: FUN_01bfaa40 */


undefined8 FUN_01bfaa40(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01bfd960(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_01bfd960(param_1);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
  return uVar2;
}

