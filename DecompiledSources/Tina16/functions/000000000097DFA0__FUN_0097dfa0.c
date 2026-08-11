/* Ghidra address: 0097dfa0 */
/* Ghidra symbol: FUN_0097dfa0 */


void FUN_0097dfa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  puVar1 = auStack_68;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = FUN_0096fb60(&PTR_FUN_0091e580,1,param_1,param_2);
    uVar2 = FUN_00414520(&local_28);
    uVar3 = FUN_00414520(&local_30);
    FUN_0097ded0(auStack_68,param_3,uVar2,uVar3);
    FUN_00414b90(local_20 + 0x90,local_28);
    FUN_00414b90(local_20 + 0x88,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004145c0(&local_30,2);
  return;
}

