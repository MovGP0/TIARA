/* Ghidra address: 01969570 */
/* Ghidra symbol: FUN_01969570 */


void FUN_01969570(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00414ad0(param_1 + 0x260);
  uVar1 = FUN_01953bb0(param_1,*(undefined8 *)(param_1 + 600),*(undefined8 *)(param_1 + 0x260));
  *(undefined8 *)(param_1 + 600) = uVar1;
  return;
}

