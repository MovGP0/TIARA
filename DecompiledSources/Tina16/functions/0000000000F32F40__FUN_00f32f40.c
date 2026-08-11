/* Ghidra address: 00f32f40 */
/* Ghidra symbol: FUN_00f32f40 */


int FUN_00f32f40(undefined8 param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x6e;
  uVar1 = (ulonglong)(param_3 + 1);
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x75;
  uVar1 = (ulonglong)(param_3 + 2);
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x6c;
  uVar1 = (ulonglong)(param_3 + 3);
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar1) = 0x6c;
  return param_3 + 4;
}

