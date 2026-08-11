/* Ghidra address: 01c018b0 */
/* Ghidra symbol: FUN_01c018b0 */


undefined8 FUN_01c018b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 != 0) {
    cVar4 = (char)param_2;
    if (cVar4 == '\0') {
      uVar2 = 0;
      if (*(char *)(lVar1 + 0x28) == '\x03') {
        uVar2 = FUN_01bfa9a0(lVar1);
        plVar3 = (longlong *)FUN_00603c60(uVar2);
        uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
      }
    }
    else if (cVar4 == '\x01') {
      uVar2 = 0;
      if (*(char *)(lVar1 + 0x28) == '\x04') {
        uVar2 = FUN_01bfa9a0(lVar1);
        plVar3 = (longlong *)FUN_00603c60(uVar2);
        uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
      }
    }
    else if (cVar4 == '\x02') {
      if (*(byte *)(lVar1 + 0x28) < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
                 (*(byte *)(lVar1 + 0x28) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        uVar2 = FUN_01bfa9a0(lVar1);
        plVar3 = (longlong *)FUN_00603c60(uVar2);
        uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
      }
    }
  }
  return uVar2;
}

