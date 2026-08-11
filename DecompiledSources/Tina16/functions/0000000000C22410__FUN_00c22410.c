/* Ghidra address: 00c22410 */
/* Ghidra symbol: FUN_00c22410 */


longlong FUN_00c22410(byte param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [47];
  byte local_29;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar1 = (ulonglong)param_1;
  local_29 = param_1;
  local_28 = param_2;
  if (uVar1 < 6) {
    if (uVar1 == 5) {
      local_20 = FUN_00c22280(auStack_58);
      goto code_r0x00c2255a;
    }
    if (uVar1 == 1) {
      local_20 = thunk_FUN_041715dd(0xf);
      goto code_r0x00c2255a;
    }
    if (uVar1 == 2) {
      local_20 = FUN_00c223a0(auStack_58);
      goto code_r0x00c2255a;
    }
    if (uVar1 == 3) {
      local_20 = FUN_00c22330(auStack_58);
      goto code_r0x00c2255a;
    }
    if (uVar1 == 4) {
      local_20 = FUN_00c222e0(auStack_58);
      goto code_r0x00c2255a;
    }
  }
  else {
    if (uVar1 == 6) {
      local_20 = FUN_00c1a180();
      goto code_r0x00c2255a;
    }
    if (uVar1 - 7 < 2) {
      local_20 = 0;
      goto code_r0x00c2255a;
    }
    if (uVar1 - 7 == 2) {
      if (param_2 == 0) {
        FUN_0041ddd0(&local_10,PTR_PTR_02004e10);
        FUN_00c1a320(local_10);
      }
      local_20 = FUN_00608880(local_28);
      if (local_20 == 0) {
        FUN_0041ddd0(&local_18,PTR_PTR_02004e10);
        FUN_00c1a320(local_18);
      }
      goto code_r0x00c2255a;
    }
  }
  local_20 = 0;
code_r0x00c2255a:
  FUN_00414560(&local_18,2);
  return local_20;
}

