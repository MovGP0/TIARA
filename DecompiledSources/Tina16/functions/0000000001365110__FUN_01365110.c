/* Ghidra address: 01365110 */
/* Ghidra symbol: FUN_01365110 */


bool FUN_01365110(longlong *param_1,int param_2,undefined2 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2);
    uVar1 = FUN_0065b870(param_1[2]);
    lVar2 = thunk_FUN_04176ccd(uVar1,(longlong)param_2,param_3,0);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

