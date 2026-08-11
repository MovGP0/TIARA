/* Ghidra address: 00cd1040 */
/* Ghidra symbol: FUN_00cd1040 */


undefined8 FUN_00cd1040(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)PTR_DAT_02004608)(*(undefined8 *)(param_1 + 0x18));
  iVar2 = (int)uVar1;
  if (iVar2 < 4) {
    if (iVar2 == 3) {
      uVar1 = 3;
    }
    else if (iVar2 == 0) {
      uVar1 = 0;
    }
    else if (iVar2 == 1) {
      uVar1 = 1;
    }
    else if (iVar2 == 2) {
      uVar1 = 2;
    }
  }
  else if (iVar2 == 5) {
    uVar1 = 5;
  }
  else if (iVar2 == 6) {
    uVar1 = 6;
  }
  return uVar1;
}

