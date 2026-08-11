/* Ghidra address: 00d8f2a0 */
/* Ghidra symbol: FUN_00d8f2a0 */


undefined8 FUN_00d8f2a0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char local_24;
  undefined4 local_20;
  
  uVar1 = *param_2;
  local_24 = (char)uVar1;
  lVar2 = *(longlong *)(param_1 + 0x18 + (uVar1 & 0xff) * 8);
  if (lVar2 == 0) {
    if (((local_24 == '\0') || (local_24 == '\x0f')) || (local_24 == '\x11')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    local_20 = (undefined4)(uVar1 >> 0x20);
    uVar3 = (**(code **)(lVar2 + 0x50))(lVar2,param_1,local_20,(int)param_2[1]);
  }
  return uVar3;
}

