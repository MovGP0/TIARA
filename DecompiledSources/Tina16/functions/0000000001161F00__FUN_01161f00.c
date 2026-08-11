/* Ghidra address: 01161f00 */
/* Ghidra symbol: FUN_01161f00 */


void FUN_01161f00(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = *(double *)(*param_1 + 0x20);
  dVar7 = *(double *)(*param_1 + 0x30);
  dVar1 = *(double *)(*param_1 + 0x38);
  dVar2 = *(double *)(*param_1 + 0x28);
  dVar6 = (double)FUN_0040c850((dVar7 * dVar1 - dVar6 * dVar6) / (dVar6 * dVar1 - dVar6 * dVar7));
  dVar7 = (double)FUN_0040c850((dVar7 * dVar1 - dVar2 * dVar2) / (dVar2 * dVar1 - dVar2 * dVar7));
  if (dVar7 < dVar6) {
    dVar6 = dVar7;
  }
  dVar7 = *(double *)(*param_1 + 0x30);
  dVar1 = *(double *)(*param_1 + 0x38);
  dVar2 = *(double *)PTR_DAT_02005b00;
  dVar3 = *(double *)(*param_3 + 0x10 + (longlong)(param_2 / 2) * 8);
  dVar4 = *(double *)(*param_3 + 0x978 + (longlong)(param_2 / 2) * 8);
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0),
                     (longlong)param_2 % 2 & 0xffffffff);
  if (cVar5 == '\x01') {
    if (param_2 % 2 == 0) {
      *(double *)(PTR_DAT_02001ad0 + 8) =
           ((dVar6 * dVar3 * (dVar1 - dVar7)) / (dVar1 * dVar7)) * dVar2;
      *(double *)(PTR_DAT_02001ad0 + 0x10) = (1.0 / (dVar6 * dVar3 * (dVar1 - dVar7))) / dVar2;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_LxC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar6 * dVar4 * (dVar1 - dVar7))) * dVar2;
      *(double *)(PTR_DAT_02001ad0 + 0x10) =
           ((dVar6 * dVar4 * (dVar1 - dVar7)) / (dVar1 * dVar7)) / dVar2;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  else if (param_2 % 2 == 1) {
    *(double *)(PTR_DAT_02001ad0 + 8) =
         ((dVar6 * dVar3 * (dVar1 - dVar7)) / (dVar1 * dVar7)) * dVar2;
    *(double *)(PTR_DAT_02001ad0 + 0x10) = 1.0 / (dVar6 * dVar3 * (dVar1 - dVar7));
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_LxC",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar6 * dVar4 * (dVar1 - dVar7))) * dVar2;
    *(double *)(PTR_DAT_02001ad0 + 0x10) =
         ((dVar6 * dVar4 * (dVar1 - dVar7)) / (dVar1 * dVar7)) / dVar2;
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  return;
}

