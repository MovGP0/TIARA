/* Ghidra address: 01866a80 */
/* Ghidra symbol: FUN_01866a80 */


longlong * FUN_01866a80(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_018673a0(param_1,iVar6);
      uVar2 = (**(code **)(lVar4 + 0x98))(lVar4);
      cVar1 = FUN_01867400(param_1,param_3,uVar2);
      if (cVar1 != '\0') {
        if (param_2 == '\0') {
          uVar5 = FUN_018673a0(param_1,iVar6);
          FUN_00410ae0(uVar5,local_30);
          uVar5 = FUN_00410ad0(plVar3);
          (**(code **)(*plVar3 + 0x80))(plVar3,local_30[0],uVar5);
        }
        else if (param_2 == '\x01') {
          lVar4 = FUN_018673a0(param_1,iVar6);
          (**(code **)(lVar4 + 0x78))(lVar4,&local_38);
          uVar5 = FUN_00410ad0(plVar3);
          (**(code **)(*plVar3 + 0x80))(plVar3,local_38,uVar5);
        }
        else if (param_2 == '\x02') {
          lVar4 = FUN_018673a0(param_1,iVar6);
          (**(code **)(lVar4 + 0x80))(lVar4,&local_48);
          FUN_00416ba0(&local_40,&LAB_01866ca8,local_48);
          uVar5 = FUN_00410ad0(plVar3);
          (**(code **)(*plVar3 + 0x80))(plVar3,local_40,uVar5);
        }
        else if (param_2 == '\x03') {
          lVar4 = FUN_018673a0(param_1,iVar6);
          (**(code **)(lVar4 + 0x70))(lVar4,&local_50);
          uVar5 = FUN_00410ad0(plVar3);
          (**(code **)(*plVar3 + 0x80))(plVar3,local_50,uVar5);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_50,5);
  return plVar3;
}

