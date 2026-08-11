/* Ghidra address: 00af9590 */
/* Ghidra symbol: FUN_00af9590 */


void FUN_00af9590(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_68;
  puVar1 = auStack_68;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    local_19[0] = '\0';
    (**(code **)(param_1 + 0x6d8))(*(undefined8 *)(param_1 + 0x6e0),param_1,local_19);
    puVar1 = local_30;
    if (local_19[0] != '\0') {
      return;
    }
  }
  local_30 = puVar1;
  if (param_4 == 0) {
    if (*(longlong *)(param_1 + 0x9c8) == 0) {
      uVar2 = FUN_00a7a070(&PTR_FUN_00a78ce8,1);
      local_48 = 3;
      FUN_00afa030(param_1,uVar2,param_2,param_3);
      FUN_00410f20(uVar2);
    }
    else {
      local_48 = 4;
      FUN_00afa030(param_1,*(longlong *)(param_1 + 0x9c8),param_2,param_3);
    }
  }
  else {
    local_48 = 4;
    FUN_00afa030(param_1,param_4,param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    (**(code **)(param_1 + 0x6a8))(*(undefined8 *)(param_1 + 0x6b0),param_1);
  }
  return;
}

