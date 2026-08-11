/* Ghidra address: 00949ee0 */
/* Ghidra symbol: FUN_00949ee0 */


longlong * FUN_00949ee0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = (longlong *)0x0;
  if (param_2 != (longlong *)param_1[4]) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      bVar2 = (**(code **)(*plVar4 + 0x168))(plVar4);
      if (bVar2 < 0x10) {
        bVar5 = ((ushort)((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar2 & 0x1f)) &
                *(ushort *)(param_1 + 5)) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        puVar1 = (undefined8 *)param_1[3];
        if (puVar1 == (undefined8 *)0x0) {
          cVar3 = '\0';
        }
        else {
          cVar3 = (**(code **)*puVar1)(puVar1,plVar4);
        }
      }
      else {
        cVar3 = '\x02';
      }
      if ((byte)(cVar3 - 1U) < 2) {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,plVar4);
      }
    }
  }
  return plVar4;
}

