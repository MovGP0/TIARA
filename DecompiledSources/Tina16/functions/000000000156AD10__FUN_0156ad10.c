/* Ghidra address: 0156ad10 */
/* Ghidra symbol: FUN_0156ad10 */


void FUN_0156ad10(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  uVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x750),uVar5);
      FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(lVar3 + 0x30),local_30);
      iVar2 = FUN_0156ab10(*(undefined8 *)(lVar3 + 0x20));
      if ((((iVar2 != 3) && (iVar2 != 2)) && (iVar2 != 5)) &&
         (((cVar1 = FUN_01574cc0(local_30[0]), cVar1 != '\0' &&
           (lVar4 = FUN_01574cd0(local_30[0],0), *(int *)(lVar4 + 0x1c) != 2)) &&
          (*(int *)(lVar4 + 0x20) != 1)))) {
        FUN_01571a60(lVar3,&local_48);
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_58,PTR_PTR_02005990);
        FUN_00b8e650(uVar5,&local_50,L"HDLStrings.Msg_Mixed_OnlySingleTypeAllowed",local_58);
        FUN_00416cd0(local_40,3,local_48,&DAT_0156aea8,local_50);
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40[0]);
        FUN_004134c0(uVar6);
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_58,4);
  return;
}

