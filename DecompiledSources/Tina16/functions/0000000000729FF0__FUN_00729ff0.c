/* Ghidra address: 00729ff0 */
/* Ghidra symbol: FUN_00729ff0 */


void FUN_00729ff0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0) {
    if (param_2 == 0) {
      uVar1 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_02003e60);
      FUN_004134c0(uVar1);
    }
    FUN_00414ad0(param_1 + 0x18,param_2);
  }
  return;
}

