/* Ghidra address: 00723550 */
/* Ghidra symbol: FUN_00723550 */


void FUN_00723550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  FUN_007287b0(*(undefined8 *)(param_1 + 8),local_20);
  FUN_00724380(uVar3,local_20[0]);
  plVar2 = (longlong *)FUN_007241d0(uVar3);
  uVar3 = FUN_00728d30(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  lVar1 = *(longlong *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x150))(*(undefined8 *)(lVar1 + 0x158),lVar1,param_3);
  FUN_00414480(local_20);
  return;
}

