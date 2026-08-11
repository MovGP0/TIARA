/* Ghidra address: 01161610 */
/* Ghidra symbol: FUN_01161610 */


void FUN_01161610(int param_1,longlong *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  uVar1 = *(undefined8 *)(*param_2 + 0x978 + lVar6 * 8);
  dVar2 = *(double *)(*param_2 + 0x2f18 + lVar6 * 8);
  dVar3 = *(double *)(*param_2 + 0x25b0 + lVar6 * 8);
  uVar4 = *(undefined8 *)(*param_2 + 0x12e0 + lVar6 * 8);
  uVar5 = *(undefined8 *)(*param_2 + 0x1c48 + lVar6 * 8);
  *(undefined8 *)PTR_DAT_02001ad0 = *(undefined8 *)(*param_2 + 0x10 + lVar6 * 8);
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x10) = uVar1;
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x28) = uVar4;
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x30) = uVar5;
  FUN_00414ad0(PTR_DAT_02001ad0 + 0x48,&DAT_0116177c);
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x40) = 0;
  if (dVar2 != 0.0) {
    FUN_00414ad0(PTR_DAT_02001ad0 + 0x48,&DAT_0116178c);
    *(double *)(PTR_DAT_02001ad0 + 0x40) = dVar2;
  }
  if (dVar3 != 0.0) {
    FUN_00414ad0(PTR_DAT_02001ad0 + 0x48,&DAT_011617a0);
    *(double *)(PTR_DAT_02001ad0 + 0x40) = dVar3;
  }
  FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"BANDSTOPFILTER",
               *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
               PTR_DAT_020011d0);
  return;
}

