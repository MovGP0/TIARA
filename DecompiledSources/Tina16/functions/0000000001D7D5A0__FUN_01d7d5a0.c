/* Ghidra address: 01d7d5a0 */
/* Ghidra symbol: FUN_01d7d5a0 */


void FUN_01d7d5a0(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_20;
  
  local_20 = 0;
  uVar3 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(uVar3,0xffffffff80000001);
  FUN_00416ba0(&local_20,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005eaa60(uVar3,local_20);
  FUN_005ea630(uVar3);
  FUN_00410f20(uVar3);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_01d7afa8,1,*(undefined8 *)PTR_DAT_02004030);
    iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
    FUN_00410f20(plVar4);
    if (iVar2 != 1) {
      FUN_00414140(1);
    }
  }
  FUN_00414480(&local_20);
  return;
}

