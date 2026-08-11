/* Ghidra address: 0083fbd0 */
/* Ghidra symbol: FUN_0083fbd0 */


void FUN_0083fbd0(longlong param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint local_48 [3];
  undefined4 local_3c;
  
  if (param_2 != param_3) {
    if (*(longlong *)(param_1 + 0x528) != 0) {
      FUN_0083da90(param_1 + 0x528,param_2 + 1,param_3 + 1);
      FUN_0083da90(param_1 + 0x538,param_2 + 1,param_3 + 1);
    }
    FUN_00844a80(param_1,param_1 + 0x4a8,param_2,param_3);
    FUN_00844a80(param_1,param_1 + 0x498,param_2,param_3);
    FUN_00844a80(param_1,param_1 + 0x518,param_2,param_3);
    local_48[1] = 0;
    local_3c = FUN_00848350(param_1);
    local_48[0] = param_3;
    local_48[2] = param_2;
    if ((int)param_2 < (int)param_3) {
      local_48[0] = param_2;
      local_48[2] = param_3;
    }
    FUN_00844240(param_1,local_48);
    pcVar1 = (code *)FUN_00411550(param_1,0xffa2);
    (*pcVar1)(param_1,param_2,param_3);
    if (*(longlong *)(param_1 + 0x528) != 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xff9d);
      (*pcVar1)(param_1);
    }
    FUN_00848f80(param_1);
  }
  return;
}

