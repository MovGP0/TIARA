/* Ghidra address: 01162790 */
/* Ghidra symbol: FUN_01162790 */


void FUN_01162790(longlong *param_1,int param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  short *local_10;
  
  local_10 = (short *)0x0;
  dVar1 = *(double *)PTR_DAT_02005b00;
  dVar2 = *(double *)(*param_1 + 0x20);
  dVar3 = *(double *)(*param_3 + 0x978 + (longlong)param_2 * 8);
  *(double *)(PTR_DAT_02001ad0 + 8) =
       (*(double *)(*param_3 + 0x10 + (longlong)param_2 * 8) * dVar1) / dVar2;
  *(double *)(PTR_DAT_02001ad0 + 0x10) = (dVar3 / dVar1) / dVar2;
  if (param_2 % 2 == 0) {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"SERIAL_L",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),&local_10);
    if (((*local_10 == 0x53) || (*local_10 == 0x61)) || (param_2 < *(int *)PTR_DAT_020045d0 + -1)) {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_LC",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
    else {
      FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"PARALELL_C",
                   *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54)
                   ,PTR_DAT_020011d0);
    }
  }
  FUN_00414480(&local_10);
  return;
}

