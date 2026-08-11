/* Ghidra address: 00440290 */
/* Ghidra symbol: FUN_00440290 */


undefined8 FUN_00440290(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if ((param_2 & 0xf0) < 0x41) {
    uVar1 = FUN_00416740();
    uVar1 = thunk_FUN_041ac412(uVar1,0xc0000000,
                               *(undefined4 *)
                                (&DAT_01dc04a4 + (ulonglong)((param_2 & 0xf0) >> 4) * 4),0,
                               *(undefined4 *)(&DAT_01dc049c + (ulonglong)((param_2 & 4) >> 2) * 4),
                               0x80,0);
  }
  return uVar1;
}

