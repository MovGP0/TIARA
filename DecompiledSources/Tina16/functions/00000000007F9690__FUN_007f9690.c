/* Ghidra address: 007f9690 */
/* Ghidra symbol: FUN_007f9690 */


longlong FUN_007f9690(undefined *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  DAT_01e13ff8 = 0;
  DAT_01e14000 = 0;
  PTR_DAT_01e13ff0 = param_1;
  uVar1 = FUN_00427ab0();
  thunk_FUN_0413b16e(uVar1,FUN_007f9610,0);
  lVar2 = DAT_01e14000;
  if (DAT_01e13ff8 != 0) {
    lVar2 = DAT_01e13ff8;
  }
  return lVar2;
}

