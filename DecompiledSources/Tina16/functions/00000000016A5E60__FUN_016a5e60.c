/* Ghidra address: 016a5e60 */
/* Ghidra symbol: FUN_016a5e60 */


undefined8 FUN_016a5e60(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01d34560(local_res8,0,*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18));
  iVar3 = *(int *)(param_3 + 0x10);
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_01d347d0(param_3,local_1c);
      FUN_016a5e20(auStack_58,uVar2);
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

