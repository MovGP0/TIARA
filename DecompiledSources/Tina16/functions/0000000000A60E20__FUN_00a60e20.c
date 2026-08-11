/* Ghidra address: 00a60e20 */
/* Ghidra symbol: FUN_00a60e20 */


char FUN_00a60e20(short *param_1,char param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  short *local_res8 [2];
  uint *local_res18;
  undefined1 *local_res20;
  undefined1 auStack_98 [46];
  char local_6a;
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  local_6a = param_2;
  FUN_00414610(param_1);
  *local_res20 = 0xff;
  if (local_res8[0] == (short *)0x0) {
    local_69 = '\0';
  }
  else {
    FUN_0043ea00(&local_38,local_res8[0]);
    FUN_0043e1a0(&local_30,local_38);
    FUN_00414b50(local_res8,local_30);
    iVar2 = FUN_00416db0(local_res8[0],PTR_u______01e77178);
    if (iVar2 == 0) {
      *local_res18 = DAT_01e77180;
      local_69 = '\x01';
    }
    else {
      iVar2 = FUN_004170c0(&DAT_00a61274,local_res8[0],1);
      if (iVar2 < 1) {
        iVar2 = FUN_004170c0(&DAT_00a61288,local_res8[0],1);
        if ((iVar2 == 0) && (*local_res8[0] != 0x23)) {
          local_28 = 0xffffffff;
          plVar3 = (longlong *)FUN_00a60240();
          cVar1 = (**(code **)(*plVar3 + 0x140))(plVar3,local_res8[0],&local_28);
          if (cVar1 != '\0') {
            plVar3 = (longlong *)FUN_00a60240();
            puVar4 = (uint *)(**(code **)(*plVar3 + 0x30))(plVar3,local_28);
            *local_res18 = *puVar4;
            local_69 = '\x01';
            FUN_00414ad0(&PTR_u______01e77178,local_res8[0]);
            DAT_01e77180 = *local_res18;
            goto LAB_00a611f8;
          }
        }
        FUN_00414b50(local_20,local_res8[0]);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(&DAT_00a6129c,local_res8[0],1);
          if (iVar2 < 1) {
            if (local_6a != '\0') {
              local_69 = '\0';
              goto LAB_00a611f8;
            }
          }
          else {
            while (0 < iVar2) {
              FUN_00416e20(local_res8,1,iVar2);
              iVar2 = FUN_004170c0(&DAT_00a6129c,local_res8[0],1);
            }
          }
          FUN_0043ea00(&local_50,local_res8[0]);
          FUN_00414b50(local_res8,local_50);
          iVar2 = 0;
          if (local_res8[0] != (short *)0x0) {
            iVar2 = *(int *)(local_res8[0] + -2);
          }
          if (iVar2 < 4) {
            iVar2 = 0;
            if (local_res8[0] != (short *)0x0) {
              iVar2 = *(int *)(local_res8[0] + -2);
            }
            if (0 < iVar2) {
              do {
                FUN_00416780(&local_58,local_res8[0][(longlong)iVar2 + -1]);
                FUN_00416ea0(local_58,local_res8,iVar2);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
          FUN_009ec440(&local_68,local_res8[0]);
          FUN_00416ba0(&local_60,&DAT_00a612ac,local_68);
          local_69 = FUN_0043fc80(local_60,&local_24);
          if (local_69 != '\0') {
            *local_res18 = (local_24 & 0xff00) + (local_24 & 0xff) * 0x10000 +
                           ((local_24 & 0xff0000) >> 0x10) | *(uint *)PTR_DAT_02005078;
          }
        }
        else {
          FUN_00416dc0(&local_48,local_res8[0],iVar2 + 3,0xff);
          local_69 = FUN_00a60820(auStack_98,local_48);
        }
        if (local_69 != '\0') {
          FUN_00414ad0(&PTR_u______01e77178,local_20[0]);
          DAT_01e77180 = *local_res18;
        }
      }
      else {
        FUN_00416dc0(&local_40,local_res8[0],iVar2 + 3,0xff);
        local_69 = FUN_00a60350(auStack_98,local_40);
        if (local_69 != '\0') {
          FUN_00414ad0(&PTR_u______01e77178,local_20[0]);
          DAT_01e77180 = *local_res18;
        }
      }
    }
  }
LAB_00a611f8:
  FUN_00414560(&local_68,8);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return local_69;
}

