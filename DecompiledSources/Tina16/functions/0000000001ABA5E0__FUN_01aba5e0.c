/* Ghidra address: 01aba5e0 */
/* Ghidra symbol: FUN_01aba5e0 */


void FUN_01aba5e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined1 local_48 [24];
  int local_30;
  int local_2c;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar6 = *(int *)(param_1[0x1f] + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(param_1[0x1f],iVar5);
      (**(code **)(*plVar3 + 0x120))(plVar3,param_3,param_2);
      (**(code **)(*plVar3 + 0x118))(plVar3);
      (**(code **)(*plVar3 + 0x128))(plVar3,param_3,param_2);
      uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  lVar4 = param_1[0x1d];
  if ((lVar4 != 0) && (param_1[0x1e] != 0)) {
    FUN_00498350(local_48,*(undefined4 *)(lVar4 + 0xe8),*(undefined4 *)(param_1[0x1e] + 0xec),
                 *(undefined4 *)(lVar4 + 0xec),CONCAT44(uVar1,*(undefined4 *)(param_1[0x1e] + 0xe8))
                );
    (**(code **)(*param_1 + 0xb0))(param_1,local_48);
    (**(code **)(*param_1 + 0xf0))(param_1,param_1[0x17],param_1[0x19],&local_2c,&local_30);
    lVar4 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x10))(*(longlong **)(lVar4 + 0x60),param_1[0xf]);
    (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Pole",lVar4);
    FUN_00f05410((double)(local_2c + -5));
    uVar1 = FUN_0040c770();
    FUN_00f05410((double)(local_30 + -5));
    uVar2 = FUN_0040c770();
    FUN_01d2c460(lVar4,uVar1,uVar2);
    FUN_00f05410((double)(local_2c + 5));
    uVar1 = FUN_0040c770();
    FUN_00f05410((double)(local_30 + 5));
    uVar2 = FUN_0040c770();
    FUN_01d2c460(lVar4,uVar1,uVar2);
    lVar4 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x10))(*(longlong **)(lVar4 + 0x60),param_1[0xf]);
    (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Pole",lVar4);
    FUN_00f05410((double)(local_2c + -5));
    uVar1 = FUN_0040c770();
    FUN_00f05410((double)(local_30 + 5));
    uVar2 = FUN_0040c770();
    FUN_01d2c460(lVar4,uVar1,uVar2);
    FUN_00f05410((double)(local_2c + 5));
    uVar1 = FUN_0040c770();
    FUN_00f05410((double)(local_30 + -5));
    uVar2 = FUN_0040c770();
    FUN_01d2c460(lVar4,uVar1,uVar2);
  }
  return;
}

