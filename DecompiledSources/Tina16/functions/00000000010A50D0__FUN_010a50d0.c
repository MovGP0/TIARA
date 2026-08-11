/* Ghidra address: 010a50d0 */
/* Ghidra symbol: FUN_010a50d0 */


void FUN_010a50d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x9d0) + 0x90))(*(longlong **)(param_1 + 0x9d0));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x18))
                (*(longlong **)(param_1 + 0x9f8),local_30,iVar3);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78);
      uVar4 = FUN_016164b0(*(undefined8 *)(lVar1 + 0x13980),lVar1,local_30[0]);
      FUN_00b8fd60(local_40,uVar4,
                   *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94),0,1
                  );
      FUN_00416cd0(local_30,3,local_30[0],&LAB_010a5234,local_40[0]);
      (**(code **)(**(longlong **)(param_1 + 0x9d0) + 0x78))
                (*(longlong **)(param_1 + 0x9d0),local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

