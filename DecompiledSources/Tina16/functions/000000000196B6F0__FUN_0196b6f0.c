/* Ghidra address: 0196b6f0 */
/* Ghidra symbol: FUN_0196b6f0 */


void FUN_0196b6f0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00414ad0(param_1 + 0x200);
  uVar1 = FUN_01953bb0(param_1,*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x200));
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}

