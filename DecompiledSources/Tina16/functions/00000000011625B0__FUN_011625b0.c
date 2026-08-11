/* Ghidra address: 011625b0 */
/* Ghidra symbol: FUN_011625b0 */


void FUN_011625b0(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  
  dVar1 = *(double *)PTR_DAT_02005b00;
  dVar2 = *(double *)(*param_3 + 0x978 + (longlong)(param_2 / 2) * 8);
  dVar3 = *(double *)(*param_1 + 0x20);
  *(double *)(PTR_DAT_02001ad0 + 8) =
       (*(double *)(*param_3 + 0x10 + (longlong)(param_2 / 2) * 8) * dVar1) /
       *(double *)(*param_1 + 0x20);
  *(double *)(PTR_DAT_02001ad0 + 0x10) = (dVar2 / dVar1) / dVar3;
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0));
  if (cVar4 == '\x01') {
    if (param_2 % 2 == 0) {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_L",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_C",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  else if (param_2 % 2 == 1) {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_L",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_C",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  return;
}

