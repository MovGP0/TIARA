/* Ghidra address: 01859e20 */
/* Ghidra symbol: FUN_01859e20 */


longlong FUN_01859e20(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  uVar2 = FUN_00a3c2e0(param_2);
  if ((byte)uVar2 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 6U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    lVar3 = FUN_00a39e90(param_2);
    if (*(char *)(lVar3 + 0x491) == '\x06') {
      FUN_018597a0(param_2,local_20);
    }
  }
  if (local_20[0] == 0) {
    local_20[0] = FUN_01867e30(param_1,param_2,param_3);
  }
  cVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_2);
  if ((cVar1 != '\0') && (param_3 != '\a')) {
    local_28 = (**(code **)(param_1 + 0xa0))(param_1,param_2);
    local_20[0] = FUN_01867e30(param_1,param_2,param_3);
    uVar2 = FUN_00609e10(local_20[0]);
    FUN_005fdf10(uVar2);
    lVar3 = FUN_00609e10(local_20[0]);
    *(undefined4 *)(lVar3 + 0x90) = 0xbb0226;
    plVar4 = (longlong *)FUN_00609e10(local_20[0]);
    (**(code **)(*plVar4 + 0x88))(plVar4,0,0,local_28);
    uVar2 = FUN_00609e10(local_20[0]);
    FUN_005fe090(uVar2);
    FUN_00410f20(local_28);
  }
  return local_20[0];
}

