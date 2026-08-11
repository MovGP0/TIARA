/* Ghidra address: 01c11d40 */
/* Ghidra symbol: FUN_01c11d40 */


void FUN_01c11d40(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1[100] != 0) {
    if (((*(char *)((longlong)param_1 + 0x344) != '\0') &&
        (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1), cVar1 != '\0')) ||
       ((*(char *)((longlong)param_1 + 0x344) != '\0' && ((char)param_1[0x6e] == '\0')))) {
      plVar3 = (longlong *)FUN_01c07120(param_1);
      cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(longlong *)param_1[100] + 0x70))((longlong *)param_1[100]);
        if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
          *param_2 = *param_2 + 1;
        }
        else {
          *param_2 = *param_2 + 0x16;
        }
        param_2[2] = param_2[2] + -2;
      }
    }
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xc0));
    if ((*(char *)((longlong)param_1 + 0x344) != '\0') &&
       (cVar1 = (**(code **)(*param_1 + 0x238))(param_1), cVar1 == '\0')) {
      uVar4 = FUN_01c07120(param_1);
      lVar5 = FUN_01c03e40(uVar4);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
    }
    cVar1 = FUN_01bfea90(param_1[100]);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x344) == '\0')) {
      uVar4 = FUN_01c07120(param_1);
      uVar4 = FUN_01c03e40(uVar4);
      uVar2 = FUN_01bff2c0(uVar4);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar2);
    }
    if (*(char *)((longlong)param_1 + 0x344) != '\0') {
      plVar3 = (longlong *)FUN_01c07120(param_1);
      cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
      if ((cVar1 != '\0') && (cVar1 = FUN_01bfaa20(param_1[100]), cVar1 == '\0')) {
        cVar1 = FUN_01bfea90(param_1[100]);
        if (cVar1 == '\0') {
          uVar4 = FUN_01c07120(param_1);
          lVar5 = FUN_01c03e40(uVar4);
          FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xc0));
        }
        else {
          uVar4 = FUN_01c07120(param_1);
          uVar4 = FUN_01c03e40(uVar4);
          uVar2 = FUN_01bff2c0(uVar4);
          FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar2);
        }
      }
    }
    FUN_01c04730(param_1,param_2);
    return;
  }
  return;
}

