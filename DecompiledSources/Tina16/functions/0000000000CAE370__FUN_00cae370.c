/* Ghidra address: 00cae370 */
/* Ghidra symbol: FUN_00cae370 */


int FUN_00cae370(longlong *param_1,byte param_2,int param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  int local_res18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20 [2];
  
  local_50 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  if ((param_3 == -1) &&
     ((local_res18 = (int)param_1[0x26], local_res18 == -1 || (local_res18 == 0)))) {
    local_res18 = -2;
  }
  local_24 = 0;
  (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
  cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (cVar1 != '\0') {
    do {
      local_28 = 0;
      cVar1 = (**(code **)(*param_1 + 0x140))(param_1,local_res18);
      if (cVar1 == '\0') {
        if (param_4 != '\0') {
          FUN_0041ddd0(&local_70,PTR_PTR_02001988);
          uVar3 = FUN_0086dfd0(&PTR_FUN_00ca5d38,1,local_70);
          FUN_004134c0(uVar3);
        }
        local_24 = -1;
        goto code_r0x00cae791;
      }
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        if (param_2 != 0) {
          FUN_0041ddd0(&local_60,PTR_PTR_02002a48);
          uVar3 = FUN_0086dfd0(&PTR_FUN_00ca6a28,1,local_60);
          FUN_004134c0(uVar3);
        }
      }
      else {
        cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
        if (cVar1 == '\0') {
          if (param_2 != 0) {
            FUN_0041ddd0(&local_58,PTR_PTR_020033d0);
            uVar3 = FUN_0086dfd0(&PTR_FUN_00ca5bf8,1,local_58);
            FUN_004134c0(uVar3);
          }
        }
        else {
          FUN_00419260(local_20,&DAT_0086e978,1,(longlong)*(int *)((longlong)param_1 + 0x134));
          local_28 = (**(code **)(*param_1 + 0xd8))(param_1,local_20);
          if (0 < local_28) {
            FUN_00419260(local_20,&DAT_0086e978,1,(longlong)local_28);
            local_38 = (longlong *)param_1[0x22];
            if (local_38 != (longlong *)0x0) {
              (**(code **)(*local_38 + 0xa0))(local_38,local_20);
              local_40 = local_20[0];
              if (local_20[0] != 0) {
                local_40 = *(longlong *)(local_20[0] + -8);
              }
              local_28 = (int)local_40;
            }
            FUN_00c8b4d0(param_1[0x21],local_20[0],0xffffffff);
          }
          FUN_00419430(local_20,&DAT_0086e978);
        }
      }
      if (local_28 < 0) {
        local_2c = (**(code **)(*param_1 + 0xf0))(param_1,local_28);
        if (local_2c == 0x274c) {
          if (param_4 != '\0') {
            FUN_0041ddd0(&local_68,PTR_PTR_02001988);
            uVar3 = FUN_0086dfd0(&PTR_FUN_00ca5d38,1,local_68);
            FUN_004134c0(uVar3);
          }
          local_24 = -1;
          goto code_r0x00cae791;
        }
        *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
        (**(code **)(*param_1 + 0x120))(param_1);
        bVar2 = FUN_00cb0720(param_1);
        if ((param_2 & bVar2) != 0) {
          (**(code **)(*param_1 + 0xf8))(param_1,local_2c);
        }
        local_28 = 0;
      }
      else if (local_28 == 0) {
        *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
      }
      (**(code **)(*param_1 + 0x110))(param_1,param_2,0);
      local_24 = local_28;
      if ((local_28 != 0) || (cVar1 = (**(code **)(*param_1 + 0xe8))(param_1), cVar1 == '\0'))
      goto code_r0x00cae791;
    } while( true );
  }
  if (param_2 != 0) {
    FUN_0041ddd0(&local_78,PTR_PTR_02002a48);
    uVar3 = FUN_0086dfd0(&PTR_FUN_00ca6a28,1,local_78);
    FUN_004134c0(uVar3);
  }
code_r0x00cae791:
  FUN_00414560(&local_78,5);
  FUN_00419430(local_20,&DAT_0086e978);
  return local_24;
}

