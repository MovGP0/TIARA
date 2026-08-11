/* Ghidra address: 00655080 */
/* Ghidra symbol: FUN_00655080 */


void FUN_00655080(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *local_2e0;
  undefined1 local_2d8 [8];
  code *local_2d0;
  undefined1 local_290 [8];
  uint local_288;
  longlong local_270;
  undefined1 local_260 [8];
  code *local_258;
  undefined8 local_248;
  undefined1 *local_220;
  undefined1 local_218 [520];
  
  local_2e0 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x1c0))(param_1,local_290);
  if ((local_270 == 0) && ((local_288 & 0x40000000) != 0)) {
    lVar6 = param_1[1];
    if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0x34) & 2) != 0)) {
      cVar2 = FUN_004113d0(lVar6,&PTR_FUN_00640c18);
      if (cVar2 != '\0') {
        local_270 = FUN_0065b870(lVar6);
        goto LAB_00655116;
      }
    }
    FUN_006482f0(PTR_PTR_02004550,param_1);
  }
LAB_00655116:
  param_1[0x8c] = (longlong)local_258;
  iVar4 = thunk_FUN_03975e2d(local_248,local_218,local_2d8);
  if ((iVar4 == 0) || (local_2d0 != FUN_00648420)) {
    if (iVar4 != 0) {
      thunk_FUN_041c8eb3(local_218,local_248);
    }
    local_258 = FUN_00648420;
    local_220 = local_218;
    sVar3 = thunk_FUN_03e7f392(local_260);
    if (sVar3 == 0) {
      FUN_00451a00();
    }
  }
  DAT_01df5b20 = param_1;
  (**(code **)(*param_1 + 0x1c8))(param_1,local_290);
  if (param_1[0x8d] == 0) {
    FUN_00451a00();
  }
  uVar5 = thunk_FUN_04118143(param_1[0x8d],0xfffffff0);
  if ((uVar5 & 0x40000000) != 0) {
    lVar6 = thunk_FUN_04118143(param_1[0x8d],0xfffffff4);
    if (lVar6 == 0) {
      thunk_FUN_03c9d277(param_1[0x8d],0xfffffff4,param_1[0x8d]);
    }
  }
  FUN_00442c30(param_1[0x58]);
  param_1[0x58] = 0;
  FUN_0065be30();
  uVar7 = FUN_005fc8c0(param_1[0x17]);
  FUN_0064fca0(param_1,0x30,uVar7,1);
  if (*(char *)((longlong)param_1 + 0xae) != '\0') {
    pcVar8 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar8)(param_1);
  }
  plVar1 = *(longlong **)(param_1[0x26] + 0x10);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x14) & 0x200000) != 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (((*(char *)(*(longlong *)PTR_DAT_02004030 + 0x2e9) != '\0') && (param_1[0x8d] != 0)) &&
     ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    FUN_0041b800(param_1 + 0x71);
    uVar7 = FUN_0041b800(param_1 + 0x71);
    uVar5 = thunk_FUN_041d73d1(PTR_DAT_02002fd8,0,5,&DAT_006553d8,uVar7);
    if ((uVar5 & 0x80000000) == 0) {
      cVar2 = FUN_00452430(param_1[0x71],&LAB_006553e8);
      if (cVar2 != '\0') {
        FUN_0041b890(&local_2e0,param_1[0x71],&LAB_006553e8);
        (**(code **)(*local_2e0 + 0x20))(local_2e0,param_1[0x8d]);
      }
    }
  }
  FUN_0041b800(&local_2e0);
  return;
}

