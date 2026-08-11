/* Ghidra address: 01831750 */
/* Ghidra symbol: FUN_01831750 */


undefined8 FUN_01831750(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),&local_30);
  uVar2 = FUN_004634b0(&local_30);
  lVar3 = FUN_0184b910(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0),0);
  uVar1 = FUN_004113d0(uVar2,*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x90));
  FUN_00468820(param_2,uVar1);
  FUN_00460ba0(&local_30);
  return param_2;
}

