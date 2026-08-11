/* Ghidra address: 01c1c220 */
/* Ghidra symbol: FUN_01c1c220 */


undefined ** FUN_01c1c220(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bd2b58);
    if (cVar1 == '\0') {
      ppuVar2 = &PTR_FUN_01c085b0;
    }
    else {
      ppuVar2 = &PTR_FUN_01c09708;
    }
  }
  else {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)PTR_DAT_02004068 + 0x18))
                        (*(longlong **)PTR_DAT_02004068,param_2);
  }
  return ppuVar2;
}

