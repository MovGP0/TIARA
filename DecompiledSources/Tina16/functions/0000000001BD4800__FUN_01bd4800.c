/* Ghidra address: 01bd4800 */
/* Ghidra symbol: FUN_01bd4800 */


void FUN_01bd4800(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [12];
  longlong local_20;
  
  local_50 = auStack_78;
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  uVar6 = FUN_005ffa40(param_1[0x62]);
  FUN_005ffb10(local_20,uVar6);
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      uVar6 = FUN_01c07120(param_1);
      lVar8 = FUN_01c03e40(uVar6);
      FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),*(undefined4 *)(lVar8 + 0x94));
    }
    else {
      uVar6 = FUN_01c07120(param_1);
      lVar8 = FUN_01c03e40(uVar6);
      FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),*(undefined4 *)(lVar8 + 0x9c));
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      plVar7 = (longlong *)FUN_00781840();
      (**(code **)(*plVar7 + 0x200))(plVar7,local_2c,5);
    }
    else if ((char)param_1[0x6d] == '\0') {
      if (*(char *)((longlong)param_1 + 0x363) == '\0') {
        plVar7 = (longlong *)FUN_00781840();
        (**(code **)(*plVar7 + 0x200))(plVar7,local_2c,2);
      }
      else {
        plVar7 = (longlong *)FUN_00781840();
        (**(code **)(*plVar7 + 0x200))(plVar7,local_2c,3);
      }
    }
    else {
      plVar7 = (longlong *)FUN_00781840();
      (**(code **)(*plVar7 + 0x200))(plVar7,local_2c,4);
    }
    uVar6 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar6,local_2c,2,&local_30);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        uVar6 = FUN_00781840();
        local_30 = FUN_007793c0(uVar6,0xff000011);
      }
      else {
        uVar6 = FUN_00781840();
        local_30 = FUN_007793c0(uVar6,0xff000012);
      }
    }
    FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),local_30);
  }
  iVar2 = FUN_0064d0b0(param_1);
  iVar3 = (**(code **)(*param_1 + 0x280))(param_1);
  iVar4 = FUN_0040c770((double)*(float *)(param_1 + 0x61) * 2.0);
  local_34 = ((iVar2 - iVar3 / 2) - iVar4) + -1;
  iVar2 = FUN_0064d120(param_1,(longlong)iVar3 % 2 & 0xffffffff);
  local_3c = iVar2 / 2 + -1;
  local_40 = local_34;
  local_38 = local_3c;
  uVar5 = FUN_0040c770((double)*(float *)(param_1 + 0x61) * 2.0,(longlong)iVar2 % 2 & 0xffffffff);
  FUN_00635a10(local_20,3,&local_40,uVar5);
  FUN_005ffb10(local_20,0);
  FUN_00410f20(local_20);
  return;
}

