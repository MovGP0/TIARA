/* Ghidra address: 00d8f4f0 */
/* Ghidra symbol: FUN_00d8f4f0 */


undefined4
FUN_00d8f4f0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
            undefined1 param_5,int *param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff38;
  uint uVar7;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_34 = *param_3;
  local_2c = (undefined4)param_3[1];
  FUN_00423c20(&local_70,0,0);
  *(undefined8 *)param_6 = local_70;
  lVar6 = *(longlong *)(param_1 + 0x18 + (local_34 & 0xff) * 8);
  if (lVar6 == 0) {
    uVar2 = 0;
    if (param_4 == (undefined8 *)0x0) {
      FUN_00423010(&local_64,0,0,0,(ulonglong)uVar7 << 0x20);
      local_54 = local_64;
      local_4c = uStack_5c;
    }
    else {
      local_54 = *param_4;
      local_4c = param_4[1];
    }
    if ((0x4c < local_34._4_4_) && (local_34._4_4_ < 0x59)) {
      FUN_00498350(&local_54,0,0,100,100);
    }
    cVar1 = FUN_00d98b50(param_1);
    if (cVar1 != '\0') {
      if (local_34._4_4_ < 0x55) {
        if (local_34._4_4_ == 0x54) {
          (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                    (*(longlong **)(param_1 + 0x180),&local_44,0,&local_54,L"default");
          *param_6 = (int)local_4c - local_3c;
          param_6[1] = 0;
          uVar2 = 1;
        }
        else if (local_34._4_4_ == 3) {
          lVar3 = 0;
          lVar6 = 0;
          if ((byte)local_2c < 4) {
            lVar3 = FUN_00d8ed60(param_1,L"CheckBox",L"Checked");
            cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00d606b0);
            if (cVar1 != '\0') {
              if ((byte)local_2c == '\0') {
                lVar6 = *(longlong *)(lVar3 + 0x120);
              }
              else if ((byte)local_2c == '\x01') {
                lVar6 = *(longlong *)(lVar3 + 0x138);
              }
              else if ((byte)local_2c == '\x02') {
                lVar6 = *(longlong *)(lVar3 + 0x140);
              }
              else if ((byte)local_2c == '\x03') {
                lVar6 = *(longlong *)(lVar3 + 0x148);
              }
            }
          }
          else if ((byte)((byte)local_2c - 5) < 4) {
            lVar3 = FUN_00d8ed60(param_1,L"CheckBox",L"Unchecked");
            cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00d606b0);
            if (cVar1 != '\0') {
              if ((byte)local_2c == '\x05') {
                lVar6 = *(longlong *)(lVar3 + 0x120);
              }
              else if ((byte)local_2c == '\x06') {
                lVar6 = *(longlong *)(lVar3 + 0x138);
              }
              else if ((byte)local_2c == '\a') {
                lVar6 = *(longlong *)(lVar3 + 0x140);
              }
              else if ((byte)local_2c == '\b') {
                lVar6 = *(longlong *)(lVar3 + 0x148);
              }
            }
          }
          else {
            lVar6 = lVar3;
            if ((byte)((byte)local_2c - 10) < 4) {
              lVar3 = FUN_00d8ed60(param_1,L"CheckBox",L"Mixed");
              cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00d606b0);
              if (cVar1 != '\0') {
                if ((byte)local_2c == '\n') {
                  lVar6 = *(longlong *)(lVar3 + 0x120);
                }
                else if ((byte)local_2c == '\v') {
                  lVar6 = *(longlong *)(lVar3 + 0x138);
                }
                else if ((byte)local_2c == '\f') {
                  lVar6 = *(longlong *)(lVar3 + 0x140);
                }
                else if ((byte)local_2c == '\r') {
                  lVar6 = *(longlong *)(lVar3 + 0x148);
                }
              }
            }
          }
          if (lVar6 == 0) {
            plVar5 = (longlong *)FUN_007810f0();
            (**(code **)(*plVar5 + 200))(plVar5,local_80,0x14);
            cVar1 = FUN_007792f0(plVar5,param_2,local_80,&local_54,param_5,param_6,0);
            if (cVar1 == '\0') {
              *param_6 = 0xd;
              param_6[1] = 0xd;
            }
          }
          else {
            uVar4 = FUN_004230d0(lVar6 + 0x10);
            *(undefined8 *)param_6 = uVar4;
          }
          uVar2 = 1;
        }
        else if (local_34._4_4_ == 0x4d) {
          (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                    (*(longlong **)(param_1 + 0x180),&local_44,0,&local_54,L"default");
          *param_6 = 0;
          param_6[1] = local_40;
          uVar2 = 1;
        }
        else if (local_34._4_4_ == 0x4e) {
          (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                    (*(longlong **)(param_1 + 0x180),&local_44,6,&local_54,L"default");
          *param_6 = 0;
          param_6[1] = local_40;
          uVar2 = 1;
        }
        else if (local_34._4_4_ == 0x53) {
          (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                    (*(longlong **)(param_1 + 0x180),&local_44,0,&local_54,L"default");
          *param_6 = local_44;
          param_6[1] = 0;
          uVar2 = 1;
        }
      }
      else if (local_34._4_4_ == 0x55) {
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                  (*(longlong **)(param_1 + 0x180),&local_44,0,&local_54,L"default");
        *param_6 = 0;
        param_6[1] = local_4c._4_4_ - local_38;
        uVar2 = 1;
      }
      else if (local_34._4_4_ == 0x56) {
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                  (*(longlong **)(param_1 + 0x180),&local_44,6,&local_54,L"default");
        *param_6 = local_44;
        param_6[1] = 0;
        uVar2 = 1;
      }
      else if (local_34._4_4_ == 0x57) {
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                  (*(longlong **)(param_1 + 0x180),&local_44,6,&local_54,L"default");
        *param_6 = (int)local_4c - local_3c;
        param_6[1] = 0;
        uVar2 = 1;
      }
      else if (local_34._4_4_ == 0x58) {
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))
                  (*(longlong **)(param_1 + 0x180),&local_44,6,&local_54,L"default");
        *param_6 = 0;
        param_6[1] = local_4c._4_4_ - local_38;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = (**(code **)(lVar6 + 0x40))
                      (lVar6,param_1,param_2,local_34._4_4_,CONCAT44(uVar7,local_2c),param_4,param_5
                       ,param_6,0);
  }
  return uVar2;
}

