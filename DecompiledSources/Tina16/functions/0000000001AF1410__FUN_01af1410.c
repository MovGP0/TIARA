/* Ghidra address: 01af1410 */
/* Ghidra symbol: FUN_01af1410 */


void FUN_01af1410(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c8),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c0) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x6c0),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1350) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1350),1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1518) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x1518),1);
    iVar1 = FUN_007e2ef0();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_007e2f10(*(undefined8 *)
                              (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x718) + 0x80),iVar3);
        FUN_007e2da0(uVar2,1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    uVar2 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
    uVar2 = thunk_FUN_0417c6e9(uVar2,0);
    thunk_FUN_04048b08(uVar2,0xf060,0);
  }
  return;
}

