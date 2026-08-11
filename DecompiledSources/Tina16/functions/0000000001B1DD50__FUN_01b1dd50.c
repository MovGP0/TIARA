/* Ghidra address: 01b1dd50 */
/* Ghidra symbol: FUN_01b1dd50 */


undefined1 FUN_01b1dd50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 local_8e9;
  undefined8 local_8e8;
  undefined8 local_8e0 [26];
  undefined1 local_810 [2048];
  longlong local_10;
  
  local_8e0[0] = 0;
  local_8e8 = 0;
  FUN_00c36da0(local_8e0,param_2);
  cVar1 = FUN_00440a20(local_8e0[0],1);
  local_10 = 0;
  if ((*PTR_DAT_020052b8 == '\0') && (cVar1 == '\0')) {
    local_8e9 = 0;
  }
  else {
    local_8e9 = FUN_01b1d9d0(L"tina.exe",&local_10);
  }
  if (local_10 != 0) {
    FUN_00442620(local_810,param_2);
    uVar2 = thunk_FUN_041e8323(local_810);
    thunk_FUN_0413e052(local_10,0x8d2,uVar2,0xf1206);
  }
  FUN_00414560(&local_8e8,2);
  return local_8e9;
}

