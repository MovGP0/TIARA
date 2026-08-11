/* Ghidra address: 01c1c280 */
/* Ghidra symbol: FUN_01c1c280 */


undefined ** FUN_01c1c280(void)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_FUN_01c09cf8;
  }
  else {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)PTR_DAT_02004068 + 0x28))(*(longlong **)PTR_DAT_02004068);
  }
  return ppuVar2;
}

