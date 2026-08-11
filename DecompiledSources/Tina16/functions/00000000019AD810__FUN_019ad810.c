/* Ghidra address: 019ad810 */
/* Ghidra symbol: FUN_019ad810 */


void FUN_019ad810(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_0198a580(param_2);
  if ((byte)uVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x3aU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x68) != '\0') {
      (**(code **)(*param_2 + 0x1b8))(param_2,0,*(undefined8 *)(param_1 + 0x28),0);
    }
    (**(code **)(*param_2 + 0x1c0))(param_2,0,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

