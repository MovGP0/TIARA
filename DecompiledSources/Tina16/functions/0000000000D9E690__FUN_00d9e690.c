/* Ghidra address: 00d9e690 */
/* Ghidra symbol: FUN_00d9e690 */


undefined1
FUN_00d9e690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
            ,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  wchar_t *local_30;
  undefined1 local_28;
  
  uVar1 = 1;
  uVar2 = (ulonglong)(byte)param_5;
  if (uVar2 < 0x1a) {
    if (uVar2 < 0xe) {
      if (uVar2 - 2 < 4) {
        local_28 = FUN_00d9e660(auStack_58,param_5 + -2);
        local_38 = L"DBNavigator";
        local_30 = L"btnFirst";
        uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
      }
      else if (uVar2 - 6 < 4) {
        local_28 = FUN_00d9e660(auStack_58,param_5 + -6);
        local_38 = L"DBNavigator";
        local_30 = L"btnPrior";
        uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
      }
      else if (uVar2 - 10 < 4) {
        local_28 = FUN_00d9e660(auStack_58,param_5 + -10);
        local_38 = L"DBNavigator";
        local_30 = L"btnNext";
        uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
      }
    }
    else if (uVar2 - 0xe < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0xe);
      local_38 = L"DBNavigator";
      local_30 = L"btnLast";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0x12 < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0x12);
      local_38 = L"DBNavigator";
      local_30 = L"btnInsert";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0x16 < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0x16);
      local_38 = L"DBNavigator";
      local_30 = L"btnDelete";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
  }
  else if (uVar2 < 0x26) {
    if (uVar2 - 0x1a < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0x1a);
      local_38 = L"DBNavigator";
      local_30 = L"btnEdit";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0x1e < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0x1e);
      local_38 = L"DBNavigator";
      local_30 = L"btnPost";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0x22 < 4) {
      local_28 = FUN_00d9e660(auStack_58,param_5 + -0x22);
      local_38 = L"DBNavigator";
      local_30 = L"btnCancel";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
  }
  else if (uVar2 - 0x26 < 4) {
    local_28 = FUN_00d9e660(auStack_58,param_5 + -0x26);
    local_38 = L"DBNavigator";
    local_30 = L"btnRefresh";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  else if (uVar2 - 0x2a < 4) {
    local_28 = FUN_00d9e660(auStack_58,param_5 + -0x2a);
    local_38 = L"DBNavigator";
    local_30 = L"btnApplyUpdates";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  else if (uVar2 - 0x2e < 4) {
    local_28 = FUN_00d9e660(auStack_58,param_5 + -0x2e);
    local_38 = L"DBNavigator";
    local_30 = L"btnCancelUpdates";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  return uVar1;
}

