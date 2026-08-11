/* Ghidra address: 00c5a770 */
/* Ghidra symbol: FUN_00c5a770 */


void FUN_00c5a770(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int extraout_var;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  undefined1 *local_50;
  int local_44;
  int local_40;
  uint local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_50 = auStack_88;
  cVar1 = FUN_00781870();
  if ((cVar1 != '\0') && (param_1[0xf] != 0)) {
    cVar1 = FUN_004113d0(param_1[0xf],&PTR_FUN_00c57128);
    if ((cVar1 != '\0') && ((*(byte *)(param_1[0xf] + 0x2c8) & 2) != 0)) {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)FUN_00781840();
        (**(code **)(*plVar2 + 0x200))(plVar2,local_38,5);
      }
      else {
        if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          plVar2 = (longlong *)FUN_00781840();
          (**(code **)(*plVar2 + 0x200))(plVar2,local_38,4);
        }
        else if (*(char *)((longlong)param_1 + 0x339) == '\0') {
          plVar2 = (longlong *)FUN_00781840();
          (**(code **)(*plVar2 + 0x200))(plVar2,local_38,2);
        }
        else {
          plVar2 = (longlong *)FUN_00781840();
          (**(code **)(*plVar2 + 0x200))(plVar2,local_38,3);
        }
      }
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
      FUN_00498370(local_2c,0,0,(int)param_1[0x13]);
      uVar3 = FUN_005ffa40(param_1[0x62]);
      local_1c = thunk_FUN_03b57162(uVar3);
      if ((char)param_1[0x66] == '\0') {
        uVar3 = FUN_005ffa40(param_1[0x62]);
        FUN_006487e0(param_1,uVar3);
      }
      else {
        uVar3 = FUN_00781840();
        uVar4 = FUN_005ffa40(param_1[0x62]);
        local_68 = CONCAT71(local_68._1_7_,1);
        local_60 = 0;
        FUN_00778e90(uVar3,0,uVar4,0);
      }
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(param_1[0x62]);
      local_68 = 0;
      local_60 = local_60 & 0xffffffff00000000;
      FUN_00778dc0(uVar3,uVar4,local_38,local_2c);
      uVar3 = FUN_005ffa40(param_1[0x62]);
      thunk_FUN_0402759f(uVar3,local_1c);
      uVar3 = FUN_00781840();
      cVar1 = FUN_007790b0(uVar3,local_38,2,&local_3c);
      if (cVar1 == '\0') {
        uVar3 = FUN_00781840();
        local_3c = FUN_007793c0(uVar3,0xff000012);
      }
      FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),local_3c);
      local_44 = FUN_00423530(local_2c);
      local_44 = local_44 + -3;
      FUN_00423530(local_2c);
      local_40 = extraout_var + -2;
      if (*(char *)((longlong)param_1 + 0x349) == '\0') {
        FUN_00635a10(param_1[0x62],2,&local_44,3);
      }
      else {
        FUN_00635a10(param_1[0x62],3,&local_44,3);
      }
      goto LAB_00c5aa81;
    }
  }
  FUN_00829760(param_1);
LAB_00c5aa81:
  if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
    FUN_00498370(local_2c,0,0,(int)param_1[0x13]);
    thunk_FUN_04176532(local_2c,0xfffffffd,0xfffffffd);
    if (*(char *)((longlong)param_1 + 0x33a) == '\x02') {
      FUN_00429ca0(local_2c,1,1);
    }
    uVar3 = FUN_005ffa40(param_1[0x62]);
    thunk_FUN_03b3ef59(uVar3,local_2c);
  }
  return;
}

