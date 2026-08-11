/* Ghidra address: 00957340 */
/* Ghidra symbol: FUN_00957340 */


undefined8 FUN_00957340(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  longlong local_68;
  longlong local_30 [2];
  
  if (param_3 == 0) {
    local_88[0] = param_2;
    FUN_00597e50(*(longlong *)(param_1 + 8) + 8,local_88);
  }
  else {
    local_68 = *(longlong *)(param_1 + 8) + 8;
    local_30[0] = param_3;
    uVar1 = FUN_00596a10(local_68,local_30);
    local_78[0] = param_2;
    FUN_00599f70(*(longlong *)(param_1 + 8) + 8,uVar1,local_78);
  }
  return param_2;
}

