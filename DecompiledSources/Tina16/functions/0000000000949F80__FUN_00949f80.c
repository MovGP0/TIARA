/* Ghidra address: 00949f80 */
/* Ghidra symbol: FUN_00949f80 */


longlong * FUN_00949f80(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  
  plVar8 = (longlong *)0x0;
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if ((cVar1 != '\x05') || (*(char *)(param_1 + 2) != '\0')) {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
    iVar3 = (**(code **)*puVar4)();
    uVar9 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
        uVar7 = (ulonglong)uVar9;
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7);
        bVar2 = (**(code **)(*plVar5 + 0x168))(plVar5);
        if (bVar2 < 0x10) {
          bVar10 = ((ushort)((int)CONCAT62((int6)(uVar7 >> 0x10),1) << (bVar2 & 0x1f)) &
                   *(ushort *)(param_1 + 5)) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          puVar4 = (undefined8 *)param_1[3];
          if (puVar4 == (undefined8 *)0x0) {
            cVar1 = '\0';
          }
          else {
            cVar1 = (**(code **)*puVar4)(puVar4,plVar5);
          }
        }
        else {
          cVar1 = '\x02';
        }
        plVar6 = plVar5;
        if ((cVar1 != '\0') && (plVar6 = plVar8, cVar1 == '\x02')) {
          plVar6 = (longlong *)(**(code **)*param_1)(param_1,plVar5);
        }
        if (plVar6 != (longlong *)0x0) {
          return plVar6;
        }
        uVar9 = uVar9 + 1;
        iVar3 = iVar3 + -1;
        plVar8 = plVar6;
      } while (iVar3 != 0);
    }
  }
  return (longlong *)0x0;
}

