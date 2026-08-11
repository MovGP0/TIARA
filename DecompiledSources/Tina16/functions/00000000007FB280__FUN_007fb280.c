/* Ghidra address: 007fb280 */
/* Ghidra symbol: FUN_007fb280 */


void FUN_007fb280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x4a8) = 0;
  plVar1 = (longlong *)FUN_00781840();
  uVar2 = (**(code **)(*plVar1 + 600))(plVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_2 + 0x40));
    thunk_FUN_041b2403(uVar3,0x85,0,0);
  }
  return;
}

