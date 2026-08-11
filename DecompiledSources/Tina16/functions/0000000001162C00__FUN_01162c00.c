/* Ghidra address: 01162c00 */
/* Ghidra symbol: FUN_01162c00 */


void FUN_01162c00(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  short *local_60 [11];
  
  local_60[0] = (short *)0x0;
  dVar1 = *(double *)(*param_1 + 0x30);
  dVar2 = *(double *)(*param_1 + 0x20);
  dVar3 = *(double *)(*param_1 + 0x28);
  dVar4 = *(double *)(*param_1 + 0x38);
  FUN_0040c850((dVar2 * dVar3 - dVar1 * dVar1) / (dVar1 * dVar3 - dVar1 * dVar2));
  FUN_0040c850((dVar2 * dVar3 - dVar4 * dVar4) / (dVar4 * dVar3 - dVar4 * dVar2));
  dVar1 = *(double *)(*param_1 + 0x20);
  dVar2 = *(double *)(*param_1 + 0x28);
  dVar3 = *(double *)PTR_DAT_02005b00;
  dVar4 = *(double *)(*param_3 + 0x10 + (longlong)param_2 * 8);
  dVar5 = *(double *)(*param_3 + 0x978 + (longlong)param_2 * 8);
  if (param_2 % 2 == 0) {
    dVar5 = ((dVar2 - dVar1) / (dVar4 * dVar2 * dVar1)) / dVar3;
    *(double *)(PTR_DAT_02001ad0 + 8) = (dVar4 / (dVar2 - dVar1)) * dVar3;
    *(double *)(PTR_DAT_02001ad0 + 0x10) = dVar5;
    *(double *)(PTR_DAT_02001ad0 + 0x10) = dVar5;
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_LC",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),local_60);
    if (((*local_60[0] == 0x53) || (*local_60[0] == 0x61)) ||
       ((param_2 < *(int *)PTR_DAT_020045d0 + -1 && (dVar4 != 0.0)))) {
      *(double *)(PTR_DAT_02001ad0 + 8) = (dVar4 / (dVar2 - dVar1)) * dVar3;
      *(double *)(PTR_DAT_02001ad0 + 0x10) = ((dVar2 - dVar1) / (dVar4 * dVar2 * dVar1)) / dVar3;
      *(double *)(PTR_DAT_02001ad0 + 0x18) = ((dVar2 - dVar1) / (dVar5 * dVar2 * dVar1)) * dVar3;
      *(double *)(PTR_DAT_02001ad0 + 0x20) = (dVar5 / (dVar2 - dVar1)) / dVar3;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC_LxC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      *(double *)(PTR_DAT_02001ad0 + 8) = ((dVar2 - dVar1) / (dVar5 * dVar2 * dVar1)) * dVar3;
      *(double *)(PTR_DAT_02001ad0 + 0x10) = (dVar5 / (dVar2 - dVar1)) / dVar3;
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LxC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  FUN_00414480(local_60);
  return;
}

