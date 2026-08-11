/* Ghidra address: 0123db90 */
/* Ghidra symbol: FUN_0123db90 */


void FUN_0123db90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  short local_res18;
  short sStackX_1a;
  
  plVar1 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
  FUN_0149ec30(plVar1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),plVar1);
  uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x50));
  local_res18 = (short)param_3;
  sStackX_1a = (short)((uint)param_3 >> 0x10);
  (**(code **)(*plVar1 + 0xe8))(plVar1,uVar2,(longlong)local_res18,(longlong)sStackX_1a);
  return;
}

