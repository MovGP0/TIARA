/* Ghidra address: 01b1fd70 */
/* Ghidra symbol: FUN_01b1fd70 */


undefined1 FUN_01b1fd70(void)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 local_21c [523];
  undefined1 local_11;
  longlong *local_10;
  
  local_230 = auStack_278;
  local_240 = 0;
  local_238 = 0;
  local_228 = 0;
  FUN_00441820(&local_238,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00416ba0(&local_228,local_238,&DAT_01b1fef8);
  FUN_00442620(local_21c,local_228);
  local_258 = L"license.ini";
  FUN_00416cd0(&local_240,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01b1fef8);
  local_10 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_240);
  thunk_FUN_04157765(local_21c);
  iVar2 = thunk_FUN_04157765(local_21c);
  if (iVar2 != 4) {
    cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"License",L"RemoteKey",0);
    if (cVar1 == '\0') {
      local_11 = 0;
      goto LAB_01b1fe57;
    }
  }
  local_11 = 1;
LAB_01b1fe57:
  FUN_00410f20(local_10);
  FUN_00414560(&local_240,2);
  FUN_00414480(&local_228);
  return local_11;
}

