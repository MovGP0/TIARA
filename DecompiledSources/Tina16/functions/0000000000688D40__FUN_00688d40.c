/* Ghidra address: 00688d40 */
/* Ghidra symbol: FUN_00688d40 */


void FUN_00688d40(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if ((cVar2 != '\0') && (param_1[0x9d] != 0)) {
    uVar1 = FUN_007d56e0(param_1[0x9d]);
    FUN_006886b0(param_1,uVar1);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

