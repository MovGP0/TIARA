/* Ghidra address: 01ac5c80 */
/* Ghidra symbol: FUN_01ac5c80 */


void FUN_01ac5c80(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064cf60(param_1,0x20a);
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  uVar1 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(param_1 + 0x770) = uVar1;
  *(undefined *)(param_1 + 0x760) = *PTR_DAT_02005310;
  *PTR_DAT_02005310 = 9;
  return;
}

