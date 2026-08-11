/* Ghidra address: 00949ba0 */
/* Ghidra symbol: FUN_00949ba0 */


longlong * FUN_00949ba0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar5 = (longlong *)0x0;
  if (param_2 != (longlong *)param_1[4]) {
    plVar5 = param_2;
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x158))(param_2);
    if (plVar4 == (longlong *)0x0) {
      lVar6 = (**(code **)(*param_2 + 0x170))(param_2);
      if (lVar6 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
        bVar2 = (**(code **)(*plVar4 + 0x168))(plVar4);
        if (bVar2 < 0x10) {
          bVar8 = ((ushort)((int)CONCAT62((int6)((ulonglong)plVar5 >> 0x10),1) << (bVar2 & 0x1f)) &
                  *(ushort *)(param_1 + 5)) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          puVar1 = (undefined8 *)param_1[3];
          if (puVar1 == (undefined8 *)0x0) {
            cVar3 = '\0';
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x170))(param_2);
            cVar3 = (**(code **)*puVar1)(puVar1,uVar7);
          }
        }
        else {
          cVar3 = '\x02';
        }
        if ((byte)(cVar3 - 1U) == 0xff) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)0x0;
          if ((byte)(cVar3 - 1U) < 2) {
            uVar7 = (**(code **)(*param_2 + 0x170))(param_2);
            plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,uVar7);
          }
        }
      }
    }
    else {
      bVar2 = (**(code **)(*plVar4 + 0x168))(plVar4);
      if (bVar2 < 0x10) {
        bVar8 = ((ushort)((int)CONCAT62((int6)((ulonglong)plVar5 >> 0x10),1) << (bVar2 & 0x1f)) &
                *(ushort *)(param_1 + 5)) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
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
      plVar5 = plVar4;
      if (cVar3 != '\0') {
        if (cVar3 == '\x01') {
          plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,plVar4);
        }
        else {
          plVar5 = (longlong *)0x0;
          if ((cVar3 == '\x02') &&
             (plVar5 = (longlong *)(**(code **)*param_1)(param_1,plVar4), plVar5 == (longlong *)0x0)
             ) {
            plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,plVar4);
          }
        }
      }
    }
  }
  return plVar5;
}

