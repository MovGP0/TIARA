/* Ghidra address: 00777e00 */
/* Ghidra symbol: FUN_00777e00 */


void FUN_00777e00(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_48 = 0;
  local_40 = 0;
  local_20 = *(undefined4 *)(param_1 + 0x88);
  uStack_1c = *(undefined4 *)(param_1 + 0x84);
  local_28 = *(int *)(param_1 + 0x80);
  uStack_24 = *(undefined4 *)(param_1 + 0x8c);
  if (param_2 == '\0') {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x78),
                 *(undefined4 *)(param_1 + 0x78));
  }
  else {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x78),
                 *(undefined4 *)(param_1 + 0x7c));
  }
  if ((*(uint *)(param_1 + 200) & 1) != 0) {
    local_38 = CONCAT44(uStack_24,local_28);
    local_30 = *(undefined8 *)(param_1 + 0x80);
    FUN_0079bf10(*(undefined8 *)(param_1 + 0x70),&local_38,1);
  }
  if ((*(uint *)(param_1 + 200) & 2) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x80);
    local_30 = CONCAT44(uStack_1c,local_20);
    FUN_0079bf10(*(undefined8 *)(param_1 + 0x70),&local_38,1);
  }
  FUN_0079c900(*(undefined8 *)(param_1 + 0x70),&local_40);
  lVar1 = 0;
  if (local_40 != 0) {
    lVar1 = *(longlong *)(local_40 + -8);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xe0))
            (*(longlong **)(param_1 + 0xb0),local_40,lVar1 + -1);
  FUN_00598010(*(longlong *)(param_1 + 0x70) + 8);
  if (param_3 == '\0') {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x78),
                 *(undefined4 *)(param_1 + 0x78));
  }
  else {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x78),
                 *(undefined4 *)(param_1 + 0x7c));
  }
  local_28 = local_28 + -1;
  if ((*(uint *)(param_1 + 200) & 4) != 0) {
    local_38 = CONCAT44(uStack_1c,local_20);
    local_30 = *(undefined8 *)(param_1 + 0x88);
    FUN_0079bf10(*(undefined8 *)(param_1 + 0x70),&local_38,1);
  }
  if ((*(uint *)(param_1 + 200) & 8) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x88);
    local_30 = CONCAT44(uStack_24,local_28);
    FUN_0079bf10(*(undefined8 *)(param_1 + 0x70),&local_38,1);
  }
  FUN_0079c900(*(undefined8 *)(param_1 + 0x70),&local_48);
  lVar1 = 0;
  if (local_48 != 0) {
    lVar1 = *(longlong *)(local_48 + -8);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xe0))
            (*(longlong **)(param_1 + 0xb0),local_48,lVar1 + -1);
  FUN_00598010(*(longlong *)(param_1 + 0x70) + 8);
  FUN_00417840(&local_48,&DAT_0077eb98,2);
  return;
}

