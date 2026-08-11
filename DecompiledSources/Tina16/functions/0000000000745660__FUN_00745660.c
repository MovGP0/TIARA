/* Ghidra address: 00745660 */
/* Ghidra symbol: FUN_00745660 */


void FUN_00745660(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  FUN_007433d0();
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    iVar3 = 0;
    FUN_005fd670(*(undefined8 *)(param_1[0x92] + 0x78),2);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x92] + 0x78),0);
    (**(code **)(*param_1 + 0xe0))(param_1,&local_48);
    iVar5 = *(int *)(*(longlong *)(param_1[0x97] + 0x10) + 0x10);
    local_4c = 0;
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      do {
        lVar2 = FUN_00746290(param_1[0x97],local_4c);
        iVar1 = *(int *)(lVar2 + 0x28);
        iVar4 = iVar3 + iVar1;
        (**(code **)(*(longlong *)param_1[0x92] + 200))((longlong *)param_1[0x92],iVar4,local_44);
        (**(code **)(*(longlong *)param_1[0x92] + 0xc0))((longlong *)param_1[0x92],iVar4,local_3c);
        iVar3 = iVar3 + iVar1;
        local_4c = local_4c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar3 = 0;
    iVar5 = *(int *)(*(longlong *)(param_1[0x96] + 0x10) + 0x10);
    local_4c = 0;
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      do {
        lVar2 = FUN_00746290(param_1[0x96],local_4c);
        iVar1 = *(int *)(lVar2 + 0x28);
        iVar4 = iVar3 + iVar1;
        (**(code **)(*(longlong *)param_1[0x92] + 200))((longlong *)param_1[0x92],local_48,iVar4);
        (**(code **)(*(longlong *)param_1[0x92] + 0xc0))((longlong *)param_1[0x92],local_40,iVar4);
        iVar3 = iVar3 + iVar1;
        local_4c = local_4c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

