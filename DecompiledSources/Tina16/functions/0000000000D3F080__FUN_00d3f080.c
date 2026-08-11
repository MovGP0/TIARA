/* Ghidra address: 00d3f080 */
/* Ghidra symbol: FUN_00d3f080 */


undefined4 * FUN_00d3f080(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_3c [12];
  undefined4 local_30;
  int local_2c;
  
  FUN_004238d0(param_2,0,0,0,in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  cVar2 = FUN_00d3f270(param_1);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar4 + 0x90))(plVar4);
    if (cVar2 != '\0') {
      cVar2 = FUN_00d3f400(param_1);
      uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (cVar2 == '\0') {
        uVar6 = (undefined4)CONCAT71(uVar7,2);
      }
      else {
        uVar6 = (undefined4)CONCAT71(uVar7,5);
      }
      plVar4 = (longlong *)FUN_00781840();
      lVar1 = *plVar4;
      (**(code **)(lVar1 + 0x228))(plVar4,local_3c,uVar6);
      uVar5 = FUN_00781840();
      FUN_00779290(uVar5,0,local_3c,1,&local_30,0);
      param_2[1] = local_2c;
      iVar3 = FUN_00d3f040(param_1);
      if (0x60 < iVar3) {
        iVar3 = thunk_FUN_03f3ed25(param_2[1],iVar3,0x60);
        param_2[1] = iVar3;
        *(int *)(param_1 + 0x114) = iVar3 - local_2c;
      }
      cVar2 = FUN_00d3f400(param_1);
      uVar7 = (undefined7)((ulonglong)lVar1 >> 8);
      if (cVar2 == '\0') {
        uVar6 = (undefined4)CONCAT71(uVar7,0x14);
      }
      else {
        uVar6 = (undefined4)CONCAT71(uVar7,0x1a);
      }
      plVar4 = (longlong *)FUN_00781840();
      lVar1 = *plVar4;
      (**(code **)(lVar1 + 0x228))(plVar4,local_3c,uVar6);
      uVar5 = FUN_00781840();
      FUN_00779290(uVar5,0,local_3c,1,&local_30,0);
      *param_2 = local_30;
      cVar2 = FUN_00d3f400(param_1);
      uVar7 = (undefined7)((ulonglong)lVar1 >> 8);
      if (cVar2 == '\0') {
        uVar6 = (undefined4)CONCAT71(uVar7,0x16);
      }
      else {
        uVar6 = (undefined4)CONCAT71(uVar7,0x1c);
      }
      plVar4 = (longlong *)FUN_00781840();
      lVar1 = *plVar4;
      (**(code **)(lVar1 + 0x228))(plVar4,local_3c,uVar6);
      uVar5 = FUN_00781840();
      FUN_00779290(uVar5,0,local_3c,1,&local_30,0);
      param_2[2] = local_30;
      cVar2 = FUN_00d3f400(param_1);
      uVar7 = (undefined7)((ulonglong)lVar1 >> 8);
      if (cVar2 == '\0') {
        uVar6 = (undefined4)CONCAT71(uVar7,0x18);
      }
      else {
        uVar6 = (undefined4)CONCAT71(uVar7,0x1e);
      }
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 0x228))(plVar4,local_3c,uVar6);
      uVar5 = FUN_00781840();
      FUN_00779290(uVar5,0,local_3c,1,&local_30,0);
      param_2[3] = local_2c;
    }
  }
  return param_2;
}

