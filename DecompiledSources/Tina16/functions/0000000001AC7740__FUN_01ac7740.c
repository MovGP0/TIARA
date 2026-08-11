/* Ghidra address: 01ac7740 */
/* Ghidra symbol: FUN_01ac7740 */


void FUN_01ac7740(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  short local_a2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_30 = FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
  if (*(char *)(param_1 + 0x759) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x710) + 0xa9) == '\0') {
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0x9c) + *(int *)(*(longlong *)(param_1 + 0x710) + 0x9c));
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),1);
    *(undefined1 *)(param_1 + 0x758) = 1;
    plVar1 = *(longlong **)(param_1 + 0x6e8);
    uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_40,uVar2);
    local_a2 = FUN_01ac7590(*(undefined8 *)(param_1 + 0x728),local_40[0],param_1 + 0x730,
                            param_1 + 0x738);
    *(short *)(param_1 + 0x73a) = local_a2;
    if (local_a2 != 0) {
      local_48 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_58,0x110);
      FUN_00c54370(local_48,local_58);
      *(undefined1 *)(local_48 + 0x6c1) = 0;
      FUN_008059a0(local_48);
      local_b8 = local_40[0];
      local_b0 = local_30;
      FUN_01ac5e20(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730),
                   *(undefined2 *)(param_1 + 0x738),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x6f0) + 0x4a8));
      local_b8 = param_1 + 0x748;
      local_b0 = param_1 + 0x750;
      FUN_01ac6150(*(undefined8 *)(param_1 + 0x730),*(undefined2 *)(param_1 + 0x738),
                   *(undefined2 *)(param_1 + 0x73a),param_1 + 0x740);
      if (PTR_DAT_02004010[3] == '\x03') {
        FUN_01ac70b0(&local_60,*(undefined8 *)(param_1 + 0x748),*PTR_DAT_02005310);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,0,local_60);
        FUN_01ac70b0(&local_68,*(undefined8 *)(param_1 + 0x740),*PTR_DAT_02005310);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,1,local_68);
        FUN_01ac70b0(&local_70,*(double *)(param_1 + 0x748) - *(double *)(param_1 + 0x740),
                     *PTR_DAT_02005310);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,2,local_70);
        FUN_00848a70(*(undefined8 *)(param_1 + 0x718),3);
        if (*(short *)(param_1 + 0x738) == 1) {
          FUN_01ac70b0(&local_78,*(undefined8 *)(param_1 + 0x750),*PTR_DAT_02005310);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,3,local_78);
          FUN_01ac70b0(&local_80,*(double *)(param_1 + 0x748) - *(double *)(param_1 + 0x750),
                       *PTR_DAT_02005310);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,4,local_80);
          FUN_01ac70b0(&local_88,*(double *)(param_1 + 0x740) - *(double *)(param_1 + 0x750),
                       *PTR_DAT_02005310);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,5,local_88);
          FUN_00848a70(*(undefined8 *)(param_1 + 0x718),6);
        }
      }
      else {
        local_28 = FUN_01ac5d40(*(undefined8 *)(param_1 + 0x730),*(undefined2 *)(param_1 + 0x738),
                                *(undefined2 *)(param_1 + 0x73a));
        FUN_01ac70b0(&local_90,local_28,*PTR_DAT_02005310);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,0,local_90);
        if (*(ushort *)(param_1 + 0x73a) < 2) {
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,1,&DAT_01ac7ecc);
        }
        else {
          uVar3 = FUN_01ac5da0(*(undefined8 *)(param_1 + 0x730),*(undefined2 *)(param_1 + 0x738),
                               *(ushort *)(param_1 + 0x73a),local_28);
          FUN_01ac70b0(&local_98,uVar3,*PTR_DAT_02005310);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,1,local_98);
        }
        FUN_00848a70(*(undefined8 *)(param_1 + 0x718),2);
        if (*(short *)(param_1 + 0x738) == 1) {
          FUN_01ac70b0(&local_a0,*(undefined8 *)(param_1 + 0x750),*PTR_DAT_02005310);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x718),1,2,local_a0);
          FUN_00848a70(*(undefined8 *)(param_1 + 0x718),3);
        }
      }
      FUN_00410f20(local_48);
      if (1 < *(ushort *)(param_1 + 0x73a)) {
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x759) = 0;
  FUN_00414560(&local_a0,10);
  FUN_00414480(local_40);
  return;
}

