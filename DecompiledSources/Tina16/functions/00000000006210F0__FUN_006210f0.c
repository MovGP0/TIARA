/* Ghidra address: 006210f0 */
/* Ghidra symbol: FUN_006210f0 */


undefined4
FUN_006210f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_004334c0);
  if (cVar1 == '\0') {
    FUN_00414520(&local_20);
    uVar3 = 0xffffffff;
    uVar2 = 0;
  }
  else {
    FUN_004168e0(&local_20,*(undefined8 *)(param_1 + 8));
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_00620998);
    if ((cVar1 == '\0') || (-1 < *(int *)(param_1 + 0x30))) {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_00434b98);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xa0004004;
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
    }
  }
  uVar3 = FUN_00620f50(local_20,uVar3,uVar2,param_3,param_4,param_5);
  FUN_00414520(&local_20);
  return uVar3;
}

