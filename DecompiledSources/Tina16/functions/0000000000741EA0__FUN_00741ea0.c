/* Ghidra address: 00741ea0 */
/* Ghidra symbol: FUN_00741ea0 */


undefined8 FUN_00741ea0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  puVar1 = auStack_58;
  if (*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x18) == 0) {
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)(param_1 + 0x98));
    (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(param_1 + 0x9c));
    FUN_00603f70(*(undefined8 *)(param_1 + 0x318),local_20);
    FUN_00410f20(local_20);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x318) + 0x18);
  cVar2 = FUN_004113d0(uVar3,&PTR_FUN_005f92e8);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_38,PTR_PTR_02002150);
    uVar3 = FUN_0044d490(&PTR_FUN_00472870,1,local_38);
    FUN_004134c0(uVar3);
  }
  else {
    local_28 = FUN_00609e10(uVar3);
  }
  FUN_00414480(&local_38);
  return local_28;
}

