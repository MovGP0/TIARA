/* Ghidra address: 01c97850 */
/* Ghidra symbol: FUN_01c97850 */


void FUN_01c97850(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_01c8a3c0(param_1,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00414ad0(puVar1,param_2);
    plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x1350));
    FUN_00441920(&local_28,*puVar1);
    FUN_004414c0(&local_20,local_28,0);
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(puVar1 + 7),local_20);
  }
  FUN_00414560(&local_28,2);
  return;
}

