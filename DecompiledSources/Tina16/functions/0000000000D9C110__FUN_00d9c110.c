/* Ghidra address: 00d9c110 */
/* Ghidra symbol: FUN_00d9c110 */


undefined1
FUN_00d9c110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
            ,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  wchar_t *local_30;
  undefined1 local_28;
  
  uVar1 = 1;
  if ((byte)param_5 < 4) {
    local_28 = FUN_00d9c0e0(auStack_58,param_5);
    local_38 = L"SearchBox";
    local_30 = L"btnText";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  else if ((byte)((byte)param_5 - 4) < 4) {
    local_28 = FUN_00d9c0e0(auStack_58,param_5 + -4);
    local_38 = L"SearchBox";
    local_30 = L"btnAudio";
    uVar1 = FUN_00d8eda0(param_2,param_3,param_6,param_7);
  }
  return uVar1;
}

