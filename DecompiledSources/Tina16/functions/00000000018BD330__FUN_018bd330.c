/* Ghidra address: 018bd330 */
/* Ghidra symbol: FUN_018bd330 */


void FUN_018bd330(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_01810fa0(&DAT_018103d8,1,0);
  uVar1 = FUN_018039f0(*(undefined8 *)(param_1 + 0x78),param_2);
  FUN_018039a0(uVar1);
  uVar1 = FUN_018039f0(*(undefined8 *)(param_1 + 0x78),param_2);
  FUN_018140f0(local_10,param_3,1,uVar1);
  lVar2 = FUN_018039f0(*(undefined8 *)(param_1 + 0x78),param_2);
  *(undefined1 *)(lVar2 + 0x38) = 0;
  FUN_018b7df0(param_1);
  FUN_00410f20(local_10);
  return;
}

