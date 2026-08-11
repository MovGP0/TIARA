/* Ghidra address: 01b50820 */
/* Ghidra symbol: FUN_01b50820 */


void FUN_01b50820(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  
  local_40[0] = 0;
  local_48 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(param_1 + 0x1498);
  local_6c = 0;
  if (-1 < iVar6 + -1) {
    do {
      cVar2 = FUN_01b50750(param_1,*(undefined4 *)(param_1 + 0x1070 + (longlong)local_6c * 8),
                           *(undefined4 *)(param_1 + 0x1074 + (longlong)local_6c * 8),local_40);
      if ((cVar2 == '\0') || (iVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_40[0]), -1 < iVar3)
         ) {
        local_58 = local_6c + 1;
        local_68 = CONCAT44(local_68._4_4_,local_58);
        local_60 = 0;
        local_50 = 0;
        FUN_00442f70(&local_48,L"Tran_%d:%d",&local_68,1);
      }
      else {
        local_68 = local_40[0];
        local_60 = 0x11;
        local_58 = local_6c + 1;
        local_50 = 0;
        FUN_00442f70(&local_48,L"%s:%d",&local_68,1);
        (**(code **)(*plVar4 + 0x78))(plVar4,local_40[0]);
      }
      FUN_01cc2930(*(undefined8 *)(param_2 + 8),local_48,0,0,0,0,1,0);
      iVar3 = *(int *)(param_1 + 0x1494);
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar1 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1488) + (longlong)iVar5 * 8) + 8 +
                   (longlong)local_6c * 0x10);
          FUN_01cc4620(param_2,*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(param_1 + 0x1488) + (longlong)iVar5 * 8) +
                                (longlong)local_6c * 0x10));
          FUN_01cc46b0(param_2,0,uVar1);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_6c = local_6c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_013d2f60(param_2,0,0);
  FUN_00410f20(plVar4);
  FUN_00414560(&local_48,2);
  return;
}

