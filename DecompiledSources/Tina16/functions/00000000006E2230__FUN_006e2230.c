/* Ghidra address: 006e2230 */
/* Ghidra symbol: FUN_006e2230 */


ulonglong FUN_006e2230(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar1 = FUN_0065b870();
  thunk_FUN_041b2403(uVar1,0x1111,0,&local_30);
  uVar2 = (ulonglong)((local_28 & 0x100) != 0);
  if ((local_28 & 0x200) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((local_28 & 1) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((local_28 & 0x46) == 0x46) {
    uVar2 = uVar2 | 8;
  }
  else {
    if ((local_28 & 0x46) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((local_28 & 2) != 0) {
      uVar2 = uVar2 | 0x20;
    }
    if ((local_28 & 4) != 0) {
      uVar2 = uVar2 | 0x80;
    }
    if ((local_28 & 0x40) != 0) {
      uVar2 = uVar2 | 0x200;
    }
  }
  if ((local_28 & 0x10) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((local_28 & 8) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if ((local_28 & 0x20) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((local_28 & 0x800) != 0) {
    uVar2 = uVar2 | 0x400;
  }
  if ((local_28 & 0x400) != 0) {
    uVar2 = uVar2 | 0x800;
  }
  return uVar2;
}

