/* Ghidra address: 0080e190 */
/* Ghidra symbol: FUN_0080e190 */


void FUN_0080e190(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*PTR_DAT_02003210 == '\0') {
    iVar1 = FUN_007f9220(*(undefined8 *)(param_1 + 0x2d0));
    if (iVar1 != 0) {
      thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x2d0),0,0xffffffff);
    }
  }
  else {
    uVar2 = FUN_0080bf20(param_1);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x2d0),0x80,1,uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x2d0);
    uVar3 = FUN_0080bf20(param_1);
    thunk_FUN_03b61ef5(uVar2,0xfffffff2,uVar3);
  }
  FUN_0080e110(param_1,0xb01d,0,0);
  return;
}

