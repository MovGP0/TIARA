/* Ghidra address: 00724270 */
/* Ghidra symbol: FUN_00724270 */


undefined8 FUN_00724270(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_222 [530];
  
  if (*(longlong *)(param_1 + 0x178) == 0) {
    if ((*PTR_DAT_02003210 == '\0') || (*(longlong *)(param_1 + 0x80) == 0)) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x108));
    }
    else {
      uVar1 = thunk_FUN_03de17fb(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041b2403(uVar1,0x465,0x105,local_222);
      FUN_00442b00(param_2,local_222);
    }
  }
  else {
    FUN_00723510(*(longlong *)(param_1 + 0x178),param_2);
  }
  return param_2;
}

