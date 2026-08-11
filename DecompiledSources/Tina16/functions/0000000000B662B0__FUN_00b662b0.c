/* Ghidra address: 00b662b0 */
/* Ghidra symbol: FUN_00b662b0 */


void FUN_00b662b0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  FUN_00b44ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60),local_20,
               *(undefined4 *)(param_1 + 0x48));
  FUN_004b6dc0(local_20,0);
  lVar2 = (**(code **)*local_20)(local_20);
  if (0 < lVar2) {
    uVar1 = (**(code **)*local_20)(local_20);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_20[1],uVar1);
  }
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return;
}

