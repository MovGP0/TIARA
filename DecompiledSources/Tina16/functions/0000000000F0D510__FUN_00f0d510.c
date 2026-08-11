/* Ghidra address: 00f0d510 */
/* Ghidra symbol: FUN_00f0d510 */


void FUN_00f0d510(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064cf60(param_1,0x20a);
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x708) = uVar1;
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x710) = uVar1;
  return;
}

