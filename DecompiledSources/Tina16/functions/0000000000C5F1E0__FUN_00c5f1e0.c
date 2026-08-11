/* Ghidra address: 00c5f1e0 */
/* Ghidra symbol: FUN_00c5f1e0 */


bool FUN_00c5f1e0(longlong *param_1,undefined2 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1[2] != 0) {
    if ((char)param_1[3] != '\0') {
      (**(code **)(*param_1 + 0x68))(param_1);
    }
    uVar1 = FUN_0065b870(param_1[2]);
    lVar2 = thunk_FUN_04176ccd(uVar1,0x7d6f,param_2,0);
    bVar3 = lVar2 != 0;
    *(bool *)(param_1 + 3) = bVar3;
  }
  return bVar3;
}

