/* Ghidra address: 00de18e0 */
/* Ghidra symbol: FUN_00de18e0 */


undefined8 FUN_00de18e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00ddee40();
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_007e7e50(lVar1,param_2);
    uVar2 = thunk_FUN_0412b700(param_3,*(undefined8 *)(lVar1 + 0x88),param_4,0,0);
  }
  return uVar2;
}

