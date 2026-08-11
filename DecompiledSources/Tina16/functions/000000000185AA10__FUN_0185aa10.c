/* Ghidra address: 0185aa10 */
/* Ghidra symbol: FUN_0185aa10 */


undefined8 FUN_0185aa10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0185a870(&PTR_FUN_018585b0,*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x148);
  }
  else {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar2 = FUN_01859e20(&PTR_FUN_018585b0,*(undefined8 *)(param_1 + 0x10),7);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x18));
  }
  return uVar2;
}

