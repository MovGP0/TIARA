/* Ghidra address: 00ac0980 */
/* Ghidra symbol: FUN_00ac0980 */


void FUN_00ac0980(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00a4a4c0(&local_20,param_2);
  lVar1 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,param_1,
                       *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x60));
  *(undefined1 *)(lVar1 + 0x31) = param_2;
  uVar2 = FUN_004aeac0(param_1,*(int *)(param_1 + 0x10) + -1);
  FUN_00a52a80(lVar1,local_20,uVar2);
  FUN_004ae7e0(param_1,lVar1);
  FUN_00a57b50(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x280),param_2,local_20,param_5
               ,param_3,param_4,*(int *)(param_1 + 0x10) + -1);
  FUN_00414480(&local_20);
  return;
}

