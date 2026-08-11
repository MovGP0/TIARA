/* Ghidra address: 01894970 */
/* Ghidra symbol: FUN_01894970 */


void FUN_01894970(longlong param_1,undefined8 param_2,short *param_3,ushort param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((param_4 & 4) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78);
    cVar3 = FUN_004113d0(lVar1,&PTR_FUN_018a1608);
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(lVar1 + 0x818);
      (**(code **)(*plVar2 + 0x120))(plVar2,0);
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) + 0x820);
      (**(code **)(*plVar2 + 0x120))(plVar2,0);
    }
    if (*param_3 == 0x46) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78);
      cVar3 = FUN_004113d0(lVar1,&PTR_FUN_018a1608);
      if (cVar3 != '\0') {
        FUN_006fa3b0(*(undefined8 *)(lVar1 + 0x6f8),0);
      }
      FUN_018a9960(*(undefined8 *)(param_1 + 0x78),0);
      FUN_00805990(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 600))(*(longlong **)(param_1 + 0x78));
    }
  }
  return;
}

