/* Ghidra address: 00c2b280 */
/* Ghidra symbol: FUN_00c2b280 */


void FUN_00c2b280(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_2 + 0x70))(param_2,uVar1);
  uVar1 = (**(code **)(*param_3 + 0x60))(param_3);
  (**(code **)(*param_2 + 0x88))(param_2,uVar1);
  FUN_00c1a6c0(param_2,6);
  plVar2 = (longlong *)FUN_00609e10(param_2);
  (**(code **)(*plVar2 + 0x88))(plVar2,0,0,param_3);
  return;
}

