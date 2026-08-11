/* Ghidra address: 013f8f20 */
/* Ghidra symbol: FUN_013f8f20 */


void FUN_013f8f20(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x741) != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x760) = 0;
    }
    else {
      uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x718));
      *(undefined4 *)(param_1 + 0x760) = uVar2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x750) + 0x20) = *(undefined4 *)(param_1 + 0x760);
  }
  return;
}

