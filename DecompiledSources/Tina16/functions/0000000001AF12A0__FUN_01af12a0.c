/* Ghidra address: 01af12a0 */
/* Ghidra symbol: FUN_01af12a0 */


void FUN_01af12a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x7c0) = uVar3;
  cVar1 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if ((cVar1 == '\0') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c8),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c0) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c0),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1350) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1350),0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1518) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1518),0);
    iVar2 = FUN_007e2ef0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_007e2f10(*(undefined8 *)
                              (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x718) + 0x80),iVar4);
        FUN_007e2da0(uVar3,0);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
    uVar3 = thunk_FUN_0417c6e9(uVar3,0);
    thunk_FUN_04048b08(uVar3,0xf060,1);
  }
  return;
}

