/* Ghidra address: 01163070 */
/* Ghidra symbol: FUN_01163070 */


void FUN_01163070(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  short *local_80 [15];
  
  local_80[0] = (short *)0x0;
  dVar1 = *(double *)PTR_DAT_02005b00;
  dVar2 = *(double *)(*param_3 + 0x10 + (longlong)param_2 * 8);
  dVar3 = *(double *)(*param_3 + 0x978 + (longlong)param_2 * 8);
  dVar6 = *(double *)(*param_1 + 0x20);
  dVar7 = *(double *)(*param_1 + 0x30);
  dVar4 = *(double *)(*param_1 + 0x38);
  dVar5 = *(double *)(*param_1 + 0x28);
  dVar6 = (double)FUN_0040c850((dVar7 * dVar4 - dVar6 * dVar6) / (dVar6 * dVar4 - dVar6 * dVar7));
  dVar7 = (double)FUN_0040c850((dVar7 * dVar4 - dVar5 * dVar5) / (dVar5 * dVar4 - dVar5 * dVar7));
  if (dVar7 < dVar6) {
    dVar6 = dVar7;
  }
  dVar7 = *(double *)(*param_1 + 0x30);
  dVar4 = *(double *)(*param_1 + 0x38);
  if (param_2 % 2 == 0) {
    *(double *)(PTR_DAT_02001ad0 + 8) =
         ((dVar6 * dVar2 * (dVar4 - dVar7)) / (dVar4 * dVar7)) * dVar1;
    *(double *)(PTR_DAT_02001ad0 + 0x10) = (1.0 / (dVar6 * dVar2 * (dVar4 - dVar7))) / dVar1;
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_LxC",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),local_80);
    if (((*local_80[0] == 0x53) || (*local_80[0] == 0x61)) ||
       ((param_2 < *(int *)PTR_DAT_020045d0 + -1 && (dVar2 != 0.0)))) {
      *(double *)(PTR_DAT_02001ad0 + 0x18) =
           ((dVar6 * dVar2 * (dVar4 - dVar7)) / (dVar4 * dVar7)) * dVar1;
      *(double *)(PTR_DAT_02001ad0 + 0x20) = (1.0 / (dVar6 * dVar2 * (dVar4 - dVar7))) / dVar1;
      *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar6 * dVar3 * (dVar4 - dVar7))) * dVar1;
      *(double *)(PTR_DAT_02001ad0 + 0x10) =
           ((dVar6 * dVar3 * (dVar4 - dVar7)) / (dVar4 * dVar7)) / dVar1;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC_LxC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar6 * dVar3 * (dVar4 - dVar7))) * dVar1;
      *(double *)(PTR_DAT_02001ad0 + 0x10) =
           ((dVar6 * dVar3 * (dVar4 - dVar7)) / (dVar4 * dVar7)) / dVar1;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  FUN_00414480(local_80);
  return;
}

