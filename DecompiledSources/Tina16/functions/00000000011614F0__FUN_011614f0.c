/* Ghidra address: 011614f0 */
/* Ghidra symbol: FUN_011614f0 */


void FUN_011614f0(int param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  uVar1 = *(undefined8 *)(*param_2 + 0x978 + lVar4 * 8);
  uVar2 = *(undefined8 *)(*param_2 + 0x12e0 + lVar4 * 8);
  uVar3 = *(undefined8 *)(*param_2 + 0x1c48 + lVar4 * 8);
  *(undefined8 *)PTR_DAT_02001ad0 = *(undefined8 *)(*param_2 + 0x10 + lVar4 * 8);
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x10) = uVar1;
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x28) = uVar2;
  *(undefined8 *)(PTR_DAT_02001ad0 + 0x30) = uVar3;
  if ((*(double *)(*param_2 + 0x2f18 + (longlong)param_1 * 8) == 0.0) &&
     (*(double *)(*param_2 + 0x25b0 + (longlong)param_1 * 8) == 0.0)) {
    FUN_0116da30(*(undefined8 *)PTR_DAT_020052d8,L"BANDPASSFILTER",
                 *(undefined4 *)(PTR_DAT_02001ad0 + 0x50),*(undefined4 *)(PTR_DAT_02001ad0 + 0x54),
                 PTR_DAT_020011d0);
  }
  else {
    FUN_01161610();
  }
  return;
}

