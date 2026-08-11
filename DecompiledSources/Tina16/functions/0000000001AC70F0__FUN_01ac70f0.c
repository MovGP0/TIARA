/* Ghidra address: 01ac70f0 */
/* Ghidra symbol: FUN_01ac70f0 */


void FUN_01ac70f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x728) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x728),iVar5);
      lVar4 = *(longlong *)(lVar4 + 0xe0);
      FUN_01cc0ae0(lVar4,local_30);
      iVar3 = FUN_004413f0(&DAT_01ac74cc,local_30[0]);
      if (0 < iVar3) {
        FUN_00416dc0(local_30,local_30[0],1,iVar3 + -1);
      }
      if (((*(char *)(lVar4 + 8) == '\0') &&
          (cVar2 = FUN_004113d0(lVar4,&PTR_FUN_01cb38a0), cVar2 != '\0')) &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4f0),
         iVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_30[0]), iVar3 == -1)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (PTR_DAT_02004010[3] == '\x03') {
    FUN_01ac6f20(local_40,3,0,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,0,local_40[0]);
    FUN_01ac6f20(&local_48,3,1,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,1,local_48);
    FUN_01ac6f20(&local_50,3,2,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,2,local_50);
    FUN_01ac6f20(&local_58,3,3,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,3,local_58);
    FUN_01ac6f20(&local_60,3,4,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,4,local_60);
    FUN_01ac6f20(&local_68,3,5,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,5,local_68);
  }
  else {
    FUN_01ac6f20(&local_70,4,0,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,0,local_70);
    FUN_01ac6f20(&local_78,4,1,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,1,local_78);
    FUN_01ac6f20(&local_80,4,2,&LAB_01ac74dc);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),0,2,local_80);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_88,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_88);
  FUN_0064cf60(param_1,0x47b);
  FUN_00414560(&local_88,10);
  FUN_00414480(local_30);
  return;
}

