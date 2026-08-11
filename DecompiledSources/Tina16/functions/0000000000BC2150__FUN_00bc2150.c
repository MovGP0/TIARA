/* Ghidra address: 00bc2150 */
/* Ghidra symbol: FUN_00bc2150 */


undefined8 FUN_00bc2150(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((ushort)param_2 < 0x21) {
    uVar2 = 1;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 400))(param_1,param_2);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,param_2), cVar1 == '\0')
       ) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

