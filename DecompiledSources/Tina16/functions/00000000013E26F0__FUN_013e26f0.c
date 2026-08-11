/* Ghidra address: 013e26f0 */
/* Ghidra symbol: FUN_013e26f0 */


undefined1
FUN_013e26f0(byte param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,undefined8 param_5,
            undefined1 param_6,undefined1 param_7)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 local_9;
  
  uVar1 = param_2;
  FUN_00414610(param_5);
  local_9 = 0;
  if (param_1 < 8 && (1 << (param_1 & 0x1f) & 0x86U) != 0) {
    uVar1 = param_3;
    local_9 = FUN_013e2850(param_1,param_3,param_4,param_5,param_7);
  }
  if (param_1 < 0x10) {
    bVar2 = ((int)CONCAT62((int6)(uVar1 >> 0x10),1) << (param_1 & 0x1f) & 0x178U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_9 = FUN_013e34c0(param_1,param_3,param_4,param_5,param_6,param_7);
  }
  if (param_1 == 9) {
    local_9 = FUN_013e4610(9,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
  }
  FUN_00414480(&param_5);
  return local_9;
}

