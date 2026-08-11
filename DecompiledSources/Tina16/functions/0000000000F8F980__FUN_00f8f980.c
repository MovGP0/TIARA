/* Ghidra address: 00f8f980 */
/* Ghidra symbol: FUN_00f8f980 */


void FUN_00f8f980(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_007fc180(&PTR_FUN_00f861d8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001f68 = uVar3;
  FUN_00f86770(*(undefined8 *)PTR_DAT_02001f68,*(undefined4 *)(param_1 + 0x33fc));
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02001f68 + 0x2d0))(*(longlong **)PTR_DAT_02001f68);
  if (iVar1 == 1) {
    uVar2 = FUN_00f86780(*(undefined8 *)PTR_DAT_02001f68);
    *(undefined4 *)(param_1 + 0x33fc) = uVar2;
    FUN_00f8a700(param_1,0);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001f68);
  return;
}

