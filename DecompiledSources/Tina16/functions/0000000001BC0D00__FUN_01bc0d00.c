/* Ghidra address: 01bc0d00 */
/* Ghidra symbol: FUN_01bc0d00 */


void FUN_01bc0d00(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar2);
  FUN_01bc0a90(param_1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

