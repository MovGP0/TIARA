/* Ghidra address: 0186ce20 */
/* Ghidra symbol: FUN_0186ce20 */


undefined8 FUN_0186ce20(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar2,0xd);
  if (cVar1 == '\0') {
    uVar2 = FUN_006a6030();
    cVar1 = FUN_006a5ff0(uVar2,1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

