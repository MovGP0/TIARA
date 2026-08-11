/* Ghidra address: 0041a1b0 */
/* Ghidra symbol: FUN_0041a1b0 */


longlong * FUN_0041a1b0(undefined8 param_1,longlong *param_2,ushort param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180 [2];
  undefined1 local_16c [170];
  undefined1 local_c2 [178];
  
  local_180[0] = 0;
  local_188 = 0;
  local_190 = 0;
  FUN_00414480(param_2);
  if ((DAT_01dbca18 <= param_3) && (param_3 <= DAT_01dbce18)) {
    uVar3 = 0x40;
    uVar4 = 0;
    do {
      uVar1 = (ulonglong)(uVar3 + uVar4) / 2;
      if (param_3 < (&DAT_01dbca18)[uVar1 * 8]) {
        uVar3 = (int)uVar1 - 1;
      }
      else {
        if (param_3 <= (&DAT_01dbca18)[uVar1 * 8]) {
          FUN_0041a060(param_1,param_2,(&PTR_s_zh_TW_zh_Hant_zh_01dbca20)[uVar1 * 2]);
          break;
        }
        uVar4 = (int)uVar1 + 1;
      }
    } while (uVar4 <= uVar3);
  }
  if ((*param_2 == 0) && (iVar2 = thunk_FUN_040522a9(param_3,2), iVar2 != 0)) {
    thunk_FUN_039c31b1(param_3,0x59,local_c2,0x55);
    thunk_FUN_039c31b1(param_3,0x5a,local_16c,0x55);
    FUN_00416830(local_180,local_c2,0x55);
    FUN_00416830(&local_188,local_16c,0x55);
    FUN_00416830(&local_190,local_c2,0x55);
    FUN_00416cd0(param_2,5,local_180[0],&DAT_0041a3b8,local_188,&LAB_0041a3c8,local_190);
  }
  FUN_00414560(&local_190,3);
  return param_2;
}

