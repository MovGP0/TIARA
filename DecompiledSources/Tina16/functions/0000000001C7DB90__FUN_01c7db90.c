/* Ghidra address: 01c7db90 */
/* Ghidra symbol: FUN_01c7db90 */


void FUN_01c7db90(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30 [8];
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00417580(local_30,&DAT_0052f3d0);
  plVar2 = (longlong *)FUN_00545db0(local_30,&PTR_FUN_01c4d9f0);
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_38);
  uVar4 = 0;
  while( true ) {
    uVar3 = 0;
    if (local_38 != 0) {
      uVar3 = *(ulonglong *)(local_38 + -8);
    }
    if (uVar3 <= uVar4) break;
    plVar2 = *(longlong **)(local_38 + uVar4 * 8);
    if (*(longlong *)(param_1 + 0x27e8) != 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_40);
      iVar1 = FUN_00416db0(local_40,*(undefined8 *)(param_1 + 0x27e8));
      if (iVar1 == 0) {
        FUN_00536640(&local_a0,0);
        local_80 = local_a0;
        uStack_78 = uStack_98;
        uStack_70 = uStack_90;
        uStack_68 = uStack_88;
        FUN_00557c30(plVar2,&local_60,param_1,&local_80,0);
      }
    }
    uVar4 = uVar4 + 1;
  }
  FUN_00419430(&local_38,&DAT_0052f648);
  FUN_00417740(&local_a0,&DAT_00527bf8);
  FUN_00417740(&local_60,&DAT_00527bf8);
  FUN_00414480(&local_40);
  FUN_00419430(&local_38,&DAT_0052f648);
  FUN_00417740(local_30,&DAT_0052f3d0);
  return;
}

