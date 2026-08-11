/* Ghidra address: 007241e0 */
/* Ghidra symbol: FUN_007241e0 */


undefined8 FUN_007241e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_004238d0(param_2,0,0,0,0);
  }
  else if ((*(uint *)(param_1 + 0xd8) & 0x10000) == 0) {
    uVar2 = thunk_FUN_03a99535(lVar1,0x45f);
    thunk_FUN_03e49910(uVar2,param_2);
    thunk_FUN_0411b3be(0,*(undefined8 *)(param_1 + 0x80),param_2,2);
  }
  else {
    thunk_FUN_03abe598(lVar1,param_2);
  }
  return param_2;
}

