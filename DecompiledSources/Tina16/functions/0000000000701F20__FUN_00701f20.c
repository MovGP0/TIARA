/* Ghidra address: 00701f20 */
/* Ghidra symbol: FUN_00701f20 */


undefined1 FUN_00701f20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int extraout_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int extraout_var;
  undefined8 uVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  int iStack_44;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1a;
  char local_19;
  
  local_70 = auStack_98;
  local_1a = 0;
  if (param_2 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    if (param_2[0x66] == 0) {
      plVar1 = (longlong *)param_2[0x65];
      if (plVar1 == (longlong *)0x0) {
        FUN_00702390(0,auStack_98);
        return local_1a;
      }
      local_70 = auStack_98;
      (**(code **)(*plVar1 + 0xb0))(plVar1);
      FUN_00701e30(param_1);
      lVar6 = FUN_007e8760(&PTR_FUN_007dba80,1,param_1);
      param_1[0xc1] = lVar6;
      local_40 = FUN_007e3880(param_2[0x65]);
      if (local_40 != 0) {
        FUN_007e7030(param_1[0xc1],*(undefined1 *)(local_40 + 0x78));
      }
      FUN_007e8920(param_1[0xc1],*(undefined4 *)(param_2[0x65] + 0xac));
      *(undefined1 *)(param_1[0xc1] + 0xe0) = 1;
      local_28 = FUN_007e3880(param_2[0x65]);
      if (local_28 != 0) {
        FUN_007e6a70(param_1[0xc1],*(undefined8 *)(local_28 + 0xa0));
      }
      lVar6 = param_2[0x65];
      param_1[0xc2] = lVar6;
      local_34 = FUN_007e2ef0(lVar6);
      local_34 = local_34 + -1;
      if (-1 < local_34) {
        do {
          local_30 = FUN_007e2f10(param_1[0xc2],local_34);
          FUN_007e3300(param_1[0xc2],local_34);
          FUN_007e31e0(*(undefined8 *)(param_1[0xc1] + 0x80),0,local_30);
          local_34 = local_34 + -1;
        } while (local_34 != -1);
      }
    }
    else {
      param_1[0xc1] = param_2[0x66];
      local_70 = auStack_98;
    }
    FUN_0064d3e0(param_1,0);
    *(longlong **)(param_1[0xc1] + 0xd8) = param_1;
    if ((*(char *)((longlong)param_2 + 0x31b) == '\0') && (param_2[0x65] == 0)) {
      local_19 = '\0';
    }
    else {
      local_19 = '\x01';
    }
    if (local_19 != '\0') {
      DAT_02012490 = FUN_006fa830(param_2);
      DAT_02012480 = param_1;
      FUN_00701c50();
    }
    FUN_0064fca0(param_1,0x448,0xffffffffffffffff,0);
    local_58 = FUN_0064d120(param_2);
    local_5c = 0;
    local_54 = local_58;
    FUN_0064d1f0(param_2,&local_5c);
    local_48 = extraout_EAX;
    iStack_44 = extraout_var;
    cVar2 = FUN_007e6b10(param_1[0xc1]);
    if (cVar2 != '\0') {
      local_48 = local_48 + (int)param_2[0x13];
    }
    *(undefined1 *)((longlong)param_1 + 0x621) = 1;
    local_50 = FUN_00809b30(*(undefined8 *)PTR_DAT_02005950,&local_48,0);
    if (local_50 != 0) {
      iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0xf);
      iVar4 = FUN_007e2ef0(*(undefined8 *)(param_1[0xc1] + 0x80));
      iVar5 = FUN_008077b0(local_50);
      if (iVar5 < iVar3 * iVar4 + iStack_44) {
        iStack_44 = iStack_44 - *(int *)((longlong)param_2 + 0x9c);
      }
    }
    iVar3 = FUN_006d3e90();
    if (iVar3 == 0x50050) {
      (**(code **)(*param_2 + 0x180))(param_2);
    }
    (**(code **)(*(longlong *)param_1[0xc1] + 0xa8))((longlong *)param_1[0xc1],local_48,iStack_44);
    if (local_19 != '\0') {
      FUN_00701ca0();
    }
    param_1[0xc3] = (longlong)param_2;
    if (DAT_020124a8 != '\0') {
      iVar3 = FUN_006fa830(param_2);
      FUN_0064fca0(param_1,0x448,(longlong)iVar3,0);
    }
    local_1a = 1;
    uVar7 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar7,0x1400,0,0);
  }
  return local_1a;
}

