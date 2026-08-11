/* Ghidra address: 006f8220 */
/* Ghidra symbol: FUN_006f8220 */


undefined8 * FUN_006f8220(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00414480(param_2);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1075,0,0);
    if (0 < iVar2) {
      FUN_004169f0(param_2,iVar2);
      uVar3 = FUN_0065b870(param_1);
      uVar4 = FUN_00416740(*param_2);
      thunk_FUN_041b2403(uVar3,0x1075,0,uVar4);
    }
  }
  return param_2;
}

