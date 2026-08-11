/* Ghidra address: 016339d0 */
/* Ghidra symbol: FUN_016339d0 */


undefined8
FUN_016339d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_20 = FUN_01628df0(param_2,param_5,param_4);
  local_28 = FUN_01628df0(param_3,4,param_4);
  if (local_20 != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x10);
    local_44 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_40 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),local_44);
        cVar1 = FUN_0161ac70(local_40,local_20);
        if (cVar1 != '\0') {
          local_30 = local_40;
          FUN_01633af0(0,local_50);
          return local_30;
        }
        local_44 = local_44 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  return local_30;
}

