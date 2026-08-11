/* Ghidra address: 00534d20 */
/* Ghidra symbol: FUN_00534d20 */


bool FUN_00534d20(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  bool local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  pcVar2 = (char *)FUN_00534cd0(param_1);
  if ((((pcVar2 == "\x03\aBoolean\x01") || (pcVar2 == "\x03\bByteBool")) ||
      (pcVar2 == "\x03\bWordBool\x02")) || (pcVar2 == "\x03\bLongBool\x04")) {
    local_21 = true;
  }
  else {
    local_21 = false;
  }
  if (((local_21 == false) && (pcVar2 != (char *)0x0)) && (*pcVar2 == '\x03')) {
    lVar3 = FUN_00589390(pcVar2);
    if ((*(int *)(lVar3 + 1) == 0) && (*(int *)(lVar3 + 5) == 1)) {
      local_10 = FUN_00587ef0(pcVar2);
      FUN_00587e00(&local_10,local_20);
      iVar1 = FUN_00416db0(local_20[0],L"bool");
      local_21 = iVar1 == 0;
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

