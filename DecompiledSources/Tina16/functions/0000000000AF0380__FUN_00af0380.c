/* Ghidra address: 00af0380 */
/* Ghidra symbol: FUN_00af0380 */


void FUN_00af0380(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414ad0(param_1 + 0x8e0,param_2);
  if (param_3 == 0) {
    FUN_00414ad0(param_1 + 0x780,*(undefined8 *)(param_1 + 0x788));
  }
  else {
    FUN_00414ad0(param_1 + 0x780,param_3);
  }
  FUN_00414ad0(param_1 + 0x790,param_4);
  if (*(longlong *)(param_1 + 0x698) != 0) {
    (**(code **)(param_1 + 0x698))(*(undefined8 *)(param_1 + 0x6a0),param_1);
  }
  *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) | 2;
  FUN_00aa84c0(*(undefined8 *)(param_1 + 0x8b0));
  FUN_00af2250(param_1);
  *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xfffd;
  return;
}

