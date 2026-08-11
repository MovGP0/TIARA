/* Ghidra address: 01171880 */
/* Ghidra symbol: FUN_01171880 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01171880(longlong param_1)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  DAT_0203d9b0 = FUN_00741ea0(*(undefined8 *)(*(longlong *)PTR_DAT_02003280 + 0x6b0));
  DAT_0203d970 = 0x50;
  DAT_0203a514 = 2;
  DAT_0203aeb0 = 0x3ff0000000000000;
  DAT_0203ae9c = 0x20;
  DAT_0203d9b8 = DAT_0203d9b0;
  iVar1 = FUN_01167b10(4);
  FUN_005fce30(*(undefined8 *)(param_1 + 0xb8),iVar1 + 4);
  FUN_0116d730(&DAT_011719f4);
  DAT_0203d950 = 0;
  FUN_01171800(DAT_0203d9b0);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x768),local_20);
  iVar1 = FUN_0043fc00(local_20[0]);
  _DAT_0203d988 = (double)iVar1;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
  *(undefined4 *)PTR_DAT_02005b20 = 0;
  (**(code **)(*DAT_0203d9a8 + 0x180))(DAT_0203d9a8);
  (**(code **)(*DAT_0203d9a8 + 0x198))(DAT_0203d9a8);
  FUN_00414480(local_20);
  return;
}

