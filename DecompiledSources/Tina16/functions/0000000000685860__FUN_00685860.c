/* Ghidra address: 00685860 */
/* Ghidra symbol: FUN_00685860 */


void FUN_00685860(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_00684f30(param_1);
  lVar3 = FUN_0065b870(param_1);
  param_1[0xa1] = lVar3;
  uVar4 = 0;
  if (param_1[0xaa] != 0) {
    (**(code **)(*(longlong *)param_1[0x9e] + 0x10))((longlong *)param_1[0x9e],param_1[0xaa]);
    uVar4 = FUN_00410f20(param_1[0xaa]);
    param_1[0xaa] = 0;
    if (*(int *)((longlong)param_1 + 0x524) != -1) {
      iVar1 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
      if (iVar1 < *(int *)((longlong)param_1 + 0x524)) {
        uVar2 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
        *(undefined4 *)((longlong)param_1 + 0x524) = uVar2;
      }
      uVar4 = FUN_0065b870(param_1);
      uVar4 = thunk_FUN_041b2403(uVar4,0x14e,(longlong)*(int *)((longlong)param_1 + 0x524),0);
      *(undefined4 *)((longlong)param_1 + 0x524) = 0xffffffff;
    }
  }
  if (*(byte *)((longlong)param_1 + 0x54a) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) <<
             (*(byte *)((longlong)param_1 + 0x54a) & 0x1f) & 3U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar4 = FUN_0065b870(param_1);
    lVar3 = thunk_FUN_03f32902(uVar4,5);
    if (lVar3 != 0) {
      if (*(char *)((longlong)param_1 + 0x54a) == '\x01') {
        param_1[0xa0] = lVar3;
        lVar5 = thunk_FUN_04118143(param_1[0xa0],0xfffffffc);
        param_1[0xa3] = lVar5;
        thunk_FUN_03c9d277(param_1[0xa0],0xfffffffc,param_1[0xa6]);
        lVar3 = thunk_FUN_03f32902(lVar3,2);
      }
      param_1[0x9f] = lVar3;
      lVar3 = thunk_FUN_04118143(param_1[0x9f],0xfffffffc);
      param_1[0xa2] = lVar3;
      thunk_FUN_03c9d277(param_1[0x9f],0xfffffffc,param_1[0xa5]);
    }
  }
  if ((*PTR_DAT_02003210 != '\0') && (param_1[0x9f] != 0)) {
    thunk_FUN_041b2403(param_1[0x9f],0xd3,3,0);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}

