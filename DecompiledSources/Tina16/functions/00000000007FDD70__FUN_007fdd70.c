/* Ghidra address: 007fdd70 */
/* Ghidra symbol: FUN_007fdd70 */


bool FUN_007fdd70(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_00652010(param_1);
  if (cVar1 == '\0') {
    if (param_1[0x21] == 0) {
      lVar2 = (**(code **)(*param_1 + 0x100))(param_1);
      bVar3 = lVar2 == *param_1;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

