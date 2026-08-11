/* Ghidra address: 00baed00 */
/* Ghidra symbol: FUN_00baed00 */


undefined8 FUN_00baed00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 == '\0') {
    FUN_0041b800(param_2);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
              (*(longlong **)(param_1 + 0x30),param_2,iVar2 + -1);
  }
  return param_2;
}

