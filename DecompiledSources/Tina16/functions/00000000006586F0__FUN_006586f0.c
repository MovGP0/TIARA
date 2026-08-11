/* Ghidra address: 006586f0 */
/* Ghidra symbol: FUN_006586f0 */


void FUN_006586f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  
  FUN_0065be30(param_1);
  FUN_00652660(param_1);
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  lVar3 = param_1[0xf];
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x310) == 0)) {
    lVar3 = 0;
    if (param_1[0x62] != 0) {
      lVar3 = param_1[0x62];
    }
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x310);
  }
  if (lVar3 == 0) {
    FUN_00654320(param_1,0);
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      pcVar2 = (code *)FUN_00411550(param_1,0xffce);
      (*pcVar2)(param_1);
    }
  }
  else {
    iVar1 = FUN_004aeba0(lVar3,param_1);
    if (iVar1 == -1) {
      FUN_004ae7e0(lVar3,param_1);
    }
  }
  return;
}

