/* Ghidra address: 019ad660 */
/* Ghidra symbol: FUN_019ad660 */


undefined4 FUN_019ad660(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined1 *)(local_20 + 0x49) = 1;
  FUN_004b6d10(local_20,1);
  FUN_004b67b0(local_20,1);
  FUN_019ad2f0(param_1,param_1,local_20);
  uVar1 = FUN_019ad570(auStack_48,param_2);
  FUN_00410f20(local_20);
  return uVar1;
}

