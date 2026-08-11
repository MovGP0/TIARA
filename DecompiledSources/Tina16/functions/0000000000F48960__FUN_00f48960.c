/* Ghidra address: 00f48960 */
/* Ghidra symbol: FUN_00f48960 */


longlong FUN_00f48960(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1 + 8) == param_2) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *param_3 = param_1;
    param_1 = lVar1;
  }
  else {
    *param_3 = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar2 = FUN_00f48960(*(longlong *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
  }
  return param_1;
}

