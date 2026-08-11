/* Ghidra address: 00647eb0 */
/* Ghidra symbol: FUN_00647eb0 */


undefined8 FUN_00647eb0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (9 < *(int *)PTR_DAT_02001bd8)) && (0x3838 < *(int *)PTR_DAT_02002b20)) {
    uVar2 = GetWindowDpiAwarenessContext();
    iVar1 = AreDpiAwarenessContextsEqual(*(undefined8 *)PTR_DAT_02004f90,uVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

