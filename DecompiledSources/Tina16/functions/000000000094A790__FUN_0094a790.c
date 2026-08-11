/* Ghidra address: 0094a790 */
/* Ghidra symbol: FUN_0094a790 */


longlong * FUN_0094a790(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if ((char)param_1[5] != '\0') {
    param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar4 = FUN_0044d490(&PTR_FUN_00901628,param_2,L"Invalid state error.");
    FUN_004134c0(uVar4);
  }
  if ((char)param_1[3] == '\0') {
    *(undefined1 *)(param_1 + 3) = 1;
    plVar5 = (longlong *)param_1[2];
  }
  else {
    plVar5 = (longlong *)0x0;
    if ((char)param_1[3] == '\x01') {
      param_2 = (longlong *)param_1[2];
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,param_2);
    }
  }
  do {
    cVar3 = '\0';
    plVar6 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      bVar2 = (**(code **)(*plVar5 + 0x168))(plVar5);
      if (bVar2 < 0x10) {
        uVar7 = (int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar2 & 0x1f);
        param_2 = (longlong *)(ulonglong)uVar7;
        bVar8 = ((ushort)uVar7 & *(ushort *)((longlong)param_1 + 0x19)) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        puVar1 = (undefined8 *)param_1[4];
        if (puVar1 != (undefined8 *)0x0) {
          param_2 = plVar5;
          cVar3 = (**(code **)*puVar1)(puVar1,plVar5);
        }
      }
      else {
        cVar3 = '\x02';
      }
      if (cVar3 != '\0') {
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,plVar5);
        param_2 = plVar5;
      }
    }
    plVar5 = plVar6;
  } while (cVar3 != '\0');
  if (plVar6 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar6 + 0x268))(plVar6,param_1[1]);
    if ((cVar3 == '\0') && (plVar6 != (longlong *)param_1[1])) {
      cVar3 = (**(code **)(*(longlong *)param_1[2] + 0x268))((longlong *)param_1[2],param_1[1]);
      if ((cVar3 != '\0') || (param_1[2] == param_1[1])) {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    param_1[2] = (longlong)plVar6;
  }
  return plVar6;
}

