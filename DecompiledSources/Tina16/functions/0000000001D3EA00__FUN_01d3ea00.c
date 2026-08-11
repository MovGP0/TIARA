/* Ghidra address: 01d3ea00 */
/* Ghidra symbol: FUN_01d3ea00 */


void FUN_01d3ea00(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  
  *param_5 = 1;
  cVar2 = FUN_01d3d530(param_2);
  if ((((cVar2 != '\0') || (cVar2 = FUN_01d3d590(param_2), cVar2 != '\0')) ||
      (sVar3 = (short)param_2, sVar3 == 0x3ef)) || (sVar3 == 0x44f)) {
    *param_3 = 1;
    puVar1 = (undefined8 *)(PTR_DAT_02003998 + 8);
    *param_4 = *(undefined8 *)PTR_DAT_02003998;
    param_4[1] = *puVar1;
    return;
  }
  if (sVar3 == 0x889) {
    *param_3 = 1;
    puVar1 = (undefined8 *)(PTR_DAT_02001090 + 8);
    *param_4 = *(undefined8 *)PTR_DAT_02001090;
    param_4[1] = *puVar1;
    return;
  }
  if (sVar3 == 0x45d) {
    *param_3 = 1;
    puVar1 = (undefined8 *)(PTR_DAT_02001fe8 + 8);
    *param_4 = *(undefined8 *)PTR_DAT_02001fe8;
    param_4[1] = *puVar1;
    return;
  }
  *param_5 = 0;
  return;
}

