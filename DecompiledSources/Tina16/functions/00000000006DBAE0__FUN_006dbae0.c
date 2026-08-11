/* Ghidra address: 006dbae0 */
/* Ghidra symbol: FUN_006dbae0 */


void FUN_006dbae0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_28;
  int local_24;
  uint local_20;
  
  local_28 = (int)*(short *)(param_2 + 0x10);
  local_24 = (int)*(short *)(param_2 + 0x12);
  uVar2 = FUN_0065b870(param_1);
  iVar1 = FUN_004701b0(uVar2,0x1206,0,&local_28,1);
  if (((-1 < iVar1) && ((local_20 & 2) != 0)) &&
     (lVar3 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar1), *(char *)(lVar3 + 0x2e) == '\0')
     ) {
    return;
  }
  FUN_00650a80(param_1,param_2);
  return;
}

