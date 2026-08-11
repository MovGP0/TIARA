/* Ghidra address: 006ddf60 */
/* Ghidra symbol: FUN_006ddf60 */


undefined8 FUN_006ddf60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_28 [24];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = FUN_006dc7a0(param_1);
    iVar1 = FUN_00611f20(uVar2,*(undefined8 *)(param_1 + 0x20),local_28,0xffffffff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

