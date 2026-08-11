/* Ghidra address: 013d2660 */
/* Ghidra symbol: FUN_013d2660 */


void FUN_013d2660(longlong param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  iVar3 = iVar2 / 2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),(longlong)iVar2 % 2 & 0xffffffff);
  if (iVar2 % 2 == 1) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = FUN_004230a0(param_1 + 0x40);
  iVar4 = FUN_004230c0(param_1 + 0x40,(longlong)iVar2 % 2 & 0xffffffff);
  iVar3 = (param_3 / (iVar4 / iVar3)) * 2 + param_2 / (iVar2 / 2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),
                     (longlong)param_2 % (longlong)(iVar2 / 2) & 0xffffffff);
  if (iVar3 < iVar2) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                      (*(longlong **)(param_1 + 0x18),iVar3);
    cVar1 = FUN_013d2640(param_1,uVar6,param_5);
    if (cVar1 == '\0') {
      plVar7 = (longlong *)FUN_006d6380(param_4);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),local_30,iVar3);
      (**(code **)(*plVar7 + 0x78))(plVar7,local_30[0]);
      *(undefined1 *)(param_1 + 0x10) = 1;
      iVar2 = (**(code **)(*param_5 + 0x20))(param_5);
      iVar4 = (**(code **)(*param_5 + 0x28))(param_5);
      if (iVar2 <= iVar4) {
        iVar2 = (**(code **)(*param_5 + 0x20))(param_5);
        (**(code **)(*param_5 + 0x50))(param_5,iVar2 + 0x32);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_38,iVar3);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                        (*(longlong **)(param_1 + 0x18),iVar3);
      (**(code **)(*param_5 + 0x80))(param_5,local_38,uVar6);
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                      (*(longlong **)(param_1 + 0x18),iVar3);
    uVar5 = (**(code **)(*param_5 + 0xc0))(param_5,uVar6);
    (**(code **)(*param_4 + 0x278))(param_4,uVar5);
    FUN_01a79a60(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  FUN_00414560(&local_38,2);
  return;
}

