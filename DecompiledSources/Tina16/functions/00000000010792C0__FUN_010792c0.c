/* Ghidra address: 010792c0 */
/* Ghidra symbol: FUN_010792c0 */


void FUN_010792c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xad0) = param_2;
  *(undefined4 *)(param_1 + 0x4c74) = *(undefined4 *)(param_2 + 0x104);
  uVar1 = FUN_010afd00(&DAT_010a9ec8,1);
  *(undefined8 *)(param_1 + 0xac8) = uVar1;
  FUN_010b0ed0(uVar1,*(undefined8 *)(param_2 + 0x110));
  return;
}

