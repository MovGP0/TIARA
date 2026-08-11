/* Ghidra address: 01c94a50 */
/* Ghidra symbol: FUN_01c94a50 */


void FUN_01c94a50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_38 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfe8) + 0xa8))(*(longlong **)(param_1 + 0xfe8));
  if (cVar1 != '\0') {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00724270(*(undefined8 *)(param_1 + 0xfe8),&local_38);
    (**(code **)(*local_20 + 0xd8))(local_20,local_38);
    local_58 = local_20;
    local_28 = (longlong *)FUN_010bb2c0(0,&PTR_FUN_010ba368,10,0x14);
    (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x20))
              (*(longlong **)(param_1 + 0x27a8),local_28);
    FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
    FUN_01994230(*(undefined8 *)(param_1 + 0x27a8));
    FUN_01993f30(*(undefined8 *)(param_1 + 0x27a8),local_28,1,0);
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    FUN_019ab9a0(*(undefined8 *)(param_1 + 0x27a8),local_48);
    FUN_010bc210(local_28,uVar2,local_48,0);
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    (**(code **)(*local_28 + 0xa0))(local_28,uVar2);
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    (**(code **)(*local_28 + 0x100))(local_28,uVar2);
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_38);
  return;
}

