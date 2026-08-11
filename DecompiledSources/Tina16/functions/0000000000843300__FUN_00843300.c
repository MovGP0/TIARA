/* Ghidra address: 00843300 */
/* Ghidra symbol: FUN_00843300 */


void FUN_00843300(longlong param_1,undefined8 *param_2,uint param_3,byte param_4)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res18;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 *local_90;
  undefined8 *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined1 local_64 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_2c;
  
  local_90 = auStack_c8;
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = (longlong *)FUN_00781840();
  if ((*(char *)(param_1 + 0x55c) == '\x01') && ((param_4 & 4) != 0)) {
    local_58 = local_48;
    uStack_50 = local_40;
    local_40 = CONCAT44(local_40._4_4_ + 1,(int)local_40 + 1);
    cVar1 = FUN_00781870();
    if (cVar1 != '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar2)(param_1);
      if (cVar1 != '\0') {
        FUN_00423b50(&local_48,1,0);
      }
    }
    (**(code **)(*local_38 + 0x130))
              (local_38,local_64,
               (&DAT_01e19608)
               [(ulonglong)((param_4 & 0x20) != 0) + (ulonglong)((param_4 & 0x10) != 0) * 2]);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_2c = thunk_FUN_03b57162(uVar3);
    local_78 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_a8 = &local_58;
    local_a0 = 0;
    local_80 = local_a8;
    FUN_00778dc0(local_38,local_78,local_64,&local_48);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_0402759f(uVar3,local_2c);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
    cVar1 = FUN_007790b0(local_38,local_64,2,&local_68);
    if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),local_68);
    }
  }
  else if ((*(char *)(param_1 + 0x55c) == '\x02') && ((param_4 & 4) != 0)) {
    if ((*(uint *)(param_1 + 0x4d4) & 1) == 0) {
      local_40 = CONCAT44(local_40._4_4_,(int)local_40 + 1);
    }
    if ((*(uint *)(param_1 + 0x4d4) & 2) == 0) {
      local_40 = CONCAT44(local_40._4_4_ + 1,(int)local_40);
    }
    if (((param_4 & 0x10) == 0) && ((param_4 & 0x20) == 0)) {
      local_70 = *(uint *)(param_1 + 0x4cc);
      local_6c = *(uint *)(param_1 + 0x4c8);
    }
    else if ((param_4 & 0x20) == 0) {
      local_70 = FUN_00635840(*(undefined4 *)(param_1 + 0x4cc),0x13);
      local_6c = FUN_00635840(*(undefined4 *)(param_1 + 0x4c8),0x13);
    }
    else {
      local_70 = *(uint *)(param_1 + 0x4c8);
      local_6c = *(uint *)(param_1 + 0x4cc);
    }
    cVar1 = (**(code **)(*local_38 + 0x98))(local_38);
    if (cVar1 != '\0') {
      (**(code **)(*local_38 + 0x130))
                (local_38,local_64,
                 (&DAT_01e1960c)
                 [(ulonglong)((param_4 & 0x20) != 0) + (ulonglong)((param_4 & 0x10) != 0) * 2]);
      cVar1 = FUN_007790b0(local_38,local_64,9,&local_68);
      if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
        local_70 = local_68;
      }
      cVar1 = FUN_007790b0(local_38,local_64,10,&local_68);
      if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
        local_6c = local_68;
      }
      cVar1 = FUN_007790b0(local_38,local_64,2,&local_68);
      if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),local_68);
      }
    }
    local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
    FUN_00636080(*(undefined8 *)(param_1 + 0x490),local_70,local_6c,&local_48);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
  }
  else {
    cVar1 = (**(code **)(*local_38 + 0x98))(local_38);
    local_res18 = param_3;
    if (cVar1 != '\0') {
      cVar1 = *(char *)(param_1 + 0x55c);
      if (cVar1 == '\0') {
        if ((param_4 & 4) == 0) {
          if (((param_4 & 1) == 0) || ((*(uint *)(param_1 + 0x4d4) & 0x20) == 0)) {
            lVar4 = 0;
          }
          else {
            lVar4 = 1;
          }
          (**(code **)(*local_38 + 0x130))(local_38,local_64,(&DAT_01e19618)[lVar4]);
        }
        else {
          (**(code **)(*local_38 + 0x130))
                    (local_38,local_64,
                     (&DAT_01e19610)
                     [(ulonglong)((param_4 & 0x20) != 0) + (ulonglong)((param_4 & 0x10) != 0) * 2]);
        }
      }
      else if (cVar1 == '\x01') {
        if (((param_4 & 1) == 0) || ((*(uint *)(param_1 + 0x4d4) & 0x20) == 0)) {
          lVar4 = 0;
        }
        else {
          lVar4 = 1;
        }
        (**(code **)(*local_38 + 0x130))(local_38,local_64,(&DAT_01e19614)[lVar4]);
      }
      else if (cVar1 == '\x02') {
        if (((param_4 & 1) == 0) || ((*(uint *)(param_1 + 0x4d4) & 0x20) == 0)) {
          lVar4 = 0;
        }
        else {
          lVar4 = 1;
        }
        (**(code **)(*local_38 + 0x130))(local_38,local_64,(&DAT_01e19616)[lVar4]);
      }
      if ((*(byte *)(param_1 + 0x2c8) & 2) != 0) {
        cVar1 = FUN_007790b0(local_38,local_64,1,&local_68);
        if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
          local_res18 = local_68;
        }
      }
    }
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),local_res18);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_48);
    if ((param_4 & 0x20) != 0) {
      cVar1 = FUN_00781870();
      if (cVar1 == '\0') {
        local_40 = CONCAT44(local_40._4_4_ + -1,(int)local_40 + -1);
        uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
        thunk_FUN_03998bad(uVar3,&local_48,8,3);
        uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
        thunk_FUN_03998bad(uVar3,&local_48,8,0xc);
      }
      else {
        FUN_007780e0(*(undefined8 *)(param_1 + 0x490),&local_48,2,0x10);
        FUN_007780e0(*(undefined8 *)(param_1 + 0x490),&local_48,2,0x80);
      }
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
    }
    cVar1 = (**(code **)(*local_38 + 0x98))(local_38);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c8) & 1) != 0)) {
      cVar1 = FUN_007790b0(local_38,local_64,2,&local_68);
      if ((cVar1 != '\0') && (local_68 != 0x1fffffff)) {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),local_68);
      }
    }
  }
  return;
}

