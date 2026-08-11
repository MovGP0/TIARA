/* Ghidra address: 013efb40 */
/* Ghidra symbol: FUN_013efb40 */


void FUN_013efb40(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_40 [2];
  short local_2c [2];
  short local_28;
  undefined4 local_1c;
  
  local_40[0] = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x669) = 0;
  if (*PTR_DAT_020039a8 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),0);
    lVar2 = *(longlong *)(param_1 + 0x6b0);
    FUN_0082bc30(lVar2,0);
    *(undefined4 *)(lVar2 + 0x4f0) = 0;
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_40,0x130);
    FUN_0064de00(lVar2,local_40[0]);
    FUN_0082ba70(lVar2,0);
    FUN_0082bff0(lVar2,0xffffffff);
    lVar2 = *(longlong *)(param_1 + 0x6f8);
    FUN_008483b0(lVar2,1);
    FUN_00848a30(lVar2,0);
    *(undefined8 *)PTR_DAT_02005518 = *(undefined8 *)(param_1 + 0x708);
    *PTR_DAT_02002cb8 = 2;
    FUN_00849e90(lVar2,local_2c,*(undefined4 *)(lVar2 + 0x4a8),*(undefined4 *)(lVar2 + 0x4ac));
    local_1c = CONCAT22(local_28 + 7,local_2c[0] + 10);
    uVar1 = FUN_0065b870(param_1);
    lVar2 = (longlong)local_1c;
    thunk_FUN_0413e052(uVar1,0x202,0,lVar2);
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar1,0x201,0,lVar2);
  }
  FUN_00414480(local_40);
  return;
}

