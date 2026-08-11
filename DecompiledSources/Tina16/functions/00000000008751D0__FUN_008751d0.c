/* Ghidra address: 008751d0 */
/* Ghidra symbol: FUN_008751d0 */


longlong FUN_008751d0(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_008751c0();
  if (uVar1 < param_1) {
    lVar2 = -(param_1 - uVar1);
  }
  else {
    lVar2 = uVar1 - param_1;
  }
  return lVar2;
}

