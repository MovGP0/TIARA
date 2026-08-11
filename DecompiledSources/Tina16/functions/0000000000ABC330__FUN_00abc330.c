/* Ghidra address: 00abc330 */
/* Ghidra symbol: FUN_00abc330 */


undefined8
FUN_00abc330(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00ac5310(*(undefined8 *)(param_1 + 0xf8),param_2,param_3,param_4,param_5,param_6);
  if (cVar1 == '\0') {
    uVar2 = FUN_00ac36f0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

