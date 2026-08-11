/* Ghidra address: 0086e8c0 */
/* Ghidra symbol: FUN_0086e8c0 */


undefined4
FUN_0086e8c0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    iVar1 = FUN_00876b00(param_3,param_4,param_5);
    if (0 < iVar1) {
      uVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_3 + param_5,iVar1);
    }
  }
  return uVar2;
}

