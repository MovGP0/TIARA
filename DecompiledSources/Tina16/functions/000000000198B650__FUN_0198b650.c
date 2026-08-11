/* Ghidra address: 0198b650 */
/* Ghidra symbol: FUN_0198b650 */


undefined4 FUN_0198b650(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00b95570(param_1,param_2);
  cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  if (cVar1 != '\0') {
    FUN_017ff630(param_2,param_1);
  }
  return uVar2;
}

