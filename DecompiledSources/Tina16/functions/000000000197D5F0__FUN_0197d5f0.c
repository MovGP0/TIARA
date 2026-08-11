/* Ghidra address: 0197d5f0 */
/* Ghidra symbol: FUN_0197d5f0 */


void FUN_0197d5f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),param_2);
  if (iVar2 != 0) {
    lVar1 = FUN_0197d570(param_1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) && (*(longlong *)(lVar1 + 0x60) != 0))
    {
      (**(code **)(lVar1 + 0x60))(*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(param_1 + 0x38),0,0)
      ;
      (**(code **)(lVar1 + 0x50))
                (*(undefined8 *)(lVar1 + 0x58),param_2,0,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_00414ad0(param_1 + 0x38,param_2);
  }
  return;
}

