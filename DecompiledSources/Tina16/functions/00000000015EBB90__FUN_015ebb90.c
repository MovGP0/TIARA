/* Ghidra address: 015ebb90 */
/* Ghidra symbol: FUN_015ebb90 */


void FUN_015ebb90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_007fc180(&PTR_FUN_012e9a18,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_020026a0 = uVar1;
  FUN_012e9e60(*(undefined8 *)PTR_DAT_020026a0,L"Compile in progress...");
  FUN_008059a0(*(undefined8 *)PTR_DAT_020026a0);
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}

