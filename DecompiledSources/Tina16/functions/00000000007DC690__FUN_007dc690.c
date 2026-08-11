/* Ghidra address: 007dc690 */
/* Ghidra symbol: FUN_007dc690 */


undefined8 FUN_007dc690(undefined8 param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 local_218 [512];
  
  FUN_00414480(param_1);
  uVar1 = thunk_FUN_04146de6(param_2,0);
  if (uVar1 != 0) {
    iVar2 = thunk_FUN_03f24357((uint)uVar1 << 0x10,local_218,0x100);
    if (iVar2 == 0) {
      FUN_00414480(param_1);
    }
    else {
      FUN_00416830(param_1,local_218,0x100);
    }
  }
  return param_1;
}

