/* Ghidra address: 0110c830 */
/* Ghidra symbol: FUN_0110c830 */


void FUN_0110c830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((0 < iVar1) && (-1 < *(int *)(param_1 + 0x1c))) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) <= iVar1 + -1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105d80);
      *(undefined8 *)(lVar3 + 0x120) = param_2;
      FUN_00e186e0(*(undefined8 *)(lVar3 + 0x120));
      if ((PTR_DAT_02004010[0x7c6] != '\0') && (*(longlong *)(lVar3 + 0x20) != 0)) {
        iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x98),L"Dummycska");
        if (iVar1 != 0) {
          FUN_01539230(*(undefined8 *)(lVar3 + 0x20),*(undefined1 *)(lVar3 + 0x110),
                       *(undefined8 *)(lVar3 + 0x120),*(undefined8 *)(lVar3 + 0x118),
                       *(undefined8 *)(lVar3 + 0x130),*(undefined8 *)(lVar3 + 0x128));
        }
      }
    }
  }
  return;
}

