/* Ghidra address: 00705670 */
/* Ghidra symbol: FUN_00705670 */


void FUN_00705670(longlong param_1,undefined1 param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x581) = param_2;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    bVar2 = 0;
    puVar4 = &DAT_01e032c0;
    do {
      if (bVar2 < 8) {
        uVar6 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar2 & 0x1f);
        param_3 = (ulonglong)uVar6;
        bVar7 = ((byte)uVar6 & *(byte *)(param_1 + 0x581)) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar5 = uVar5 | *puVar4;
      }
      bVar2 = bVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (bVar2 != 5);
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar3,0x40e,0,uVar5);
  }
  return;
}

