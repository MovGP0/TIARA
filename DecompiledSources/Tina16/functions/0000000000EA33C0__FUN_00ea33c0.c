/* Ghidra address: 00ea33c0 */
/* Ghidra symbol: FUN_00ea33c0 */


void FUN_00ea33c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02002780);
    FUN_004134c0(uVar1);
  }
  FUN_00ea3330(param_1);
  uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x520);
  lVar3 = FUN_00e83800(uVar2,*(undefined4 *)(param_1 + 0x508),&local_10,&local_14,uVar1);
  uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(longlong *)(param_1 + 0x510) = lVar3;
  if (lVar3 == 0) {
    local_38[0] = local_14;
    local_30 = 0;
    FUN_004167a0(&local_40,local_10);
    local_28 = local_40;
    local_20 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_02003ad8,local_38,CONCAT44(uVar4,1));
    FUN_004134c0(uVar1);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00414480(&local_40);
  return;
}

