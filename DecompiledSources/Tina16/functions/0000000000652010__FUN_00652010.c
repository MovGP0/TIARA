/* Ghidra address: 00652010 */
/* Ghidra symbol: FUN_00652010 */


undefined8 FUN_00652010(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[0x21] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
    cVar1 = FUN_004113d0(param_1[0x21],uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

