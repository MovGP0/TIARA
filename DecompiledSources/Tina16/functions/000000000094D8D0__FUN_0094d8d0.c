/* Ghidra address: 0094d8d0 */
/* Ghidra symbol: FUN_0094d8d0 */


undefined8 FUN_0094d8d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  cVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  if (cVar1 == '\x01') {
    if ((char)param_1[8] == '\0') {
      local_28 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,L"xml:base");
    }
    else {
      local_28 = (longlong *)
                 (**(code **)(*param_1 + 0x2d0))
                           (param_1,L"http://www.w3.org/XML/1998/namespace",L"base");
    }
    if (local_28 == (longlong *)0x0) {
      lVar3 = (**(code **)(*param_1 + 0x170))(param_1);
      if (lVar3 == 0) {
        FUN_00414520(param_2);
      }
      else {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
        (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
      }
    }
    else {
      (**(code **)(*local_28 + 0x2e0))(local_28,&local_30);
      local_20 = (longlong *)FUN_008fe920(&PTR_FUN_008f9ee8,1);
      (**(code **)(*local_20 + 0x28))(local_20,local_30);
      if (*(char *)((longlong)local_20 + 0x33) == '\0') {
        (**(code **)(*local_28 + 0x108))(local_28,&local_38);
        FUN_008fdec0(local_38,local_30,param_2);
      }
      else {
        (**(code **)(*local_28 + 0x2e0))(local_28,param_2);
      }
      FUN_00410f20(local_20);
    }
    goto code_r0x0094dc85;
  }
  if (cVar1 != '\x02') {
    if (((byte)(cVar1 - 3U) < 5) || (cVar1 == '\n')) {
      lVar3 = (**(code **)(*param_1 + 0x170))(param_1);
      if (lVar3 == 0) {
        FUN_00414520(param_2);
      }
      else {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
        (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
      }
    }
    else {
      FUN_00414520(param_2);
    }
    goto code_r0x0094dc85;
  }
  FUN_00414520(param_2);
  lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar3 == 0) goto code_r0x0094dc85;
  (**(code **)(*param_1 + 0x150))(param_1,&local_48);
  iVar2 = FUN_00416420(local_48,L"http://www.w3.org/XML/1998/namespace");
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x148))(param_1,&local_50);
    iVar2 = FUN_00416420(local_50,L"base");
    if (iVar2 != 0) goto LAB_0094db9e;
LAB_0094dbfb:
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
    lVar3 = (**(code **)(*plVar4 + 0x170))(plVar4);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x170))(plVar4);
      (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
    }
  }
  else {
LAB_0094db9e:
    (**(code **)(*param_1 + 0x150))(param_1,&local_58);
    iVar2 = FUN_00416420(local_58,0);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0xe8))(param_1,&local_60);
      iVar2 = FUN_00416420(local_60,L"xml:base");
      if (iVar2 == 0) goto LAB_0094dbfb;
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
    (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
  }
code_r0x0094dc85:
  FUN_004145c0(&local_60,4);
  FUN_004145c0(&local_38,2);
  return param_2;
}

