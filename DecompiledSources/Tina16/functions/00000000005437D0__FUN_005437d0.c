/* Ghidra address: 005437d0 */
/* Ghidra symbol: FUN_005437d0 */


undefined8 FUN_005437d0(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined8 local_70;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [32];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_50 = 0;
  local_58 = 0;
  FUN_00417580(local_48,&DAT_00527bf8);
  puVar2 = (undefined8 *)FUN_0053c4c0(param_2);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  uVar3 = FUN_00542630(DAT_020116a8,uVar3);
  uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0052c330);
  uVar4 = FUN_0053c4c0(param_2);
  uVar1 = FUN_0053c4f0(param_2);
  lVar6 = *param_2;
  *param_2 = *param_2 + (ulonglong)uVar1;
  plVar5 = (longlong *)FUN_00543680(param_1,uVar3,uVar4);
  if (plVar5 == (longlong *)0x0) {
    local_70 = 0;
  }
  else {
    uVar4 = FUN_0054a100(uVar3);
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_58);
    FUN_00542ff0(param_1,&local_50,uVar3,lVar6,CONCAT44(uVar7,(uint)uVar1),local_58);
    lVar6 = 0;
    if (local_50 != 0) {
      lVar6 = *(longlong *)(local_50 + -8);
    }
    FUN_00557cd0(plVar5,local_48,uVar4,local_50,lVar6 + -1);
    local_70 = FUN_005649b0(local_48,1);
  }
  FUN_00419430(&local_58,&DAT_00531510);
  FUN_00419430(&local_50,&DAT_00492e48);
  FUN_00417740(local_48,&DAT_00527bf8);
  return local_70;
}

