/* Ghidra address: 01bca940 */
/* Ghidra symbol: FUN_01bca940 */


longlong FUN_01bca940(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  wchar_t *local_220;
  undefined1 local_218 [520];
  
  local_230 = 0;
  local_228 = 0;
  local_220 = (wchar_t *)0x0;
  local_238 = FUN_0065b870(param_1);
  if (local_238 == 0) {
LAB_01bcaa30:
    local_238 = 0;
  }
  else {
    do {
      local_238 = thunk_FUN_03f32902(local_238,5);
      if (local_238 == 0) goto LAB_01bcaa30;
      thunk_FUN_03b3efbf(local_238,local_218,0x200);
      FUN_00416830(&local_220,local_218,0x100);
      if (local_220 == L"Internet Explorer_Server") {
        bVar2 = true;
      }
      else {
        FUN_00416830(&local_228,local_218,0x100);
        if (local_228 == 0) {
          bVar2 = false;
        }
        else {
          FUN_00416830(&local_230,local_218,0x100);
          iVar1 = FUN_0043e420(local_230,L"Internet Explorer_Server");
          bVar2 = iVar1 == 0;
        }
      }
    } while (!bVar2);
  }
  FUN_00414560(&local_230,3);
  return local_238;
}

