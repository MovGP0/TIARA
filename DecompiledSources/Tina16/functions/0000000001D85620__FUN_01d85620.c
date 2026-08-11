/* Ghidra address: 01d85620 */
/* Ghidra symbol: FUN_01d85620 */


void FUN_01d85620(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  longlong local_38;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  cVar1 = *(char *)(param_1 + 0x29);
  if ((cVar1 == '\x02') || (puVar2 = auStack_68, cVar1 == '\x03')) {
    FUN_01d85850(param_1,cVar1 != '\x03');
    puVar2 = local_30;
  }
  local_30 = puVar2;
  if (*(byte *)(param_1 + 0x29) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x29) & 0x1f)
            & 0xcU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    (**(code **)(param_1 + 0x40))();
  }
  uVar3 = FUN_006261a0();
  local_40 = FUN_01d85460;
  local_38 = param_1;
  FUN_00621370(uVar3,param_1,&local_40);
  return;
}

