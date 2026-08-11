/* Ghidra address: 01cfdb80 */
/* Ghidra symbol: FUN_01cfdb80 */


undefined8 FUN_01cfdb80(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_01d04d90(param_1);
  if ((cVar1 != '\0') &&
     (iVar2 = (**(code **)(**(longlong **)(param_1[0x35] + 0x1a0) + 0x28))
                        (*(longlong **)(param_1[0x35] + 0x1a0)), param_3 < iVar2)) {
    (**(code **)(**(longlong **)(param_1[0x35] + 0x1a0) + 0x18))
              (*(longlong **)(param_1[0x35] + 0x1a0),param_2,param_3);
    return param_2;
  }
  cVar1 = FUN_01d04db0(param_1);
  if ((cVar1 != '\0') &&
     (iVar2 = (**(code **)(**(longlong **)(param_1[0x35] + 0x100) + 0x28))
                        (*(longlong **)(param_1[0x35] + 0x100)), param_3 < iVar2)) {
    (**(code **)(**(longlong **)(param_1[0x35] + 0x100) + 0x18))
              (*(longlong **)(param_1[0x35] + 0x100),param_2,param_3);
    return param_2;
  }
  (**(code **)(*param_1 + 0x298))(param_1,param_2,param_3);
  return param_2;
}

