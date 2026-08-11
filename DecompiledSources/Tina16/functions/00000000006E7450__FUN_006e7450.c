/* Ghidra address: 006e7450 */
/* Ghidra symbol: FUN_006e7450 */


void FUN_006e7450(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f2d40);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006bce00);
    if (cVar1 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      uVar2 = FUN_006e7050(param_2);
      FUN_006e7090(param_1,uVar2);
      FUN_006e70f0(param_2,&local_28);
      FUN_006e7130(param_1,local_28);
      uVar2 = FUN_006e6f50(param_2);
      FUN_006e6f80(param_1,uVar2);
      uVar2 = FUN_006e71c0(param_2);
      FUN_006e7230(param_1,uVar2);
      uVar2 = FUN_006e73a0(param_2);
      FUN_006e73f0(param_1,uVar2);
      uVar2 = FUN_006e72c0(param_2);
      FUN_006e72f0(param_1,uVar2);
    }
  }
  else {
    FUN_006e7090(param_1,*(undefined4 *)(param_2 + 0x28));
    FUN_005fccd0(param_2,local_20);
    FUN_006e7130(param_1,local_20[0]);
    uVar2 = FUN_005fcf90(param_2);
    FUN_006e6f80(param_1,uVar2);
    FUN_006e7230(param_1,*(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x31));
    uVar2 = FUN_005fce00(param_2);
    FUN_006e72f0(param_1,uVar2);
    uVar2 = FUN_005fced0(param_2);
    FUN_006e73f0(param_1,uVar2);
  }
  FUN_00414560(&local_28,2);
  return;
}

