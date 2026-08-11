/* Ghidra address: 00850490 */
/* Ghidra symbol: FUN_00850490 */


void FUN_00850490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (PTR_DAT_02005bd0[0xc] == '\0') {
    FUN_00658970(param_1,param_2);
  }
  else {
    FUN_008087b0(*(undefined8 *)PTR_DAT_02005950,local_20);
    FUN_00414ad0(param_1 + 0x350,local_20[0]);
    *(undefined1 *)(param_1 + 0x348) = 3;
    FUN_00658970(param_1,param_2);
    lVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
    if (*(longlong *)(param_2 + 8) != lVar1) {
      thunk_FUN_03ad4659(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x90),1);
    }
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xffab);
  (*pcVar2)(param_1,0);
  FUN_00414480(local_20);
  return;
}

