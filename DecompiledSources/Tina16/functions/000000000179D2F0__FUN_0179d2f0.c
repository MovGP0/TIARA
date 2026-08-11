/* Ghidra address: 0179d2f0 */
/* Ghidra symbol: FUN_0179d2f0 */


void FUN_0179d2f0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 *local_40;
  longlong local_38;
  longlong *local_30;
  
  local_40 = auStack_78;
  local_30 = (longlong *)FUN_007fc180(&PTR_FUN_01783a88,1,*(undefined8 *)PTR_DAT_02004030);
  iVar2 = (**(code **)(*local_30 + 0x2d0))(local_30);
  if (iVar2 == 1) {
    local_38 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
    FUN_01797160(param_1,local_38,0);
    *(undefined4 *)(local_38 + 8) = *(undefined4 *)(param_1 + 0xcb0);
    FUN_00c3f030(*(undefined8 *)(param_1 + 0xca8),local_38);
    uVar3 = (**(code **)(*(longlong *)local_30[0xd7] + 0x260))((longlong *)local_30[0xd7]);
    uVar4 = (**(code **)(*(longlong *)local_30[0xd8] + 0x260))((longlong *)local_30[0xd8]);
    uVar1 = (**(code **)(*(longlong *)local_30[0xd9] + 0x260))((longlong *)local_30[0xd9]);
    local_50 = (**(code **)(*(longlong *)local_30[0xda] + 0x260))((longlong *)local_30[0xda]);
    local_58 = uVar1;
    FUN_00c3f250(*(undefined8 *)(param_1 + 0xca8),*(undefined4 *)(param_1 + 0xcb0),uVar3,uVar4);
  }
  FUN_00410f20(local_30);
  return;
}

