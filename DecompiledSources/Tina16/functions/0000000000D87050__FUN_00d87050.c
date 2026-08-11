/* Ghidra address: 00d87050 */
/* Ghidra symbol: FUN_00d87050 */


void FUN_00d87050(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 local_6c [16];
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  
  local_5c = *param_4;
  uStack_54 = param_4[1];
  local_3c = *(undefined4 *)(param_4 + 2);
  plVar3 = (longlong *)0x0;
  local_4c = local_5c;
  uStack_44 = uStack_54;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    plVar3 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (plVar3 == (longlong *)0x0) {
    if (param_2 == '\0') {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x28);
    }
    else if ((byte)(param_2 - 4U) < 2) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x48);
    }
    else if ((byte)(param_2 - 6U) < 2) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x48);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    pwVar7 = L"Face";
    lVar4 = FUN_00d77610(plVar3,L"Face");
    if (lVar4 != 0) {
      pwVar7 = L"Face";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"Face");
    }
    if (param_2 == '\x06') {
      pwVar7 = L"LeftButton";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"LeftButton");
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if (param_2 == '\a') {
      pwVar7 = L"RightButton";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"RightButton");
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if (param_2 == '\x04') {
      pwVar7 = L"TopButton";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"TopButton");
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if (param_2 == '\x05') {
      pwVar7 = L"BottomButton";
      plVar3 = (longlong *)FUN_00d77610(plVar3,L"BottomButton");
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if ((byte)local_3c < 8) {
      uVar6 = (int)CONCAT71((int7)((ulonglong)pwVar7 >> 8),1) << ((byte)local_3c & 0x1f);
      pwVar7 = (wchar_t *)(ulonglong)uVar6;
      bVar8 = (uVar6 & 8) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      uVar2 = 8;
    }
    else {
      if ((byte)local_3c < 8) {
        uVar6 = (int)CONCAT71((int7)((ulonglong)pwVar7 >> 8),1) << ((byte)local_3c & 0x1f);
        pwVar7 = (wchar_t *)(ulonglong)uVar6;
        bVar8 = (uVar6 & 4) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar2 = 6;
      }
      else {
        if ((byte)local_3c < 8) {
          uVar6 = (int)CONCAT71((int7)((ulonglong)pwVar7 >> 8),1) << ((byte)local_3c & 0x1f);
          pwVar7 = (wchar_t *)(ulonglong)uVar6;
          bVar8 = (uVar6 & 0xa2) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          uVar2 = 5;
        }
        else {
          if ((byte)local_3c < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)pwVar7 >> 8),1) << ((byte)local_3c & 0x1f) &
                    0x50U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            uVar2 = 7;
          }
          else {
            if ((byte)((byte)local_3c - 8) < 8) {
              uVar6 = 1 << ((byte)local_3c - 8 & 0x1f);
              bVar8 = (uVar6 & 1) != 0;
              uVar5 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar8);
            }
            else {
              uVar5 = 0;
              bVar8 = false;
            }
            if (bVar8) {
              uVar2 = (undefined4)CONCAT71((int7)(uVar5 >> 8),6);
            }
            else {
              uVar2 = 0;
            }
          }
        }
      }
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar2);
    FUN_00d77cb0(plVar3,local_6c);
    FUN_00d77b90(plVar3,&local_5c);
    (**(code **)(*plVar3 + 0xb0))(plVar3,param_3,&DAT_01ecf394);
    FUN_00d77b90(plVar3,local_6c);
  }
  return;
}

