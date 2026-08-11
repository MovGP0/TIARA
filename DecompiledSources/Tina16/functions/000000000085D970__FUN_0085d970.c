/* Ghidra address: 0085d970 */
/* Ghidra symbol: FUN_0085d970 */


void FUN_0085d970(void)

{
  int iVar1;
  longlong *plVar2;
  
  DAT_0201279c = DAT_0201279c + -1;
  if (DAT_0201279c == -1) {
    DAT_02012770 = FUN_005fc570(&PTR_FUN_005f2d40,1);
    FUN_005fce70(DAT_02012770,0);
    plVar2 = (longlong *)FUN_008094d0(*(undefined8 *)PTR_DAT_02005950);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,L"Calibri");
    if (iVar1 < 0) {
      plVar2 = (longlong *)FUN_008094d0(*(undefined8 *)PTR_DAT_02005950);
      iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,L"Tahoma");
      if (iVar1 < 0) {
        FUN_005fcd80(DAT_02012770,L"Arial");
      }
      else {
        FUN_005fcd80(DAT_02012770,L"Tahoma");
      }
      FUN_005fcc80(DAT_02012770,0xfffffff3);
    }
    else {
      FUN_005fcc80(DAT_02012770,0xfffffff2);
      FUN_005fcd80(DAT_02012770,L"Calibri");
    }
    FUN_0085a550();
    DAT_02012768 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060a8f0(DAT_02012768,PTR_IMAGE_DOS_HEADER_0200c280,L"btnArrow");
    (**(code **)(*DAT_02012768 + 0x80))(DAT_02012768,1);
  }
  return;
}

