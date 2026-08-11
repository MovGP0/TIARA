/* Ghidra address: 00723ed0 */
/* Ghidra symbol: FUN_00723ed0 */


longlong FUN_00723ed0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00442980(param_2,*(undefined2 *)(param_1 + 0x3e));
  if (lVar1 == 0) {
    FUN_004167d0(param_3,param_2);
    lVar1 = FUN_00442440(param_2);
  }
  else {
    FUN_00414740(param_3,param_2,(lVar1 - param_2) / 2 & 0xffffffff);
    lVar1 = lVar1 + 2;
  }
  return lVar1;
}

