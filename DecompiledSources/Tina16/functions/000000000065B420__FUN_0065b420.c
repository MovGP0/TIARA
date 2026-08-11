/* Ghidra address: 0065b420 */
/* Ghidra symbol: FUN_0065b420 */


void FUN_0065b420(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    uVar1 = FUN_0065b870(param_1);
    lVar2 = thunk_FUN_040ef593(uVar1);
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    lVar2 = thunk_FUN_03dfb93b(uVar1,0,0x12);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0044d710(&PTR_FUN_00472738,1,PTR_PTR_02003d90);
    FUN_004134c0(uVar1);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x468);
  return;
}

