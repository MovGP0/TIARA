/* Ghidra address: 0060d360 */
/* Ghidra symbol: FUN_0060d360 */


undefined8 FUN_0060d360(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[9];
  if (1 < *(int *)(lVar1 + 8)) {
    uVar2 = thunk_FUN_040b18f3(*(undefined8 *)(lVar1 + 0x20));
    FUN_0060d2c0(param_1,uVar2,0);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return uVar2;
}

