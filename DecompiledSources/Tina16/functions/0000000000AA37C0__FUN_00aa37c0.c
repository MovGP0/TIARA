/* Ghidra address: 00aa37c0 */
/* Ghidra symbol: FUN_00aa37c0 */


void FUN_00aa37c0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(byte *)(param_1 + 0x60) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x60) & 0x1f)
            & 0x60U) != 0;
  }
  else {
    bVar3 = false;
  }
  iVar1 = param_3;
  if (!bVar3) {
    iVar1 = FUN_00a73eb0(param_10,param_4);
    if (iVar1 < param_3) {
      iVar1 = param_3;
    }
    *(int *)(param_1 + 0x584) = iVar1 - param_3;
    iVar2 = FUN_00a73fa0(param_10,param_4);
    if (param_3 + param_7 < iVar2) {
      iVar2 = param_3 + param_7;
    }
    param_7 = iVar2 - iVar1;
  }
  FUN_00a9fd90(param_1,param_2,iVar1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  return;
}

