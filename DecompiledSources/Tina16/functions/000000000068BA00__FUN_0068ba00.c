/* Ghidra address: 0068ba00 */
/* Ghidra symbol: FUN_0068ba00 */


int FUN_0068ba00(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((char)param_1[0x92] == '\0') {
    uVar3 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_041b2403(uVar3,0x188,0,0);
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_041b2403(uVar3,0x19f,0,0);
    iVar2 = (**(code **)(*param_1 + 0x298))(param_1);
    if (iVar2 <= iVar1) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

