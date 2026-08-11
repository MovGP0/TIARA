/* Ghidra address: 007d7940 */
/* Ghidra symbol: FUN_007d7940 */


bool FUN_007d7940(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 param_5,byte param_6,undefined4 param_7)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if ((param_6 & 2) != 0) {
    uVar1 = 0x40;
  }
  if ((param_6 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_6 & 8) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_6 & 0x10) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_6 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  lVar2 = FUN_00611c30(param_2,param_4,param_5,*(undefined4 *)(param_1 + 0x98),param_7,
                       *(undefined4 *)(&DAT_01e125a4 + (param_3 & 0xff) * 4),uVar1);
  if (lVar2 != 0) {
    FUN_007d6e60(param_1,lVar2,0xffffffff);
    thunk_FUN_04122858(lVar2);
  }
  return lVar2 != 0;
}

