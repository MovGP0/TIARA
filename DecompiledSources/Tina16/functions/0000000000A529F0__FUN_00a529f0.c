/* Ghidra address: 00a529f0 */
/* Ghidra symbol: FUN_00a529f0 */


void FUN_00a529f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    FUN_00461840(param_1 + 0x78 + (ulonglong)bVar1 * 0x18,param_2 + 0x78 + (ulonglong)bVar1 * 0x18);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x43);
  FUN_00a53800(param_1,*(undefined4 *)(param_2 + 0x70));
  FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_00414ad0(param_1 + 0x38,L"default");
  return;
}

