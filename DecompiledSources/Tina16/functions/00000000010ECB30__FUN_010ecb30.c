/* Ghidra address: 010ecb30 */
/* Ghidra symbol: FUN_010ecb30 */


void FUN_010ecb30(longlong param_1,undefined8 param_2,undefined1 param_3,char param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 0x140) = param_2;
  *(undefined1 *)(param_1 + 0x148) = param_3;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
    if (0 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                            (*(longlong **)(lVar1 + 0xd8),iVar6);
          uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x30))
                            (*(longlong **)(lVar3 + 0x70),0);
          plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_010fdfc0);
          FUN_01101340(plVar5,param_2);
          *(undefined1 *)(plVar5 + 0x2c) = param_3;
          if (param_4 != '\0') {
            (**(code **)(*plVar5 + 0xc0))
                      (plVar5,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x10));
          }
          if (param_5 != '\0') {
            FUN_01aceb90(lVar1,0);
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

