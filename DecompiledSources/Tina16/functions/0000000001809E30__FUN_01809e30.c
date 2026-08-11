/* Ghidra address: 01809e30 */
/* Ghidra symbol: FUN_01809e30 */


undefined8 FUN_01809e30(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  puVar1 = auStack_78;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_58 = CONCAT44(local_58._4_4_,0x10);
    uVar3 = FUN_01809cc0(param_1,L"MainButton",*(undefined4 *)(param_1 + 0x5c),0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    puVar1 = local_40;
  }
  local_40 = puVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  if (iVar2 == 0) {
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_58 = 10;
    local_28 = FUN_004baae0(&PTR_FUN_0047d7f8,1,PTR_IMAGE_DOS_HEADER_0200c280,L"DesgnButtons");
    FUN_01808770(&local_48,local_28,local_20);
    FUN_004b6dc0(local_20,0);
    (**(code **)(*local_30 + 0xc0))(local_30,local_20);
    FUN_0180c730(local_30,*(undefined4 *)(param_1 + 0x5c));
    FUN_0180a670(param_1,local_30,0);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  FUN_004144d0(&local_48);
  return local_38;
}

