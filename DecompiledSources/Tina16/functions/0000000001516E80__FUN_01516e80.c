/* Ghidra address: 01516e80 */
/* Ghidra symbol: FUN_01516e80 */


bool FUN_01516e80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8));
  lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_3);
  iVar2 = FUN_01516cf0(*(undefined8 *)(lVar4 + 8));
  iVar3 = FUN_01516cf0(*(undefined8 *)(lVar5 + 8));
  if (iVar2 < iVar3) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_01516cf0(*(undefined8 *)(lVar4 + 8));
    iVar3 = FUN_01516cf0(*(undefined8 *)(lVar5 + 8));
    if (iVar3 < iVar2) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_00416d10(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar5 + 8));
      bVar1 = 0 < iVar2;
    }
  }
  return bVar1;
}

