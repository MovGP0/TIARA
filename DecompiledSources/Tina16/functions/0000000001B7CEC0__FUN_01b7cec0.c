/* Ghidra address: 01b7cec0 */
/* Ghidra symbol: FUN_01b7cec0 */


void FUN_01b7cec0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
  *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = uVar2;
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  *(undefined8 *)(PTR_DAT_02004010 + 0x7e8) = uVar2;
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x708));
  *(undefined8 *)(PTR_DAT_02004010 + 0x7f0) = uVar2;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  *PTR_DAT_02002198 = uVar1;
  PTR_DAT_02004010[0x2ad] =
       (char)((longlong)(*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4a8) + 1) % 3);
  FUN_01c88850(*(undefined8 *)PTR_DAT_02004e40);
  return;
}

