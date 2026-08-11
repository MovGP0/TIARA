/* Ghidra address: 00715060 */
/* Ghidra symbol: FUN_00715060 */


undefined8 FUN_00715060(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  FUN_0041b800(param_2);
  iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (iVar1 == 1) {
    lVar3 = (**(code **)(*param_3 + 0x30))(param_3,0);
    FUN_0041b840(param_2,*(undefined8 *)(lVar3 + 8));
  }
  else {
    iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((0 < iVar1) && (*(longlong *)(param_1 + 0x18) != 0)) {
      (**(code **)(*param_3 + 0x148))(param_3);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                        (*(longlong **)(param_1 + 0x18),param_3);
      lVar3 = (**(code **)(*param_3 + 0x30))(param_3,uVar2);
      FUN_0041b840(param_2,*(undefined8 *)(lVar3 + 8));
    }
  }
  return param_2;
}

