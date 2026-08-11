/* Ghidra address: 00ceb290 */
/* Ghidra symbol: FUN_00ceb290 */


void FUN_00ceb290(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00ceb1b0(*(undefined8 *)(param_1 + 0x78));
  FUN_00cc5380(param_3,local_20);
  FUN_00cc4c30(*(undefined8 *)(lVar1 + 0x18),local_20[0]);
  (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x10))
            (*(longlong **)(lVar1 + 0x20),*(undefined8 *)(param_2 + 0x10));
  FUN_00414480(local_20);
  return;
}

