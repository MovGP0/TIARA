/* Ghidra address: 00779f20 */
/* Ghidra symbol: FUN_00779f20 */


bool FUN_00779f20(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 char param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_5 == '\0') || (param_4 == 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_4);
  }
  bVar3 = false;
  if (cVar1 != '\0') {
    iVar2 = (**(code **)PTR_DAT_02003d88)(param_2,param_3,param_6);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

