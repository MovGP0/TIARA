/* Ghidra address: 010b8b60 */
/* Ghidra symbol: FUN_010b8b60 */


undefined4 FUN_010b8b60(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x188))(param_1), cVar1 != '\0')) {
    (**(code **)(*param_1 + 400))(param_1);
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2);
  return uVar2;
}

