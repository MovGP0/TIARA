/* Ghidra address: 0108b4c0 */
/* Ghidra symbol: FUN_0108b4c0 */


void FUN_0108b4c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  lVar1 = *(longlong *)(param_1 + 0x700);
  FUN_00414b50(&local_38,*(undefined8 *)(lVar1 + 0xe0));
  FUN_00414b50(&local_40,*(undefined8 *)(lVar1 + 0x100));
  FUN_00414ad0(lVar1 + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0x100,&DAT_0108b6e4);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0xa8))(*(longlong **)(param_1 + 0x700));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x700),&local_30);
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar4 + 0xd8))(plVar4,local_30);
    iVar3 = (**(code **)(*plVar4 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        *(undefined1 *)(param_1 + 0xb50) = 1;
        (**(code **)(*plVar4 + 0x18))(plVar4,local_50,iVar5);
        FUN_0107a440(param_1,local_50[0],0,1);
        *(undefined1 *)(param_1 + 0xb50) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(plVar4);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0xe0,local_38);
  FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0x100,local_40);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

