/* Ghidra address: 0068aa60 */
/* Ghidra symbol: FUN_0068aa60 */


void FUN_0068aa60(longlong *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_1[7] + 0x4cc);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1[7] >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    if (param_2 == -1) {
      param_2 = (**(code **)(*param_1 + 0x28))(param_1);
      param_2 = param_2 + -1;
    }
    lVar2 = param_1[7];
    pcVar3 = (code *)FUN_00411550(lVar2,0xffa9);
    (*pcVar3)(lVar2,param_2,param_3);
  }
  return;
}

