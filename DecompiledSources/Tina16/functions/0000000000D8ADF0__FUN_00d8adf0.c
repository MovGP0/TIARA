/* Ghidra address: 00d8adf0 */
/* Ghidra symbol: FUN_00d8adf0 */


void FUN_00d8adf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_4c = *param_4;
  uStack_44 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  lVar4 = 0;
  local_3c = local_4c;
  uStack_34 = uStack_44;
  if ((byte)local_2c < 5) {
    if ((byte)local_2c == 4) {
      plVar3 = (longlong *)0x0;
      iVar1 = FUN_00416db0(param_5,L"default");
      if (iVar1 != 0) {
        plVar3 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
      }
      if (plVar3 == (longlong *)0x0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0xe0);
      }
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      lVar4 = FUN_00d77610(plVar3,L"FlatChevron");
      if (lVar4 == 0) {
        pwVar8 = L"Chevron";
        lVar4 = FUN_00d77610(plVar3,L"Chevron");
        if (lVar4 != 0) {
          pwVar8 = L"Chevron";
          plVar3 = (longlong *)FUN_00d77610(plVar3,L"Chevron");
        }
      }
      else {
        pwVar8 = L"FlatChevron";
        plVar3 = (longlong *)FUN_00d77610(plVar3,L"FlatChevron");
      }
      if (plVar3 == (longlong *)0x0) {
        lVar4 = FUN_00d77610(0,L"FlatFace");
        if (lVar4 == 0) {
          pwVar8 = L"Face";
          lVar4 = FUN_00d77610(0,L"Face");
          if (lVar4 != 0) {
            pwVar8 = L"Face";
            plVar3 = (longlong *)FUN_00d77610(0,L"Face");
          }
        }
        else {
          pwVar8 = L"FlatFace";
          plVar3 = (longlong *)FUN_00d77610(0,L"FlatFace");
        }
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      if (local_2c._1_1_ < 8) {
        uVar7 = (int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f);
        pwVar8 = (wchar_t *)(ulonglong)uVar7;
        bVar9 = (uVar7 & 8) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        uVar2 = 8;
      }
      else {
        if (local_2c._1_1_ < 8) {
          uVar7 = (int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f);
          pwVar8 = (wchar_t *)(ulonglong)uVar7;
          bVar9 = (uVar7 & 4) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          uVar2 = 6;
        }
        else {
          if (local_2c._1_1_ < 8) {
            bVar9 = ((int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f) & 2U
                    ) != 0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            uVar2 = 5;
          }
          else {
            if (local_2c._1_1_ < 8) {
              uVar7 = 1 << (local_2c._1_1_ & 0x1f);
              bVar9 = (uVar7 & 0x60) != 0;
              uVar5 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar9);
            }
            else {
              uVar5 = 0;
              bVar9 = false;
            }
            if (bVar9) {
              uVar2 = (undefined4)CONCAT71((int7)(uVar5 >> 8),6);
            }
            else {
              uVar2 = 0;
            }
          }
        }
      }
      (**(code **)(*plVar3 + 0x98))(plVar3,uVar2);
      FUN_00d77b90(plVar3,&local_4c);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
      return;
    }
    if ((byte)local_2c != 0) {
      if ((byte)local_2c == 1) {
        FUN_00423b10(&local_4c,0,0xfffffffe);
        lVar4 = 0;
        iVar1 = FUN_00416db0(param_5,L"default");
        if (iVar1 != 0) {
          lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
        }
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xe0);
        }
        if (lVar4 == 0) {
          return;
        }
        lVar6 = FUN_00d77610(lVar4,L"Separator");
        if (lVar6 == 0) {
          return;
        }
        plVar3 = (longlong *)FUN_00d77610(lVar4,L"Separator");
        (**(code **)(*plVar3 + 0x98))(plVar3,0);
        FUN_00d77b90(plVar3,&local_4c);
        (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
        return;
      }
      if ((byte)local_2c != 3) {
        return;
      }
    }
  }
  else if ((byte)local_2c != 5) {
    if ((byte)local_2c == 0xd) {
      plVar3 = (longlong *)0x0;
      lVar4 = 0;
      iVar1 = FUN_00416db0(param_5,L"default");
      if (iVar1 != 0) {
        lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
      }
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc0);
      }
      if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_00d77610(lVar4,L"Grabber");
      }
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      FUN_00d77b90(plVar3,&local_3c);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
      return;
    }
    if ((byte)local_2c != 0xe) {
      return;
    }
    plVar3 = (longlong *)0x0;
    iVar1 = FUN_00416db0(param_5,L"default");
    if (iVar1 != 0) {
      lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    }
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc0);
    }
    if ((lVar4 != 0) &&
       (plVar3 = (longlong *)FUN_00d77610(lVar4,L"GrabberVert"), plVar3 == (longlong *)0x0)) {
      plVar3 = (longlong *)FUN_00d77610(lVar4,L"Grabber");
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    FUN_00d77b90(plVar3,&local_3c);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
    return;
  }
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    plVar3 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0xe0);
  }
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_00d77610(plVar3,L"FlatFace");
    if (lVar4 == 0) {
      pwVar8 = L"Face";
      lVar4 = FUN_00d77610(plVar3,L"Face");
      if (lVar4 != 0) {
        pwVar8 = L"Face";
        plVar3 = (longlong *)FUN_00d77610(plVar3,L"Face");
      }
    }
    else {
      pwVar8 = L"FlatFace";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"FlatFace");
    }
    if (plVar3 != (longlong *)0x0) {
      if (local_2c._1_1_ < 8) {
        uVar7 = (int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f);
        pwVar8 = (wchar_t *)(ulonglong)uVar7;
        bVar9 = (uVar7 & 8) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        uVar2 = 8;
      }
      else {
        if (local_2c._1_1_ < 8) {
          uVar7 = (int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f);
          pwVar8 = (wchar_t *)(ulonglong)uVar7;
          bVar9 = (uVar7 & 4) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          uVar2 = 6;
        }
        else {
          if (local_2c._1_1_ < 8) {
            bVar9 = ((int)CONCAT71((int7)((ulonglong)pwVar8 >> 8),1) << (local_2c._1_1_ & 0x1f) & 2U
                    ) != 0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            uVar2 = 5;
          }
          else {
            if (local_2c._1_1_ < 8) {
              uVar7 = 1 << (local_2c._1_1_ & 0x1f);
              bVar9 = (uVar7 & 0x60) != 0;
              uVar5 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar9);
            }
            else {
              uVar5 = 0;
              bVar9 = false;
            }
            if (bVar9) {
              uVar2 = (undefined4)CONCAT71((int7)(uVar5 >> 8),6);
            }
            else {
              uVar2 = 0;
            }
          }
        }
      }
      (**(code **)(*plVar3 + 0x98))(plVar3,uVar2);
      FUN_00d77b90(plVar3,&local_4c);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
    }
  }
  return;
}

