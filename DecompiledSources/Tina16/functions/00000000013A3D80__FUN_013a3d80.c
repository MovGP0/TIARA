/* Ghidra address: 013a3d80 */
/* Ghidra symbol: FUN_013a3d80 */


void FUN_013a3d80(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_50 = 0;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x6d8) = 1;
    uVar3 = FUN_019a4600();
    cVar2 = FUN_01396990(uVar3);
    if (cVar2 != '\0') {
      uVar3 = FUN_019a4600();
      FUN_01396fa0(uVar3);
    }
    if (*PTR_DAT_020028a0 != '\0') {
      *PTR_DAT_02004c20 = 1;
      FUN_013a4350(param_1);
      uVar3 = FUN_019a4600();
      cVar2 = FUN_01396990(uVar3);
      if (cVar2 != '\0') {
        uVar3 = FUN_019a4600();
        FUN_01396fa0(uVar3);
      }
      FUN_013a48a0(param_1,&local_50);
      FUN_013a4820(param_1,local_50);
      FUN_013a4380(param_1);
      *PTR_DAT_02004c20 = 0;
      *PTR_DAT_020028a0 = 0;
    }
    FUN_013a48d0(param_1);
  }
  else {
    cVar2 = '\0';
  }
  local_39 = 0;
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    iVar5 = *(int *)(lVar1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar1,iVar4);
        FUN_013a3320(auStack_78,uVar3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00414b50(&local_48,L"[ACAnalysisComplete()]");
  FUN_013a40d0(param_1,&local_48);
  *(undefined1 *)(param_1 + 0x6f2) = 0;
  *(undefined1 *)(param_1 + 0x6d8) = 0;
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_38,2);
  return;
}

