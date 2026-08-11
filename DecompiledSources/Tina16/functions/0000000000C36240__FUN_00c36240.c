/* Ghidra address: 00c36240 */
/* Ghidra symbol: FUN_00c36240 */


longlong * FUN_00c36240(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00c31db0(&LAB_00c19000,1,param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,(int)param_1[0x11]);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
  uVar1 = FUN_00c36110(param_1);
  (**(code **)(*plVar2 + 8))(plVar2,uVar1);
  (**(code **)*plVar2)(plVar2,(char)param_1[9]);
  return plVar2;
}

