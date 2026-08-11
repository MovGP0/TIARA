/* Ghidra address: 01430210 */
/* Ghidra symbol: FUN_01430210 */


undefined8 FUN_01430210(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar2 = (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
  if ((int)(uVar1 & 0xff) < iVar2) {
    (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],param_2,uVar1 & 0xff);
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

