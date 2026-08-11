/* Ghidra address: 01664930 */
/* Ghidra symbol: FUN_01664930 */


void FUN_01664930(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_13d8 [84];
  undefined1 local_1138 [3392];
  undefined1 local_3f8;
  
  local_3f8 = 0;
  puVar2 = local_13d8;
  for (lVar1 = 0x278; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0
    ;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    (*DAT_0210f8b8)(local_13d8);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x110) + 0xe) != '\0') {
      FUN_01663140(*(longlong *)(param_1 + 0x110),local_1138,0,0x24);
    }
    (*DAT_0210f8b0)(local_13d8);
  }
  return;
}

