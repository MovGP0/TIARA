/* Ghidra address: 01be1e10 */
/* Ghidra symbol: FUN_01be1e10 */


longlong * FUN_01be1e10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)0x0;
  if (*(char *)((longlong)param_1 + 0x592) == '\0') {
    return (longlong *)0x0;
  }
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if (param_3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  iVar2 = FUN_00611650(param_1[0xc9]);
  if (iVar2 != 0) {
    lVar4 = FUN_01be0910(param_1[0xc9]);
    if (*(longlong **)(lVar4 + 0x5b0) == param_3) {
      return local_20;
    }
    if (param_3[100] != 0) {
      uVar5 = FUN_01bfaa70(param_3[100]);
      iVar2 = FUN_01bfbe40(uVar5);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x3c8))(param_1,param_3);
        param_1[0xb0] = 0;
        local_30 = (longlong *)(**(code **)(*param_1 + 0x3f0))(param_1);
        *(short *)(local_30 + 99) = (short)local_30[99] + 1;
        local_20 = local_30;
        uVar5 = FUN_01c03e40(param_1);
        (**(code **)(*local_20 + 0x318))(local_20,uVar5);
        lVar4 = FUN_01c03e40(local_20);
        FUN_0064e030(local_20,*(undefined4 *)(lVar4 + 0xc0));
        local_20[0xba] = param_1[0xba];
        *(char *)(local_20 + 0x98) = (char)param_1[0x98];
        *(longlong **)(param_3[100] + 0x30) = local_20;
        (**(code **)(*(longlong *)local_20[0x17] + 0x10))((longlong *)local_20[0x17],param_1[0x17]);
        FUN_01be4290(local_20,param_2);
        *(undefined1 *)((longlong)local_20 + 0x592) = 1;
        local_20[0xb6] = (longlong)param_3;
        local_21 = *(undefined1 *)(param_3[100] + 0x58);
        (**(code **)(*local_20 + 0x308))(local_20,param_3[100]);
        (**(code **)(*(longlong *)param_3[100] + 0x60))((longlong *)param_3[100],local_21);
        if ((((*(char *)((longlong)param_1 + 0x591) == '\0') &&
             (cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar1 == '\0')) &&
            (lVar4 = FUN_01c01290(local_20), lVar4 != 0)) &&
           (lVar4 = FUN_01bfaa70(param_3[100]), *(char *)(lVar4 + 0x4a) != '\0')) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        *(char *)((longlong)local_20 + 0x591) = cVar1;
        if (cVar1 != '\0') {
          (**(code **)(*local_20 + 0x3d8))(local_20,0);
        }
        FUN_00655f80(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
        uVar3 = (**(code **)(*param_2 + 0x2c8))(param_2);
        (**(code **)(*local_20 + 800))(local_20,uVar3);
        FUN_00654410(local_20);
        FUN_0064e700(local_20);
        cVar1 = FUN_004113d0(param_3,&PTR_FUN_01bdff58);
        if (cVar1 != '\0') {
          (**(code **)(*param_3 + 0x180))(param_3);
        }
        if (((char)local_20[0xb2] == '\0') || (*(char *)((longlong)local_20 + 0x591) != '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = (undefined4)CONCAT71((int7)((ulonglong)local_20 >> 8),1);
        }
        FUN_00742eb0(param_1[199],uVar3);
        return local_20;
      }
      return local_20;
    }
    return local_20;
  }
  return local_20;
}

