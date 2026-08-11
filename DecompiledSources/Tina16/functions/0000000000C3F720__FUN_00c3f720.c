/* Ghidra address: 00c3f720 */
/* Ghidra symbol: FUN_00c3f720 */


undefined8 FUN_00c3f720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  short sVar1;
  longlong lVar2;
  undefined1 local_res20 [8];
  undefined8 local_20;
  
  local_res20[0] = param_4;
  sVar1 = FUN_00c3f420(param_1,param_2,param_3,local_res20);
  if (sVar1 == -1) {
    local_20 = FUN_00498310(0,0);
  }
  else {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar1);
    local_20 = FUN_00b95af0(*(undefined4 *)(lVar2 + 0x28));
  }
  return local_20;
}

