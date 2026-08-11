/* Ghidra address: 005382b0 */
/* Ghidra symbol: FUN_005382b0 */


void FUN_005382b0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00534f00(*param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (iVar1 < 1) {
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
  }
  else {
    FUN_00409a70(param_1 + 2,param_2,(longlong)iVar1);
  }
  return;
}

