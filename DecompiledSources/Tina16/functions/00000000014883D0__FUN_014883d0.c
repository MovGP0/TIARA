/* Ghidra address: 014883d0 */
/* Ghidra symbol: FUN_014883d0 */


undefined1 FUN_014883d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_18 = FUN_00f34990(param_1,param_2);
  local_9 = local_18 != 0;
  if ((bool)local_9) {
    uVar1 = FUN_01488780(local_18);
    *param_3 = uVar1;
  }
  return local_9;
}

