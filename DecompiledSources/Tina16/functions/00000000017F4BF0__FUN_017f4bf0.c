/* Ghidra address: 017f4bf0 */
/* Ghidra symbol: FUN_017f4bf0 */


void FUN_017f4bf0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_48 = FUN_017f3ff0(&DAT_017f39d0,1,10);
  local_30 = FUN_017f3ff0(&DAT_017f39d0,1,10);
  *(code **)(local_30 + 0x28) = FUN_017f46d0;
  FUN_017f40f0(local_48,&local_40);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_017f4830(auStack_68,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_017f41b0(param_3,local_48);
  FUN_00410f20(local_48);
  FUN_00410f20(local_30);
  return;
}

