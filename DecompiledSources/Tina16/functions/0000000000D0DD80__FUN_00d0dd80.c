/* Ghidra address: 00d0dd80 */
/* Ghidra symbol: FUN_00d0dd80 */


longlong FUN_00d0dd80(longlong param_1,char param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00cd6090(local_res8,0,param_4);
  local_1c = 0;
  if (param_3 != 0) {
    local_1c = *(undefined4 *)(param_3 + -4);
  }
  FUN_00415d10(local_res8 + 0x28,local_1c,0);
  local_20 = 0;
  if (param_3 != 0) {
    local_20 = *(int *)(param_3 + -4);
  }
  uVar2 = FUN_00415ab0(param_3);
  uVar3 = FUN_00415ab0(*(undefined8 *)(local_res8 + 0x28));
  FUN_00409a70(uVar2,uVar3,(longlong)local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

