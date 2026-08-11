/* Ghidra address: 012b6470 */
/* Ghidra symbol: FUN_012b6470 */


void FUN_012b6470(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  
  local_38 = 0;
  local_2c = 0;
  plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  (**(code **)(*plVar5 + 0x90))(plVar5);
  plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),1);
  (**(code **)(*plVar5 + 0x90))(plVar5);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
                (*(longlong **)(param_1 + 0x740),&local_38,iVar7);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      if ((cVar1 == '\0') || (uVar6 = FUN_004170c0(&DAT_012b66b4,local_38,1), (int)uVar6 != 1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_012b6320(auStack_58,uVar3);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                        (*(longlong **)(param_1 + 0x710));
      if ((cVar1 == '\0') ||
         (uVar6 = FUN_004170c0(&PTR_u_laFloralwhite_012b66c8,local_38,1), (int)uVar6 != 1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_012b6320(auStack_58,uVar3);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      if ((cVar1 == '\0') || (uVar6 = FUN_004170c0(&LAB_012b66dc,local_38,1), (int)uVar6 != 1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_012b6320(auStack_58,uVar3);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if ((((cVar1 == '\0') || (iVar4 = FUN_004170c0(&DAT_012b66b4,local_38,1), iVar4 != 0)) ||
          (iVar4 = FUN_004170c0(&PTR_u_laFloralwhite_012b66c8,local_38,1), iVar4 != 0)) ||
         (uVar6 = FUN_004170c0(&LAB_012b66dc,local_38,1), (int)uVar6 != 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_012b6320(auStack_58,uVar3);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_012b6210(param_1,local_2c);
  FUN_00414480(&local_38);
  return;
}

