/* Ghidra address: 01c8cee0 */
/* Ghidra symbol: FUN_01c8cee0 */


undefined8 FUN_01c8cee0(longlong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined *)0x0;
  if (*(longlong *)(param_1 + 0x2768) != 0) {
    puVar1 = (undefined *)(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x2768) + 0x80);
  }
  if (((char)puVar1 == '\0') &&
     ((*PTR_DAT_02003b28 == '\0' || (puVar1 = PTR_DAT_02001b10, *PTR_DAT_02001b10 != '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return uVar2;
}

