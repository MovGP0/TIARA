/* Ghidra address: 01bf8fc0 */
/* Ghidra symbol: FUN_01bf8fc0 */


void FUN_01bf8fc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_01c07a90(DAT_02111470,0);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_20);
  FUN_004c81b0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

