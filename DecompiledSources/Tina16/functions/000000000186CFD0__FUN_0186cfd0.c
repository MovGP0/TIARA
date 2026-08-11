/* Ghidra address: 0186cfd0 */
/* Ghidra symbol: FUN_0186cfd0 */


undefined8 FUN_0186cfd0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar2,*(undefined2 *)PTR_DAT_02004c80);
  if (cVar1 == '\0') {
    uVar2 = FUN_006a6030();
    cVar1 = FUN_006a5ff0(uVar2,2);
    if (cVar1 == '\0') {
      uVar2 = FUN_006a6030();
      cVar1 = FUN_006a5ff0(uVar2,3);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}

