/* Ghidra address: 01c0a4f0 */
/* Ghidra symbol: FUN_01c0a4f0 */


void FUN_01c0a4f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_1[100] == 0) {
    return;
  }
  iVar1 = *(int *)(param_1[100] + 0x48);
  if (iVar1 != 0x20000000) {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),iVar1);
  }
  uStack_40 = param_2[1];
  local_38 = *param_2;
  _local_30 = CONCAT44((int)((ulonglong)param_2[1] >> 0x20),0x19);
  _local_48 = CONCAT44((int)((ulonglong)*param_2 >> 0x20),0x19 - (int)local_38);
  cVar2 = FUN_01bfea90(param_1[100]);
  if (cVar2 == '\0') {
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0x8c));
  }
  else {
    uVar4 = FUN_01c07120(param_1);
    uVar4 = FUN_01c03e40(uVar4);
    uVar3 = FUN_01bff2c0(uVar4);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
  }
  (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],&local_38);
  lVar5 = FUN_01c03e40(param_1[0x6d]);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xc0));
  if (((*(char *)((longlong)param_1 + 0x344) == '\0') ||
      (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0')) &&
     ((*(char *)((longlong)param_1 + 0x344) == '\0' || ((char)param_1[0x6e] != '\0'))))
  goto LAB_01c0a6e9;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 != '\0') {
    plVar6 = (longlong *)FUN_01c07120(param_1);
    cVar2 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x238))(param_1);
      if (cVar2 == '\0') {
LAB_01c0a6bd:
        lVar5 = FUN_01c03e40(param_1[0x6d]);
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
      }
      else {
        cVar2 = (**(code **)(*param_1 + 0x238))(param_1);
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_01c07120(param_1);
          cVar2 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
          if (cVar2 != '\0') goto LAB_01c0a6bd;
        }
      }
    }
  }
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
LAB_01c0a6e9:
  FUN_01c04730(param_1,&local_48);
  plVar6 = (longlong *)FUN_01c07120(param_1);
  cVar2 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  if ((((cVar2 != '\0') || (cVar2 = (**(code **)(*param_1 + 0x238))(param_1), cVar2 == '\0')) &&
      (cVar2 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8), cVar2 == '\0')) &&
     (((*(char *)((longlong)param_1 + 0x344) != '\0' &&
       (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 != '\0')) ||
      ((*(char *)((longlong)param_1 + 0x344) != '\0' && ((char)param_1[0x6e] == '\0')))))) {
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],param_2);
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0x84));
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    (**(code **)(*(longlong *)param_1[0x62] + 0xb8))((longlong *)param_1[0x62],param_2);
  }
  return;
}

