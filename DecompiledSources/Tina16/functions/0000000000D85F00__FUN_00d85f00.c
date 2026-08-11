/* Ghidra address: 00d85f00 */
/* Ghidra symbol: FUN_00d85f00 */


void FUN_00d85f00(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  uStack_30 = param_4[3];
  cVar1 = FUN_00423b30(&local_48);
  if (cVar1 != '\0') {
    return;
  }
  lVar4 = 0;
  iVar2 = FUN_00416db0(param_5,L"default");
  if (iVar2 != 0) {
    lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (lVar4 != 0) goto LAB_00d85fef;
  uVar3 = param_2 & 0xff;
  if (uVar3 < 3) {
    if (uVar3 == 2) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
      goto LAB_00d85fef;
    }
    if (uVar3 == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
      goto LAB_00d85fef;
    }
    if (uVar3 == 1) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
      goto LAB_00d85fef;
    }
  }
  else {
    if (uVar3 == 4) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
      goto LAB_00d85fef;
    }
    if (uVar3 == 6) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x108);
      goto LAB_00d85fef;
    }
  }
  lVar4 = 0;
LAB_00d85fef:
  if (lVar4 != 0) {
    uVar5 = local_38 & 0xff;
    if (uVar5 < 6) {
      if (uVar5 == 5) {
        plVar6 = (longlong *)FUN_00d774e0(lVar4,4);
        if (plVar6 != (longlong *)0x0) {
          FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
          cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
          if (cVar1 != '\0') {
            if (local_38._1_1_ == '\x02') {
              *(undefined1 *)(plVar6 + 0x2b) = 2;
            }
            else if (local_38._1_1_ == '\x01') {
              *(undefined1 *)(plVar6 + 0x2b) = 1;
            }
            else {
              *(undefined1 *)(plVar6 + 0x2b) = 0;
            }
          }
          FUN_00d77b90(plVar6,&local_48);
          (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
        }
      }
      else if (uVar5 < 3) {
        if (uVar5 == 2) {
          plVar6 = (longlong *)FUN_00d774e0(lVar4,2);
          if (plVar6 != (longlong *)0x0) {
            FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
            cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
            if (cVar1 != '\0') {
              if (local_38._1_1_ == '\x02') {
                *(undefined1 *)(plVar6 + 0x2b) = 2;
              }
              else if (local_38._1_1_ == '\x01') {
                *(undefined1 *)(plVar6 + 0x2b) = 1;
              }
              else {
                *(undefined1 *)(plVar6 + 0x2b) = 0;
              }
            }
            FUN_00d77b90(plVar6,&local_48);
            (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
          }
        }
        else if (uVar5 == 0) {
          plVar6 = (longlong *)FUN_00d774e0(lVar4,9);
          if (plVar6 != (longlong *)0x0) {
            FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
            cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
            if (cVar1 != '\0') {
              if (local_38._1_1_ == '\x02') {
                *(undefined1 *)(plVar6 + 0x2b) = 2;
              }
              else if (local_38._1_1_ == '\x01') {
                *(undefined1 *)(plVar6 + 0x2b) = 1;
              }
              else {
                *(undefined1 *)(plVar6 + 0x2b) = 0;
              }
            }
            FUN_00d77b90(plVar6,&local_48);
            (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
          }
          FUN_00d81160(param_1,param_2,param_3,&local_48,param_5);
        }
        else if (uVar5 == 1) {
          plVar6 = (longlong *)FUN_00d774e0(lVar4,1);
          if (plVar6 != (longlong *)0x0) {
            FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
            cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
            if (cVar1 != '\0') {
              if (local_38._1_1_ == '\x02') {
                *(undefined1 *)(plVar6 + 0x2b) = 2;
              }
              else if (local_38._1_1_ == '\x01') {
                *(undefined1 *)(plVar6 + 0x2b) = 1;
              }
              else {
                *(undefined1 *)(plVar6 + 0x2b) = 0;
              }
            }
            FUN_00d77b90(plVar6,&local_48);
            (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
          }
        }
      }
      else if (uVar5 == 3) {
        plVar6 = (longlong *)FUN_00d774e0(lVar4,3);
        if (plVar6 != (longlong *)0x0) {
          FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
          cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
          if (cVar1 != '\0') {
            if (local_38._1_1_ == '\x02') {
              *(undefined1 *)(plVar6 + 0x2b) = 2;
            }
            else if (local_38._1_1_ == '\x01') {
              *(undefined1 *)(plVar6 + 0x2b) = 1;
            }
            else {
              *(undefined1 *)(plVar6 + 0x2b) = 0;
            }
          }
          FUN_00d77b90(plVar6,&local_48);
          (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
        }
      }
      else if (uVar5 == 4) {
        plVar6 = (longlong *)FUN_00d774e0(lVar4,5);
        if (plVar6 != (longlong *)0x0) {
          FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
          cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
          if (cVar1 != '\0') {
            if (local_38._1_1_ == '\x02') {
              *(undefined1 *)(plVar6 + 0x2b) = 2;
            }
            else if (local_38._1_1_ == '\x01') {
              *(undefined1 *)(plVar6 + 0x2b) = 1;
            }
            else {
              *(undefined1 *)(plVar6 + 0x2b) = 0;
            }
          }
          FUN_00d77b90(plVar6,&local_48);
          (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
        }
      }
    }
    else if (uVar5 == 6) {
      plVar6 = (longlong *)FUN_00d774e0(lVar4,5);
      if (plVar6 != (longlong *)0x0) {
        FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
        cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
        if (cVar1 != '\0') {
          if (local_38._1_1_ == '\x02') {
            *(undefined1 *)(plVar6 + 0x2b) = 2;
          }
          else if (local_38._1_1_ == '\x01') {
            *(undefined1 *)(plVar6 + 0x2b) = 1;
          }
          else {
            *(undefined1 *)(plVar6 + 0x2b) = 0;
          }
        }
        FUN_00d77b90(plVar6,&local_48);
        (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
      }
    }
    else if (uVar5 == 7) {
      plVar6 = (longlong *)FUN_00d774e0(lVar4,6);
      if (plVar6 != (longlong *)0x0) {
        FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
        cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
        if (cVar1 != '\0') {
          if (local_38._1_1_ == '\x02') {
            *(undefined1 *)(plVar6 + 0x2b) = 2;
          }
          else if (local_38._1_1_ == '\x01') {
            *(undefined1 *)(plVar6 + 0x2b) = 1;
          }
          else {
            *(undefined1 *)(plVar6 + 0x2b) = 0;
          }
        }
        FUN_00d77b90(plVar6,&local_48);
        (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
      }
    }
    else if (uVar5 == 8) {
      plVar6 = (longlong *)FUN_00d774e0(lVar4,7);
      if (plVar6 != (longlong *)0x0) {
        FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
        cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
        if (cVar1 != '\0') {
          if (local_38._1_1_ == '\x02') {
            *(undefined1 *)(plVar6 + 0x2b) = 2;
          }
          else if (local_38._1_1_ == '\x01') {
            *(undefined1 *)(plVar6 + 0x2b) = 1;
          }
          else {
            *(undefined1 *)(plVar6 + 0x2b) = 0;
          }
        }
        FUN_00d77b90(plVar6,&local_48);
        (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
      }
    }
    else if (uVar5 == 9) {
      plVar6 = (longlong *)FUN_00d774e0(lVar4,8);
      if (plVar6 != (longlong *)0x0) {
        FUN_00d77f50(plVar6,local_38._1_1_ != '\x03');
        cVar1 = FUN_004113d0(plVar6,&PTR_FUN_00d60198);
        if (cVar1 != '\0') {
          if (local_38._1_1_ == '\x02') {
            *(undefined1 *)(plVar6 + 0x2b) = 2;
          }
          else if (local_38._1_1_ == '\x01') {
            *(undefined1 *)(plVar6 + 0x2b) = 1;
          }
          else {
            *(undefined1 *)(plVar6 + 0x2b) = 0;
          }
        }
        FUN_00d77b90(plVar6,&local_48);
        (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,&DAT_01ecf394);
      }
    }
  }
  return;
}

