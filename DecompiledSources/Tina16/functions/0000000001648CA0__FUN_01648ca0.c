/* Ghidra address: 01648ca0 */
/* Ghidra symbol: FUN_01648ca0 */


undefined1 FUN_01648ca0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5a0) + 0x18))
            (*(longlong **)(param_1 + 0x5a0),local_20,param_2);
  FUN_01b218c0(local_20[0],&local_28,&local_30);
  uVar1 = FUN_01b217f0(local_30);
  FUN_00414560(&local_30,3);
  return uVar1;
}

