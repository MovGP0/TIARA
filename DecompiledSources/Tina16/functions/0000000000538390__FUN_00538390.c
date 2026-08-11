/* Ghidra address: 00538390 */
/* Ghidra symbol: FUN_00538390 */


undefined8 * FUN_00538390(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00534f00(*param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (iVar1 < 1) {
    param_1 = (undefined8 *)(**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1]);
  }
  else {
    param_1 = param_1 + 2;
  }
  return param_1;
}

