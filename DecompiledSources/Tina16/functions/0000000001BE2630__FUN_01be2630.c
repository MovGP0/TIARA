/* Ghidra address: 01be2630 */
/* Ghidra symbol: FUN_01be2630 */


longlong FUN_01be2630(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  *(undefined1 *)((longlong)param_1 + 0x593) = 1;
  local_20 = (**(code **)(*param_1 + 0x3a8))(param_1,param_2);
  if (local_20 == 0) {
    uVar1 = FUN_01be0910(param_1[0xc9]);
    local_28 = FUN_01c01290(uVar1);
    if ((local_28 != 0) && (*(longlong *)(local_28 + 0x80) != 0)) {
      (**(code **)(**(longlong **)(local_28 + 0x80) + 600))(*(longlong **)(local_28 + 0x80),1);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x593) = 0;
  return local_20;
}

