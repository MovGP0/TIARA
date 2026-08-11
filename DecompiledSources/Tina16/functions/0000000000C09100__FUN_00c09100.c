/* Ghidra address: 00c09100 */
/* Ghidra symbol: FUN_00c09100 */


int FUN_00c09100(longlong *param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  byte local_res20;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  undefined1 *local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_33;
  char local_32;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_e8;
  local_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = 0;
  puVar2 = auStack_e8;
  if (param_1[0xc9] == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00be81b8,1,L"No search engine has been assigned");
    FUN_004134c0(uVar4);
    puVar2 = local_80;
  }
  local_80 = puVar2;
  local_38 = 0;
  local_58 = 0;
  if (param_2 != 0) {
    local_58 = *(int *)(param_2 + -4);
  }
  if (local_58 == 0) {
LAB_00c09986:
    FUN_00414560(&local_b0,2);
    FUN_00414560(&local_98,3);
    return local_38;
  }
  local_4d = (param_4 & 4) != 0;
  local_32 = (param_4 & 0x80) != 0;
  local_4f = (param_4 & 0x20) != 0;
  local_31 = (param_4 & 0x40) != 0;
  local_4e = (param_4 & 8) == 0;
  cVar3 = FUN_00bf2c80(param_1);
  local_res20 = param_4;
  if (cVar3 == '\0') {
    local_res20 = param_4 & 0xef;
  }
  if ((local_res20 & 0x10) == 0) {
    local_28 = 0x100000001;
    local_30._4_4_ = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
              ((longlong *)param_1[0x9d],&local_90,local_30._4_4_ + -1);
    local_70 = local_90;
    local_74 = 0;
    if (local_90 != 0) {
      local_74 = *(int *)(local_90 + -4);
    }
    local_30 = CONCAT44(local_30._4_4_,local_74 + 1);
    if (local_4e != '\0') {
      if (local_4d == '\0') {
        local_28 = FUN_00bfaa10(param_1);
      }
      else {
        local_30 = FUN_00bfaa10(param_1);
      }
    }
    if (local_4d == '\0') {
      local_20 = local_28;
    }
    else {
      local_20 = local_30;
    }
  }
  else {
    local_28 = FUN_00bf2b30(param_1);
    local_30 = FUN_00bf2b90(param_1);
    if (*(char *)((longlong)param_1 + 0x5f5) == '\x01') {
      local_28 = CONCAT44(local_28._4_4_,1);
      local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      iVar5 = local_30._4_4_ + -1;
      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))((longlong *)param_1[0x9d],&local_88,iVar5);
      local_60 = local_88;
      local_64 = 0;
      if (local_88 != 0) {
        local_64 = *(int *)(local_88 + -4);
      }
      local_30 = CONCAT44(local_30._4_4_,local_64 + 1);
    }
    else if (*(char *)((longlong)param_1 + 0x5f5) == '\x02') {
      bVar1 = (int)local_30 < (int)local_28;
      if (bVar1) {
        FUN_00bcbe70(&local_28,&local_30);
      }
    }
    if (local_4d == '\0') {
      local_20 = local_28;
    }
    else {
      local_20 = local_30;
    }
  }
  (**(code **)(*(longlong *)param_1[0xc9] + 0xb0))((longlong *)param_1[0xc9],local_res20);
  (**(code **)(*(longlong *)param_1[0xc9] + 0x90))((longlong *)param_1[0xc9],param_2);
  local_40 = 0;
  (**(code **)(*param_1 + 0x2f8))(param_1,0);
  if ((local_31 == '\0') || (local_32 != '\0')) {
    local_33 = '\0';
  }
  else {
    FUN_00bf3750(param_1);
    FUN_00c08780(param_1);
    local_33 = '\x01';
  }
LAB_00c0990f:
  if ((local_28._4_4_ <= local_20._4_4_) && (local_20._4_4_ <= local_30._4_4_)) {
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
              ((longlong *)param_1[0x9d],&local_98,local_20._4_4_ + -1);
    local_4c = (**(code **)(*(longlong *)param_1[0xc9] + 0xb8))((longlong *)param_1[0xc9],local_98);
    local_54 = 0;
    if (local_4d == '\0') {
      local_44 = 0;
    }
    else {
      local_44 = (**(code **)(*(longlong *)param_1[0xc9] + 0xa8))((longlong *)param_1[0xc9]);
      local_44 = local_44 + -1;
    }
joined_r0x00c0955c:
    do {
      if (local_4c < 1) goto code_r0x00c098f0;
      local_48 = (**(code **)(*(longlong *)param_1[0xc9] + 0xa0))
                           ((longlong *)param_1[0xc9],local_44);
      local_48 = local_48 + local_54;
      local_3c = (**(code **)(*(longlong *)param_1[0xc9] + 0x98))
                           ((longlong *)param_1[0xc9],local_44);
      if (local_4d == '\0') {
        local_44 = local_44 + 1;
      }
      else {
        local_44 = local_44 + -1;
      }
      local_4c = local_4c + -1;
      cVar3 = FUN_00c09070(auStack_e8,local_48,local_48 + local_3c);
      if (cVar3 != '\0') {
        local_38 = local_38 + 1;
        local_20._0_4_ = local_48;
        FUN_00bfa470(param_1,&local_20);
        local_a0 = FUN_00bb7750(1,local_20._4_4_);
        (**(code **)(*param_1 + 0x2b8))(param_1,0,&local_a0);
        FUN_00c03730(param_1,1,0);
        local_20 = CONCAT44(local_20._4_4_,(int)local_20 + local_3c);
        FUN_00bfa6c0(param_1,&local_20);
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_20);
        if (local_4d == '\0') {
          (**(code **)(*param_1 + 0x2a8))(param_1,&local_20);
        }
        else {
          local_a0 = FUN_00bf2b30(param_1);
          (**(code **)(*param_1 + 0x2a8))(param_1,&local_a0);
        }
        if (local_4f != '\0' || local_31 != '\0') {
          if ((local_32 == '\0') || (param_1[0xe6] == 0)) {
            local_50 = '\x02';
          }
          else {
            local_c8 = local_48;
            local_50 = (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3,local_20._4_4_);
            if (local_50 == '\0') goto LAB_00c09978;
          }
          if (local_50 == '\x01') {
            local_38 = local_38 + -1;
          }
          else {
            if (local_50 == '\x03') {
              if (local_31 == '\0' || local_32 != '\0') {
                local_31 = '\x01';
                FUN_00bf3750(param_1);
              }
              local_32 = '\0';
              if (local_33 == '\0') {
                FUN_00c08780(param_1);
              }
              local_33 = '\x01';
            }
            FUN_00bf2ed0(param_1,&local_b0);
            (**(code **)(*(longlong *)param_1[0xc9] + 0xc0))
                      ((longlong *)param_1[0xc9],&local_a8,local_b0,param_3);
            FUN_00c08be0(param_1,local_a8);
            local_40 = *(int *)((longlong)param_1 + 0x4c4) - local_48;
          }
          if (local_4d == '\0') {
            FUN_00bfa9b0(param_1,local_48 + local_40);
            if ((((local_3c != local_40) && (local_50 != '\x01')) &&
                (local_54 = local_54 + (local_40 - local_3c),
                *(char *)((longlong)param_1 + 0x5f5) != '\x02')) &&
               (*(int *)((longlong)param_1 + 0x4cc) == local_30._4_4_)) {
              local_30 = CONCAT44(local_30._4_4_,(int)local_30 + (local_40 - local_3c));
              FUN_00bfa6c0(param_1,&local_30);
            }
          }
          if (local_31 != '\0') goto joined_r0x00c0955c;
        }
LAB_00c09978:
        FUN_00c099c0(0,local_80);
        goto LAB_00c09986;
      }
    } while( true );
  }
  if ((local_31 != '\0') && (local_32 == '\0')) {
    FUN_00bf28a0(param_1);
  }
  if (local_33 != '\0') {
    FUN_00c087b0(param_1);
  }
  (**(code **)(*param_1 + 0x2f8))(param_1,1);
  goto LAB_00c09986;
code_r0x00c098f0:
  local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20);
  if (local_4d == '\0') {
    local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20);
  }
  else {
    local_20 = CONCAT44(local_20._4_4_ + -1,(int)local_20);
  }
  goto LAB_00c0990f;
}

