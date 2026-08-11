/* Ghidra address: 00d84c30 */
/* Ghidra symbol: FUN_00d84c30 */


undefined8 *
FUN_00d84c30(longlong param_1,undefined8 *param_2,byte param_3,undefined8 *param_4,byte param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_60 [2];
  ushort local_4f;
  
  puVar6 = local_60;
  for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  *param_2 = DAT_01ecf394;
  param_2[1] = DAT_01ecf39c;
  plVar4 = (longlong *)0x0;
  iVar3 = FUN_00416db0(param_6,L"default");
  if (iVar3 != 0) {
    plVar4 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
  }
  if (plVar4 != (longlong *)0x0) goto LAB_00d84d37;
  if (param_3 < 3) {
    if (param_3 == 2) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84d37;
    }
    if (param_3 == 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84d37;
    }
    if (param_3 == 1) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84d37;
    }
  }
  else {
    if (param_3 == 4) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      goto LAB_00d84d37;
    }
    if (param_3 == 6) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x100);
      goto LAB_00d84d37;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_00d84d37:
  if (plVar4 == (longlong *)0x0) {
    *param_2 = DAT_01ecf394;
    param_2[1] = DAT_01ecf39c;
  }
  else {
    (**(code **)(*plVar4 + 0x98))(plVar4,0);
    if ((local_4f & 0x40) != 0) {
      (**(code **)(*plVar4 + 0x98))(plVar4,2);
    }
    if ((local_4f & 0x10) != 0) {
      (**(code **)(*plVar4 + 0x98))(plVar4,3);
    }
    if ((local_4f & 0x100) != 0) {
      (**(code **)(*plVar4 + 0x98))(plVar4,4);
    }
    (**(code **)(*plVar4 + 0x90))(plVar4,local_4f);
    FUN_00d77b90(plVar4,local_60);
    FUN_00d76870(plVar4);
    if (param_5 < 6) {
      if (param_5 == 5) {
        if ((local_4f & 0x20) != 0) {
          lVar5 = FUN_00d774e0(plVar4,4);
          if (lVar5 != 0) {
            FUN_00d77cb0(lVar5,param_2);
          }
        }
      }
      else if (param_5 < 3) {
        if (param_5 == 2) {
          if ((local_4f & 4) != 0) {
            lVar5 = FUN_00d774e0(plVar4,2);
            if (lVar5 != 0) {
              FUN_00d77cb0(lVar5,param_2);
            }
          }
        }
        else if (param_5 == 0) {
          if ((local_4f & 1) != 0) {
            if (param_3 == 6) {
              *param_2 = DAT_01ecf394;
              param_2[1] = DAT_01ecf39c;
            }
            else {
              lVar5 = FUN_00d774e0(plVar4,9);
              if (lVar5 != 0) {
                uVar1 = *(undefined8 *)(lVar5 + 8);
                cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00d5d820);
                if (cVar2 != '\0') {
                  FUN_00d75ef0(uVar1);
                }
                FUN_00d77cb0(lVar5,param_2);
              }
            }
          }
        }
        else if ((param_5 == 1) && ((local_4f & 2) != 0)) {
          lVar5 = FUN_00d774e0(plVar4,1);
          if (lVar5 != 0) {
            FUN_00d77cb0(lVar5,param_2);
          }
        }
      }
      else if (param_5 == 3) {
        if ((local_4f & 8) != 0) {
          lVar5 = FUN_00d774e0(plVar4,3);
          if (lVar5 != 0) {
            FUN_00d77cb0(lVar5,param_2);
          }
        }
      }
      else if ((param_5 == 4) && ((local_4f & 0x10) != 0)) {
        lVar5 = FUN_00d774e0(plVar4,5);
        if (lVar5 != 0) {
          FUN_00d77cb0(lVar5,param_2);
        }
      }
    }
    else if (param_5 == 6) {
      if ((local_4f & 0x40) != 0) {
        lVar5 = FUN_00d774e0(plVar4,5);
        if (lVar5 != 0) {
          FUN_00d77cb0(lVar5,param_2);
        }
      }
    }
    else if (param_5 == 7) {
      if ((local_4f & 0x80) != 0) {
        lVar5 = FUN_00d774e0(plVar4,6);
        if (lVar5 != 0) {
          FUN_00d77cb0(lVar5,param_2);
        }
      }
    }
    else if (param_5 == 8) {
      if ((local_4f & 0x100) != 0) {
        lVar5 = FUN_00d774e0(plVar4,7);
        if (lVar5 != 0) {
          FUN_00d77cb0(lVar5,param_2);
        }
      }
    }
    else if ((param_5 == 9) && ((local_4f & 0x200) != 0)) {
      lVar5 = FUN_00d774e0(plVar4,8);
      if (lVar5 != 0) {
        FUN_00d77cb0(lVar5,param_2);
      }
    }
  }
  FUN_00417740(local_60,&DAT_00d627e8);
  return param_2;
}

