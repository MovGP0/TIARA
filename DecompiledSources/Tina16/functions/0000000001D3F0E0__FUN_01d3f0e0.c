/* Ghidra address: 01d3f0e0 */
/* Ghidra symbol: FUN_01d3f0e0 */


undefined8 FUN_01d3f0e0(undefined8 param_1,short param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined **ppuVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_3 + 0x528);
  if (lVar1 != 0) {
    uVar3 = FUN_01d03160(lVar1);
    cVar2 = FUN_01d3d5c0(uVar3);
    if (cVar2 != '\0') {
      param_2 = FUN_01d03160(lVar1);
    }
  }
  FUN_00414ad0(param_1,L"Not_found");
  iVar6 = 0x3b;
  psVar4 = &DAT_01ff5846;
  ppuVar5 = &PTR_DAT_01ff5a80;
  do {
    if (*psVar4 == param_2) {
      FUN_00414ad0(param_1,*ppuVar5);
      break;
    }
    ppuVar5 = ppuVar5 + 1;
    psVar4 = psVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_2 == 0x8f) {
    FUN_00414ad0(param_1,L"e_PS2_entity");
  }
  return param_1;
}

