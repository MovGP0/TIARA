/* Ghidra address: 00d7a390 */
/* Ghidra symbol: FUN_00d7a390 */


void FUN_00d7a390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*(byte *)(param_1 + 0x99) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0x99) & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar3 = false;
    }
    puVar1 = auStack_48;
    if (!bVar3) goto LAB_00d7a43c;
  }
  cVar2 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x130));
  puVar1 = local_20;
  if (cVar2 != '\0') {
    local_10 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x130);
    FUN_00d793a0(param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x120) = local_10;
    return;
  }
LAB_00d7a43c:
  local_20 = puVar1;
  FUN_00d793a0(param_1,param_2,param_3);
  return;
}

