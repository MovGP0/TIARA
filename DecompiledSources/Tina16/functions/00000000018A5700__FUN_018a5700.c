/* Ghidra address: 018a5700 */
/* Ghidra symbol: FUN_018a5700 */


ulonglong FUN_018a5700(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 local_4b [14];
  undefined4 local_3d;
  undefined8 local_39;
  byte local_31;
  undefined8 local_30 [2];
  
  local_30[0] = *param_4;
  FUN_0064eee0(param_1,param_2,param_3,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  lVar1 = FUN_018a73a0(param_1);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x508) == '\0')) {
    local_4b[0] = 7;
    local_39 = local_30[0];
    local_31 = 0;
    local_3d = param_3;
    FUN_018a71e0(param_1,local_4b);
    FUN_018a74f0(param_1,0,param_2,0,0,local_4b);
    uVar2 = (ulonglong)local_31;
  }
  return uVar2 & 0xffffffff;
}

