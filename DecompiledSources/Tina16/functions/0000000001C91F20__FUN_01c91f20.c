/* Ghidra address: 01c91f20 */
/* Ghidra symbol: FUN_01c91f20 */


void FUN_01c91f20(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  if (*PTR_DAT_02003180 == '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb0))
              (*(longlong **)(param_1 + 0x24b8),L"Active Files",plVar3);
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004b5390(plVar3,&local_48,iVar4);
        FUN_00415dd0(&local_50,local_48,0);
        FUN_00b0d000(local_40,local_50,0xfde9);
        FUN_004168b0(local_30,local_40[0]);
        cVar1 = FUN_00440a20(local_30[0],1);
        if (cVar1 != '\0') {
          FUN_01c681b0(param_1,local_30[0],0,0,0,0,1);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb8))
              (*(longlong **)(param_1 + 0x24b8),L"Active Files");
  }
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414520(local_40);
  FUN_00414480(local_30);
  return;
}

