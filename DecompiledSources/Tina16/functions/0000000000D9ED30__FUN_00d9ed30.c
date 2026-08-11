/* Ghidra address: 00d9ed30 */
/* Ghidra symbol: FUN_00d9ed30 */


undefined1
FUN_00d9ed30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
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
  if (uVar2 < 0x10) {
    if (uVar2 < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5);
      local_38 = L"MediaPlayer";
      local_30 = L"btnPlay";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 4 < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5 + -4);
      local_38 = L"MediaPlayer";
      local_30 = L"btnPause";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 8 < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5 + -8);
      local_38 = L"MediaPlayer";
      local_30 = L"btnStop";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0xc < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5 + -0xc);
      local_38 = L"MediaPlayer";
      local_30 = L"btnNext";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
  }
  else if (uVar2 < 0x18) {
    if (uVar2 - 0x10 < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5 + -0x10);
      local_38 = L"MediaPlayer";
      local_30 = L"btnPrev";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
    else if (uVar2 - 0x14 < 4) {
      local_28 = FUN_00d9ed00(auStack_58,param_5 + -0x14);
      local_38 = L"MediaPlayer";
      local_30 = L"btnStep";
      uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
    }
  }
  else if (uVar2 - 0x18 < 4) {
    local_28 = FUN_00d9ed00(auStack_58,param_5 + -0x18);
    local_38 = L"MediaPlayer";
    local_30 = L"btnBack";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  else if (uVar2 - 0x1c < 4) {
    local_28 = FUN_00d9ed00(auStack_58,param_5 + -0x1c);
    local_38 = L"MediaPlayer";
    local_30 = L"btnRecord";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  else if (uVar2 - 0x20 < 4) {
    local_28 = FUN_00d9ed00(auStack_58,param_5 + -0x20);
    local_38 = L"MediaPlayer";
    local_30 = L"btnEject";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  return uVar1;
}

