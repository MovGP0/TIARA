/* Ghidra address: 00704800 */
/* Ghidra symbol: FUN_00704800 */


void FUN_00704800(longlong *param_1,longlong param_2)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if (*(byte *)(param_1 + 0xb0) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0xb0) & 0x1f) &
            3U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_0065b830(param_1);
    thunk_FUN_041b2403(param_1[0x9f],0xb0,*(undefined8 *)(param_2 + 8),
                       *(undefined8 *)(param_2 + 0x10));
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

