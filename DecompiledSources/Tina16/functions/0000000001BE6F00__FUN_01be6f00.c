/* Ghidra address: 01be6f00 */
/* Ghidra symbol: FUN_01be6f00 */


void FUN_01be6f00(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064dbe0(param_1,0);
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    uVar1 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x640) = uVar1;
  }
  FUN_01be1bf0(param_1);
  return;
}

