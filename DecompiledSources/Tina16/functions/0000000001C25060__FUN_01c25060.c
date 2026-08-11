/* Ghidra address: 01c25060 */
/* Ghidra symbol: FUN_01c25060 */


void FUN_01c25060(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00609e10(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x4d0));
  uVar1 = FUN_005ffa40(uVar1);
  thunk_FUN_039bba01(uVar1,0);
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0xa8));
  return;
}

