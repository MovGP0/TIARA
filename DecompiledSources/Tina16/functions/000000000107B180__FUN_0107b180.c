/* Ghidra address: 0107b180 */
/* Ghidra symbol: FUN_0107b180 */


void FUN_0107b180(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  cVar2 = FUN_00f81d30(*(undefined4 *)(param_1 + 0xad8));
  if (cVar2 == '\0') {
    FUN_0107adc0(param_1);
  }
  cVar2 = FUN_01056220(*(undefined8 *)(param_1 + 0xb60));
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x18))
                  (*(longlong **)(param_1 + 0xb60),local_30,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    uVar4 = FUN_00b89270();
    FUN_00b8e650(uVar4,&local_38,L"HDLStrings.Msg_Empty",0);
    uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_38);
    FUN_004134c0(uVar4);
  }
  FUN_00414560(&local_38,2);
  return;
}

