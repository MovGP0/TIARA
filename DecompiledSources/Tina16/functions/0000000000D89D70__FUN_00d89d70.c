/* Ghidra address: 00d89d70 */
/* Ghidra symbol: FUN_00d89d70 */


void FUN_00d89d70(longlong param_1,char param_2,longlong *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [28];
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 uStack_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x70);
  if ((param_2 != '\0') && (param_2 == '\x01')) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x78);
  }
  uVar1 = (ulonglong)(byte)local_2c;
  uVar6 = (undefined7)((ulonglong)&stack0xffffffffffffffd8 >> 8);
  if (uVar1 < 8) {
    if (uVar1 == 7) {
      plVar2 = (longlong *)FUN_00d77610(uVar3,&DAT_00d8a5fc);
      if (plVar2 == (longlong *)0x0) {
        FUN_00d57e00(param_3,&local_3c,1,1,0);
      }
      else {
        if (local_2c._1_1_ == '\x03') {
          uVar1 = CONCAT71(uVar6,8);
        }
        else if (local_2c._1_1_ == '\x02') {
          uVar1 = CONCAT71(uVar6,7);
        }
        else if (local_2c._1_1_ == '\x01') {
          uVar1 = CONCAT71(uVar6,5);
        }
        else {
          uVar1 = 0;
        }
        FUN_00423010(&local_4c,0,0,*(undefined4 *)((longlong)plVar2 + 0x84),(int)plVar2[0x11]);
        FUN_00d57690(local_98,&local_4c,&local_3c);
        (**(code **)(*plVar2 + 0x98))(plVar2,uVar1 & 0xffffffff);
        FUN_00d77b90(plVar2,&local_4c);
        (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
      }
    }
    else {
      local_2c._1_1_ = (char)((uint)local_2c >> 8);
      if (uVar1 == 0) {
        if (local_2c._1_1_ == '\x03') {
          uVar1 = CONCAT71(uVar6,8);
        }
        else if (local_2c._1_1_ == '\x02') {
          uVar1 = CONCAT71(uVar6,7);
        }
        else if (local_2c._1_1_ == '\x01') {
          uVar1 = CONCAT71(uVar6,5);
        }
        else {
          uVar1 = 0;
        }
        if (param_2 == '\0') {
          plVar2 = (longlong *)FUN_00d77610(uVar3,param_5);
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"Item");
          }
        }
        else if (param_2 == '\x01') {
          plVar2 = (longlong *)FUN_00d77610(uVar3,param_5);
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"Item");
          }
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d77b90(plVar2,&local_3c);
          (**(code **)(*plVar2 + 0x98))(plVar2,uVar1 & 0xffffffff);
          (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
        }
      }
      else if (uVar1 == 1) {
        if (param_2 == '\0') {
          plVar2 = (longlong *)FUN_00d77610(uVar3,L"separator");
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"item");
          }
        }
        else if (param_2 == '\x01') {
          plVar2 = (longlong *)FUN_00d77610(uVar3,param_5);
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"Separator");
          }
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"item");
          }
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d77b90(plVar2,&local_3c);
          (**(code **)(*plVar2 + 0x98))(plVar2,0);
          (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
        }
      }
      else if (uVar1 - 3 < 2) {
        if (local_2c._1_1_ == '\x03') {
          uVar1 = CONCAT71(uVar6,8);
        }
        else if (local_2c._1_1_ == '\x02') {
          uVar1 = CONCAT71(uVar6,7);
        }
        else if (local_2c._1_1_ == '\x01') {
          uVar1 = CONCAT71(uVar6,5);
        }
        else {
          uVar1 = 0;
        }
        if (param_2 == '\0') {
          plVar2 = (longlong *)FUN_00d77610(uVar3,L"item");
        }
        else if (param_2 == '\x01') {
          if ((byte)local_2c == 3) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"upbutton");
          }
          else {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"downbutton");
          }
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_00d77610(uVar3,L"item");
          }
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d77b90(plVar2,&local_3c);
          (**(code **)(*plVar2 + 0x98))(plVar2,uVar1 & 0xffffffff);
          uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
          if ((byte)local_2c < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)local_2c & 0x1f) &
                    0x18U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            if (local_2c._1_1_ == '\x03') {
              lVar4 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x25);
              uVar5 = *(undefined4 *)(lVar4 + 0x28);
            }
            else if (local_2c._1_1_ == '\x02') {
              lVar4 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x23);
              uVar5 = *(undefined4 *)(lVar4 + 0x28);
            }
            else if (local_2c._1_1_ == '\x01') {
              lVar4 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x24);
              uVar5 = *(undefined4 *)(lVar4 + 0x28);
            }
            else {
              lVar4 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x22);
              uVar5 = *(undefined4 *)(lVar4 + 0x28);
            }
            FUN_00423010(&local_4c,0,0,7,4);
            FUN_00d57690(local_98,&local_4c,&local_3c);
            FUN_005fd670(param_3[0xf],0);
            FUN_005fd4e0(param_3[0xf],uVar5);
            FUN_005fdcb0(param_3[0x10],0);
            FUN_005fdab0(param_3[0x10],uVar5);
            if ((byte)local_2c == '\x03') {
              iStack_58 = local_40 + -1;
              local_54 = local_4c;
              local_5c = local_44 + -1;
              local_64 = (local_5c + local_4c) / 2;
              uStack_60 = local_48;
              local_b0 = CONCAT44(iStack_58,local_4c);
              local_a8 = CONCAT44(iStack_58,local_5c);
              local_a0 = CONCAT44(local_48,local_64);
              iStack_50 = iStack_58;
              (**(code **)(*param_3 + 0xd8))(param_3,&local_b0,2);
            }
            else {
              local_6c = local_4c;
              uStack_68 = local_48;
              local_74 = local_44 + -1;
              uStack_70 = local_48;
              local_7c = (local_74 + local_4c) / 2;
              iStack_78 = local_40 + -1;
              local_a8 = CONCAT44(local_48,local_74);
              local_a0 = CONCAT44(iStack_78,local_7c);
              (**(code **)(*param_3 + 0xd8))(param_3,&local_b0,2);
            }
          }
        }
      }
    }
  }
  else if (uVar1 == 8) {
    plVar2 = (longlong *)FUN_00d77610(uVar3,L"Restore");
    if (plVar2 == (longlong *)0x0) {
      FUN_00d57e00(param_3,&local_3c,1,3,0);
    }
    else {
      if (local_2c._1_1_ == '\x03') {
        uVar1 = CONCAT71(uVar6,8);
      }
      else if (local_2c._1_1_ == '\x02') {
        uVar1 = CONCAT71(uVar6,7);
      }
      else if (local_2c._1_1_ == '\x01') {
        uVar1 = CONCAT71(uVar6,5);
      }
      else {
        uVar1 = 0;
      }
      FUN_00423010(&local_4c,0,0,*(undefined4 *)((longlong)plVar2 + 0x84),(int)plVar2[0x11]);
      FUN_00d57690(local_98,&local_4c,&local_3c);
      (**(code **)(*plVar2 + 0x98))(plVar2,uVar1 & 0xffffffff);
      FUN_00d77b90(plVar2,&local_4c);
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
    }
  }
  else if (uVar1 == 9) {
    plVar2 = (longlong *)FUN_00d77610(uVar3,L"Close");
    if (plVar2 == (longlong *)0x0) {
      FUN_00d57e00(param_3,&local_3c,1,0,0);
    }
    else {
      if (local_2c._1_1_ == '\x03') {
        uVar1 = CONCAT71(uVar6,8);
      }
      else if (local_2c._1_1_ == '\x02') {
        uVar1 = CONCAT71(uVar6,7);
      }
      else if (local_2c._1_1_ == '\x01') {
        uVar1 = CONCAT71(uVar6,5);
      }
      else {
        uVar1 = 0;
      }
      FUN_00423010(&local_4c,0,0,*(undefined4 *)((longlong)plVar2 + 0x84),(int)plVar2[0x11]);
      FUN_00d57690(local_98,&local_4c,&local_3c);
      (**(code **)(*plVar2 + 0x98))(plVar2,uVar1 & 0xffffffff);
      FUN_00d77b90(plVar2,&local_4c);
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
    }
  }
  return;
}

