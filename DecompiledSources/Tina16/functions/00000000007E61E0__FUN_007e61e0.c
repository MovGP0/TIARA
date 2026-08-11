/* Ghidra address: 007e61e0 */
/* Ghidra symbol: FUN_007e61e0 */


byte FUN_007e61e0(longlong param_1,longlong *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  byte local_19;
  
  local_30 = auStack_58;
  local_19 = 1;
  local_28 = *(longlong *)(*param_2 + 200);
  uVar2 = 0;
  puVar1 = auStack_58;
  if (local_28 != 0) {
    uVar2 = FUN_007e61e0(param_1,&local_28,param_3 + 1);
    local_19 = (byte)uVar2;
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (local_19 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_19 & 0x1f) & 9U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    if (local_19 == 2) {
      if ((*(longlong *)(param_1 + 0x48) == 0) ||
         (*(short *)(*(longlong *)(param_1 + 0x48) + 0xc0) != *(short *)(param_1 + 0x46))) {
        uVar2 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x60),*(undefined2 *)(param_1 + 0x46),2);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        if (*(longlong *)(param_1 + 0x48) == 0) {
          return 3;
        }
      }
      lVar3 = FUN_007e61c0(param_1,*(undefined8 *)(param_1 + 0x48),param_3);
      *param_2 = lVar3;
      if (*param_2 == 0) {
        return local_19;
      }
      if (*(longlong *)(*param_2 + 200) != local_28) {
        return local_19;
      }
      if (param_3 == 0) {
        local_19 = 1;
      }
    }
    if (*(char *)(*param_2 + 0x81) == '\0') {
      local_19 = 0;
    }
    else {
      if ((*(ushort *)(*(longlong *)(param_1 + 0x60) + 0x34) & 0x10) == 0) {
        FUN_007e3780(*param_2);
      }
      (**(code **)(*(longlong *)*param_2 + 0xb0))((longlong *)*param_2);
      if ((*(longlong *)(param_1 + 0x48) == 0) ||
         ((*param_2 != *(longlong *)(param_1 + 0x48) &&
          (*(short *)(*(longlong *)(param_1 + 0x48) + 0xc0) != *(short *)(param_1 + 0x46))))) {
        local_19 = 2;
      }
    }
  }
  return local_19;
}

