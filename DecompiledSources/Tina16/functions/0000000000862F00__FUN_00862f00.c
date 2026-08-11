/* Ghidra address: 00862f00 */
/* Ghidra symbol: FUN_00862f00 */


undefined8 FUN_00862f00(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  uint local_10 [2];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  if (local_res10[0] == (longlong *)0x0) {
    FUN_0041b800(param_1);
  }
  else {
    uVar1 = (**(code **)(*local_res10[0] + 0x50))(local_res10[0],local_10);
    FUN_0041d630(uVar1);
    lVar2 = FUN_00863630(*(undefined8 *)(&DAT_01e1bf90 + (ulonglong)local_10[0] * 8),1,
                         local_res10[0]);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x40;
    }
    FUN_0041b840(param_1,lVar2);
  }
  FUN_0041b800(local_res10);
  return param_1;
}

