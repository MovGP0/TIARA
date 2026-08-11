/* Ghidra address: 014e4f70 */
/* Ghidra symbol: FUN_014e4f70 */


longlong FUN_014e4f70(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_0198b200(lVar1,0,0,0);
    uVar2 = FUN_016b97f0(&DAT_016b45f0,1,param_3);
    *(undefined8 *)(lVar1 + 0xe70) = uVar2;
    *(undefined1 *)(lVar1 + 0x490) = 1;
    param_1 = lVar1;
  }
  return param_1;
}

