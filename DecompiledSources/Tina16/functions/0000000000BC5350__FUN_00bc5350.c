/* Ghidra address: 00bc5350 */
/* Ghidra symbol: FUN_00bc5350 */


ulonglong FUN_00bc5350(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)param_2;
  if (uVar2 < 0x20ac) {
    uVar1 = thunk_FUN_03e65ba4(uVar2);
    if ((ushort)uVar1 == uVar2) {
      uVar1 = thunk_FUN_041d6a30(uVar2);
    }
  }
  else {
    uVar1 = (ulonglong)param_2;
  }
  return uVar1;
}

