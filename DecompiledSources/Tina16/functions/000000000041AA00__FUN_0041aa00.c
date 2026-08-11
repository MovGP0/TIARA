/* Ghidra address: 0041aa00 */
/* Ghidra symbol: FUN_0041aa00 */


undefined8 FUN_0041aa00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  int *local_240;
  undefined1 *local_230;
  int local_228;
  short local_222 [261];
  undefined8 local_18;
  undefined8 *local_10;
  
  local_230 = auStack_268;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    thunk_FUN_041b94f3(0,local_222,0x105);
  }
  else {
    uVar2 = FUN_00416740(local_res10[0]);
    FUN_00419fa0(local_222,0x105,uVar2);
  }
  if (local_222[0] != 0) {
    local_10 = (undefined8 *)0x0;
    local_248 = &local_18;
    iVar1 = thunk_FUN_03ecc02e(0x80000001,L"Software\\Embarcadero\\Locales",0,0xf0019);
    if (iVar1 != 0) {
      local_248 = &local_18;
      iVar1 = thunk_FUN_03ecc02e(0x80000002,L"Software\\Embarcadero\\Locales",0,0xf0019);
      if (iVar1 != 0) {
        local_248 = &local_18;
        iVar1 = thunk_FUN_03ecc02e(0x80000001,L"Software\\CodeGear\\Locales",0,0xf0019);
        if (iVar1 != 0) {
          local_248 = &local_18;
          iVar1 = thunk_FUN_03ecc02e(0x80000002,L"Software\\CodeGear\\Locales",0,0xf0019);
          if (iVar1 != 0) {
            local_248 = &local_18;
            iVar1 = thunk_FUN_03ecc02e(0x80000001,L"Software\\Borland\\Locales",0,0xf0019);
            if (iVar1 != 0) {
              local_248 = &local_18;
              iVar1 = thunk_FUN_03ecc02e(0x80000001,L"Software\\Borland\\Delphi\\Locales",0,0xf0019)
              ;
              if (iVar1 != 0) goto LAB_0041acbc;
            }
          }
        }
      }
    }
    FUN_0041a7c0(auStack_268,local_222,0x105);
    local_248 = (undefined8 *)0x0;
    local_240 = &local_228;
    iVar1 = thunk_FUN_0419d678(local_18,local_222,0,0);
    if (iVar1 == 0) {
      local_248 = (undefined8 *)FUN_004095c0((longlong)local_228);
      local_240 = &local_228;
      local_10 = local_248;
      thunk_FUN_0419d678(local_18,local_222,0,0);
      FUN_004167d0(param_1,local_10);
    }
    else {
      local_248 = (undefined8 *)0x0;
      local_240 = &local_228;
      iVar1 = thunk_FUN_0419d678(local_18,&LAB_0041ae1c,0,0);
      if (iVar1 == 0) {
        local_248 = (undefined8 *)FUN_004095c0((longlong)local_228);
        local_240 = &local_228;
        local_10 = local_248;
        thunk_FUN_0419d678(local_18,&LAB_0041ae1c,0,0);
        FUN_004167d0(param_1,local_10);
      }
    }
    if (local_10 != (undefined8 *)0x0) {
      FUN_004095f0(local_10);
    }
    thunk_FUN_0418fb4b(local_18);
  }
LAB_0041acbc:
  FUN_00414480(local_res10);
  return param_1;
}

