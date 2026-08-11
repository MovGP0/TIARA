/* Ghidra address: 0177d710 */
/* Ghidra symbol: FUN_0177d710 */


void FUN_0177d710(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  plVar2 = (longlong *)FUN_00c79530(param_1);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar1) {
    FUN_00c79790(param_1,&local_28);
    plVar2 = (longlong *)FUN_00c79530(param_1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,0);
    FUN_00416cd0(local_20,3,local_28,&LAB_0177d7e8,local_30);
    FUN_0177c290(*(undefined8 *)(param_1 + 0x420),local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return;
}

