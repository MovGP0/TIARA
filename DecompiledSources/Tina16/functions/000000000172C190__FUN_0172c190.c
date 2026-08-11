/* Ghidra address: 0172c190 */
/* Ghidra symbol: FUN_0172c190 */


void FUN_0172c190(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 local_4d [27];
  undefined1 local_32 [21];
  byte local_1d;
  
  puVar1 = PTR_DAT_02002ce0;
  *PTR_DAT_02002ce0 = 0;
  lVar2 = FUN_0172bb90(&PTR_FUN_01729070,CONCAT71((int7)((ulonglong)puVar1 >> 8),1) & 0xffffffff,
                       param_2,param_3,*(undefined8 *)PTR_DAT_02001f18,0);
  FUN_0172a910(*(undefined8 *)(lVar2 + 8),*(int *)(lVar2 + 0x14) + 2);
  FUN_0172a920(*(undefined8 *)(lVar2 + 8),local_32,0x1a);
  FUN_0172a910(*(undefined8 *)(lVar2 + 8),*(int *)(lVar2 + 0x10) + (uint)local_1d * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(lVar2 + 8),local_4d,0x1b);
  FUN_00415020(param_1,local_32,0x14);
  FUN_00415020(param_1 + 0x15,local_4d,0x10);
  FUN_00410f20(lVar2);
  return;
}

