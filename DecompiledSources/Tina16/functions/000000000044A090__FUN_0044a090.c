/* Ghidra address: 0044a090 */
/* Ghidra symbol: FUN_0044a090 */


void FUN_0044a090(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_278 [32];
  int local_258;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230 [2];
  longlong local_220;
  undefined4 local_218;
  int local_214;
  undefined1 local_210 [512];
  longlong local_10;
  
  local_238 = 0;
  local_230[0] = 0;
  local_10 = 0;
  local_220 = 0;
  local_214 = 0;
  local_218 = 0;
  local_248 = param_1;
  local_240 = param_2;
  if (param_2 == 0) {
    FUN_00449560(auStack_278,&LAB_0044a284);
  }
  else {
    FUN_00449560(auStack_278,param_2);
  }
  lVar1 = 0;
  if (local_10 != 0) {
    lVar1 = *(longlong *)(local_10 + -8);
  }
  if (lVar1 < 1) {
    local_258 = local_214;
    FUN_00456310(&local_238,local_210,0xff,0);
    FUN_00414ad0(local_248,local_238);
  }
  else {
    lVar1 = 0;
    if (local_10 != 0) {
      lVar1 = *(longlong *)(local_10 + -8);
    }
    FUN_00419260(&local_220,&DAT_004065c0,1,lVar1 + local_214);
    lVar1 = 0;
    if (local_10 != 0) {
      lVar1 = *(longlong *)(local_10 + -8);
    }
    FUN_00409a70(local_10,local_220,lVar1 * 2);
    if (0 < local_214) {
      lVar1 = 0;
      if (local_10 != 0) {
        lVar1 = *(longlong *)(local_10 + -8);
      }
      FUN_00409a70(local_210,local_220 + lVar1 * 2,(longlong)(local_214 * 2));
    }
    lVar1 = 0;
    if (local_220 != 0) {
      lVar1 = *(longlong *)(local_220 + -8);
    }
    FUN_00456360(local_230,local_220,lVar1 + -1);
    FUN_00414ad0(local_248,local_230[0]);
  }
  FUN_00414560(&local_238,2);
  FUN_00419430(&local_220,&DAT_004065c0);
  FUN_00419430(&local_10,&DAT_00448f58);
  return;
}

