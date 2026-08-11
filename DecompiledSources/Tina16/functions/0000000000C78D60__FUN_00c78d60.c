/* Ghidra address: 00c78d60 */
/* Ghidra symbol: FUN_00c78d60 */


longlong FUN_00c78d60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_03a99535(param_1[0x53],0x480);
    if (lVar1 == 0) {
      lVar1 = thunk_FUN_03a99535(param_1[0x53],0x47c);
    }
  }
  return lVar1;
}

