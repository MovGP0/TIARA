/* Ghidra address: 01162380 */
/* Ghidra symbol: FUN_01162380 */


void FUN_01162380(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  
  dVar1 = *(double *)PTR_DAT_02005b00;
  dVar2 = *(double *)(*param_3 + 0x10 + (longlong)(param_2 / 2) * 8);
  dVar3 = *(double *)(*param_3 + 0x978 + (longlong)(param_2 / 2) * 8);
  dVar4 = *(double *)(*param_1 + 0x20);
  if (dVar3 != 0.0) {
    *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar4 * dVar3)) * dVar1;
  }
  if (dVar2 != 0.0) {
    *(double *)(PTR_DAT_02001ad0 + 0x10) = (1.0 / (dVar4 * dVar2)) / dVar1;
  }
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0));
  if (cVar5 == '\x01') {
    if (param_2 % 2 == 0) {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_C",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_L",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  else if (param_2 % 2 == 1) {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_C",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_L",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  return;
}

