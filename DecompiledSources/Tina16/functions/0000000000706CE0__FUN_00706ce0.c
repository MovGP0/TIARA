/* Ghidra address: 00706ce0 */
/* Ghidra symbol: FUN_00706ce0 */


undefined8 FUN_00706ce0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  lVar1 = FUN_00706d40(&DAT_007040d0,1,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x28;
  }
  FUN_0041b840(param_2,lVar2);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return 0;
}

