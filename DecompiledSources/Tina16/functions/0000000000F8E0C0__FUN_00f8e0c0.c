/* Ghidra address: 00f8e0c0 */
/* Ghidra symbol: FUN_00f8e0c0 */


void FUN_00f8e0c0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_20 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x278))(*(longlong **)(param_1 + 8));
  if (iVar1 == 0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_28,0x89b);
    FUN_0072d730(local_28,0xffffffff,0xffffffff);
  }
  else {
    FUN_010a6ea0(*(undefined8 *)(param_1 + 8),&local_c,&local_10);
    uVar2 = FUN_00f8b4b0(param_1,0,local_c,&local_14);
    if ((char)uVar2 == '\0') {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_20,0x89a);
      FUN_0072d730(local_20,0xffffffff,0xffffffff);
    }
    else {
      FUN_00f60390(*(undefined8 *)PTR_DAT_02002ba8,local_c,uVar2);
      _MCU_ToggleBreakPoint(*(undefined8 *)(param_1 + 0x60),local_14);
    }
    FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
                 *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
                 *(undefined4 *)(param_1 + 0x34a0));
    FUN_010a6f60(local_10,local_c,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x3498));
  }
  FUN_00414560(&local_28,2);
  return;
}

