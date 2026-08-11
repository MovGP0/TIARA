/* Ghidra address: 00f0c750 */
/* Ghidra symbol: FUN_00f0c750 */


void FUN_00f0c750(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064cf60(param_1,0x20a);
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x798) = uVar1;
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x7a0) = uVar1;
  *(undefined *)(param_1 + 0x790) = *PTR_DAT_02005310;
  *PTR_DAT_02005310 = 9;
  return;
}

