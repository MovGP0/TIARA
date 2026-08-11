/* Ghidra address: 00440210 */
/* Ghidra symbol: FUN_00440210 */


undefined8 FUN_00440210(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (((param_2 & 3) < 3) && ((param_2 & 0xf0) < 0x41)) {
    uVar1 = FUN_00416740();
    uVar1 = thunk_FUN_041ac412(uVar1,*(undefined4 *)(&DAT_01dc047c + (ulonglong)(param_2 & 3) * 4),
                               *(undefined4 *)
                                (&DAT_01dc0488 + (ulonglong)((param_2 & 0xf0) >> 4) * 4),0,3,0x80,0)
    ;
  }
  return uVar1;
}

