/* Ghidra address: 0110c550 */
/* Ghidra symbol: FUN_0110c550 */


void FUN_0110c550(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar4);
        lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105d80);
        if ((*(char *)(lVar3 + 0x28) != '\0') && (*(longlong *)(lVar3 + 0x20) != 0)) {
          uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x20))(*(undefined8 **)(lVar3 + 0x20));
          FUN_00418590(uVar2,&DAT_01cf1390);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00e182a0(*param_2);
  return;
}

