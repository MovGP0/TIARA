/* Ghidra address: 00956b40 */
/* Ghidra symbol: FUN_00956b40 */


ulonglong FUN_00956b40(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x01') {
    if ((char)param_2[8] != '\0') {
      uVar6 = 0;
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x100))(param_2);
    iVar2 = (**(code **)*puVar3)(puVar3);
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar2);
        plVar4 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_00909bd0);
        cVar1 = (**(code **)(*plVar4 + 0x2d8))(plVar4);
        if (cVar1 == '\0') {
          FUN_00410f20(plVar4);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    uVar5 = FUN_004113f0(param_2,&PTR_FUN_0090a420);
    (*(code *)**(undefined8 **)param_1[0x26])((undefined8 *)param_1[0x26],uVar5);
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
  iVar2 = (**(code **)*puVar3)();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar7);
      cVar1 = (**(code **)(*param_1 + 0x340))(param_1,uVar5);
      if (cVar1 == '\0') {
        uVar6 = 0;
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar6 & 0xffffffff;
}

