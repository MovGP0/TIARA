/* Ghidra address: 00e0edc0 */
/* Ghidra symbol: FUN_00e0edc0 */


undefined8 FUN_00e0edc0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VHDLTyp");
      if (iVar1 != 0) goto LAB_00e0ede6;
    }
    uVar2 = 1;
  }
  else {
LAB_00e0ede6:
    uVar2 = 0;
  }
  return uVar2;
}

