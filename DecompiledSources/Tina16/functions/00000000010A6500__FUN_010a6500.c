/* Ghidra address: 010a6500 */
/* Ghidra symbol: FUN_010a6500 */


void FUN_010a6500(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0xa18));
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x90))(*(longlong **)(param_1 + 0x9d8));
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_40,iVar4);
      FUN_00b8fd60(&local_48,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar4 * 8),
                   *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94),0,1
                  );
      FUN_00416cd0(&local_30,3,local_40[0],&LAB_010a66a8,local_48);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,iVar4);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9e8) + 0xb0))
                        (*(longlong **)(param_1 + 0x9e8),local_50);
      if (iVar2 != -1) {
        (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x78))
                  (*(longlong **)(param_1 + 0x9d8),local_30);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

