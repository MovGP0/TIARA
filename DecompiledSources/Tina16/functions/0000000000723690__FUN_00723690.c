/* Ghidra address: 00723690 */
/* Ghidra symbol: FUN_00723690 */


void FUN_00723690(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_007287b0(*(undefined8 *)(param_1 + 8),&local_20);
  FUN_00724380(lVar1,local_20);
  plVar2 = (longlong *)FUN_007241d0(lVar1);
  uVar3 = FUN_00728d30(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  (**(code **)(lVar1 + 0x120))(*(undefined8 *)(lVar1 + 0x128),*(undefined8 *)(param_1 + 0x10));
  FUN_00414480(&local_20);
  return;
}

