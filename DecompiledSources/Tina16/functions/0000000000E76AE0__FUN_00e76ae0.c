/* Ghidra address: 00e76ae0 */
/* Ghidra symbol: FUN_00e76ae0 */


void FUN_00e76ae0(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_340 [7];
  undefined1 local_308 [752];
  
  puVar2 = local_340;
  for (lVar1 = 0x65; lVar1 != 0; lVar1 = lVar1 + -1) {
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
    (*DAT_0202e9b0)(local_340);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x110) + 0xe) != '\0') {
      FUN_01663140(*(longlong *)(param_1 + 0x110),local_308,0,0x12);
    }
    (*DAT_0202e9a8)(local_340);
  }
  return;
}

