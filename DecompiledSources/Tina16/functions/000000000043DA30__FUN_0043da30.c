/* Ghidra address: 0043da30 */
/* Ghidra symbol: FUN_0043da30 */


undefined1 FUN_0043da30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 *local_30;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_11;
  longlong local_10;
  
  local_30 = auStack_78;
  local_11 = 0;
  cVar1 = FUN_0044f0c0(6,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_00440a20(param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_00440380(param_1);
      if ((uVar2 & 0x20) != 0) {
        uVar3 = FUN_00416740(param_1);
        local_1c = thunk_FUN_0414b2cb(uVar3);
        if ((local_1c != 0xffffffff) && ((local_1c & 0x400) != 0)) {
          if ((local_1c & 0x10) == 0) {
            local_18 = 0;
          }
          else {
            local_18 = 0x2000000;
          }
          uVar3 = FUN_00416740(param_1);
          local_58 = 3;
          local_50 = local_18;
          local_48 = 0;
          local_10 = thunk_FUN_041ac412(uVar3,0x80000000,1,0);
          if (local_10 != -1) {
            local_11 = FUN_0043d730(auStack_78,local_10,param_2,local_18);
            thunk_FUN_041d2921(local_10);
          }
        }
      }
    }
  }
  return local_11;
}

