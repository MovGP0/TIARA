/* Ghidra address: 01c1c060 */
/* Ghidra symbol: FUN_01c1c060 */


undefined ** FUN_01c1c060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_FUN_01c0a0b0;
  }
  else {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)PTR_DAT_02004068 + 0x20))
                        (*(longlong **)PTR_DAT_02004068,param_2);
  }
  return ppuVar2;
}

