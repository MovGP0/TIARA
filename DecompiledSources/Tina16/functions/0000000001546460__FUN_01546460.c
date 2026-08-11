/* Ghidra address: 01546460 */
/* Ghidra symbol: FUN_01546460 */


void FUN_01546460(char param_1)

{
  longlong *plVar1;
  
  if (param_1 != '\0') {
    FUN_01545d90(&DAT_01f61780,&DAT_01f61784);
    plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_015454c8,1,*(undefined8 *)PTR_DAT_02004030);
    if (DAT_01f6177c == '\0') {
      FUN_01546060(plVar1,DAT_01f61784,DAT_01f61780);
    }
    else {
      FUN_01546060(plVar1,0,DAT_01f61780);
    }
    (**(code **)(*plVar1 + 0x2d0))(plVar1);
    if (*(char *)((longlong)plVar1 + 0x711) != '\0') {
      FUN_0080d170(*(undefined8 *)PTR_DAT_02004030);
    }
    FUN_00410f20(plVar1);
  }
  return;
}

