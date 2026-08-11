/* Ghidra address: 0185a870 */
/* Ghidra symbol: FUN_0185a870 */


undefined8 FUN_0185a870(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x68))(param_1);
  cVar1 = FUN_004113d0(param_2,uVar2);
  if ((cVar1 != '\0') && (cVar1 = FUN_00a3c2e0(param_2), cVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

