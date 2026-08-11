/* Ghidra address: 009e4730 */
/* Ghidra symbol: FUN_009e4730 */


undefined8 * FUN_009e4730(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  longlong lVar5;
  
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  FUN_004169f0(param_2,(ulonglong)(uint)(iVar2 * 2) * 5);
  psVar3 = (short *)FUN_00416740(param_3);
  psVar4 = (short *)FUN_00416740(*param_2);
  for (; sVar1 = *psVar3, sVar1 != 0; psVar3 = psVar3 + 1) {
    if (sVar1 == 0x22) {
      FUN_004424b0(psVar4,L"&quot;");
      psVar4 = psVar4 + 6;
    }
    else if (sVar1 == 0x26) {
      FUN_004424b0(psVar4,L"&amp;");
      psVar4 = psVar4 + 5;
    }
    else if (sVar1 == 0x3c) {
      FUN_004424b0(psVar4,L"&lt;");
      psVar4 = psVar4 + 4;
    }
    else if (sVar1 == 0x3e) {
      FUN_004424b0(psVar4,L"&gt;");
      psVar4 = psVar4 + 4;
    }
    else {
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    }
  }
  lVar5 = FUN_00416740(*param_2);
  FUN_004169f0(param_2,((longlong)psVar4 - lVar5) / 2);
  return param_2;
}

