/* Ghidra address: 0094a0b0 */
/* Ghidra symbol: FUN_0094a0b0 */


longlong * FUN_0094a0b0(longlong *param_1,longlong *param_2)

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
  
  plVar5 = (longlong *)0x0;
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if ((cVar1 != '\x05') || ((char)param_1[2] != '\0')) {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
    iVar3 = (**(code **)*puVar4)(puVar4);
    uVar9 = iVar3 - 1;
    plVar8 = plVar5;
    if (-1 < (int)uVar9) {
      do {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
        uVar7 = (ulonglong)uVar9;
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7);
        bVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
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
            cVar1 = (**(code **)*puVar4)(puVar4,plVar6);
          }
        }
        else {
          cVar1 = '\x02';
        }
        plVar5 = plVar6;
        if ((cVar1 != '\0') && (plVar5 = plVar8, cVar1 == '\x02')) {
          plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,plVar6);
        }
      } while ((plVar5 == (longlong *)0x0) &&
              (uVar9 = uVar9 - 1, plVar8 = plVar5, uVar9 != 0xffffffff));
    }
  }
  return plVar5;
}

