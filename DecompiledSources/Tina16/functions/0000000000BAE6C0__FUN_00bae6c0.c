/* Ghidra address: 00bae6c0 */
/* Ghidra symbol: FUN_00bae6c0 */


undefined8 * FUN_00bae6c0(longlong *param_1,undefined8 *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_88 = (longlong *)0x0;
  local_90 = 0;
  local_98 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  puVar5 = param_2;
  bVar1 = FUN_00baed60(param_1);
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      (**(code **)*param_1)(param_1,&local_50);
      (**(code **)(*param_1 + 8))(param_1,&local_58);
      puVar5 = param_2;
      FUN_00bb3600(param_1[3],param_2,local_50,local_58);
    }
    else if (bVar1 == 1) {
      (**(code **)*param_1)(param_1,local_30);
      puVar5 = param_2;
      FUN_00bb3560(param_1[3],param_2,local_30[0]);
    }
    else if (bVar1 == 2) {
      (**(code **)*param_1)(param_1,&local_38);
      puVar5 = param_2;
      FUN_00bb3370(param_1[3],param_2,local_38);
    }
    else if (bVar1 == 3) {
      (**(code **)(*param_1 + 8))(param_1,&local_40);
      puVar5 = param_2;
      FUN_00bb3670(param_1[3],param_2,local_40);
    }
    else if (bVar1 == 4) {
      (**(code **)(*param_1 + 8))(param_1,&local_48);
      puVar5 = param_2;
      FUN_00bb33d0(param_1[3],param_2,local_48);
    }
  }
  else if (bVar1 == 8) {
    (**(code **)(*param_1 + 8))(param_1,&local_60);
    puVar5 = param_2;
    FUN_00bb3430(param_1[3],param_2,local_60);
  }
  else if (bVar1 == 9) {
    FUN_00bac3d0(param_2);
  }
  else if (bVar1 == 0xb) {
    puVar5 = param_2;
    FUN_00bb3500(param_1[3],param_2);
  }
  else if (bVar1 == 0xc) {
    puVar5 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
    uVar4 = FUN_0044d490(&PTR_FUN_00b9ee48,puVar5,L"Invalid operation: cannot clone Notation node");
    FUN_004134c0(uVar4);
  }
  bVar1 = FUN_00baed60(param_1);
  if (bVar1 < 0x10) {
    bVar7 = ((int)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),1) << (bVar1 & 0x1f) & 0x19cU) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    (**(code **)(*param_1 + 8))(param_1,&local_68);
    (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,local_68);
  }
  cVar2 = FUN_00bae3b0(param_1);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(longlong *)param_1[5] + 0x18))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_70);
        (**(code **)(*(longlong *)param_1[5] + 0x20))((longlong *)param_1[5],&local_80,iVar6);
        (**(code **)(*local_80 + 0xa8))(local_80,&local_78,param_3);
        (**(code **)(*local_70 + 0x30))(local_70,local_78);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if ((param_3 != '\0') && (cVar2 = FUN_00baeff0(param_1), cVar2 != '\0')) {
    iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x18))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_88);
        (**(code **)(*(longlong *)param_1[6] + 0x20))((longlong *)param_1[6],&local_98,iVar6);
        (**(code **)(*local_98 + 0xa8))(local_98,&local_90,param_3);
        (**(code **)(*local_88 + 0x30))(local_88,local_90);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00417840(&local_98,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_88);
  FUN_00417840(&local_80,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,8);
  return param_2;
}

