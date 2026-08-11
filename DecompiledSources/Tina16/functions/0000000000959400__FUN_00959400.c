/* Ghidra address: 00959400 */
/* Ghidra symbol: FUN_00959400 */


bool FUN_00959400(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x38))(*(longlong **)(param_2 + 0x40));
  local_31 = iVar1 == 0;
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x38))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_2 + 0x40) + 0x28))
                (*(longlong **)(param_2 + 0x40),local_30,iVar3);
      iVar2 = FUN_00416420(local_30[0],param_3);
      if (iVar2 == 0) {
        local_31 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(local_30);
  return local_31;
}

