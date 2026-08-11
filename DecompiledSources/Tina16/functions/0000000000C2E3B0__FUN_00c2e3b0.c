/* Ghidra address: 00c2e3b0 */
/* Ghidra symbol: FUN_00c2e3b0 */


void FUN_00c2e3b0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_00c29d60(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00c233f0(uVar1,param_2);
  *(undefined1 *)(param_1 + 0x1c) = uVar2;
  return;
}

