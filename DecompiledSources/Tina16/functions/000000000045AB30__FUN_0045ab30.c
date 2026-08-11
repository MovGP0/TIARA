/* Ghidra address: 0045ab30 */
/* Ghidra symbol: FUN_0045ab30 */


undefined8 FUN_0045ab30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  cVar1 = FUN_004589d0(uVar2,param_2);
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  return param_2;
}

