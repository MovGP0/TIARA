/* Ghidra address: 00f30500 */
/* Ghidra symbol: FUN_00f30500 */


undefined8 FUN_00f30500(undefined8 param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ulonglong local_28;
  byte local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,&local_10,param_1);
  local_19 = 1;
  if (param_2 != '\0') {
    local_19 = 3;
  }
  if (param_3 != '\0') {
    local_19 = local_19 | 4;
  }
  local_28 = local_10;
  if (local_10 != 0) {
    local_28 = *(ulonglong *)(local_10 - 8);
  }
  uVar2 = local_28;
  if (0xffffffff < local_28 + 0x80000000) {
    uVar2 = FUN_00410a90();
  }
  local_18 = FUN_00f30220(local_10,0,uVar2 & 0xffffffff,local_19);
  FUN_00419430(&local_10,&DAT_00406578);
  return local_18;
}

