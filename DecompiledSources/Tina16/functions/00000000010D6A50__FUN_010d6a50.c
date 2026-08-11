/* Ghidra address: 010d6a50 */
/* Ghidra symbol: FUN_010d6a50 */


undefined4 FUN_010d6a50(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_010d6760(param_1,param_2,param_3);
  iVar3 = 0;
  while( true ) {
    iVar2 = FUN_010d6a10(param_1);
    if ((iVar2 != 0) || (599 < iVar3)) break;
    thunk_FUN_0419965d(10);
    iVar3 = iVar3 + 1;
  }
  if (param_2 != 2) {
    *(bool *)(param_1 + 0xb8) = *(int *)(param_1 + 0x9c) != 2;
  }
  if (*(int *)(param_1 + 0x9c) == 2) {
    if ((param_2 == 1) || (param_2 == 3)) {
      FUN_01b21020(&local_20,*(undefined8 *)(param_1 + 0x90));
      FUN_00414bf0(param_1 + 0x38,local_20);
    }
    FUN_00416880(&local_28,*(undefined8 *)(param_1 + 0x38));
    FUN_017e2980(*(undefined8 *)(param_1 + 0x50),local_28);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00414480(&local_28);
  FUN_004144d0(&local_20);
  return uVar1;
}

