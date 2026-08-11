/* Ghidra address: 01c9bf30 */
/* Ghidra symbol: FUN_01c9bf30 */


void FUN_01c9bf30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_020015a8 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_013aa418,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020015a8 = uVar1;
    uVar1 = FUN_01c8a450(param_1);
    FUN_013ab910(*(undefined8 *)PTR_DAT_020015a8,uVar1,*(undefined8 *)(param_1 + 0x27a8));
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_020015a8);
  FUN_0064e1d0(*(undefined8 *)PTR_DAT_020015a8);
  return;
}

