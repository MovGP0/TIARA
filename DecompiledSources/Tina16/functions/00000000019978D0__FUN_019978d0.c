/* Ghidra address: 019978d0 */
/* Ghidra symbol: FUN_019978d0 */


void FUN_019978d0(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  plVar4 = (longlong *)
           FUN_00b94e60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xd0)
                        ,param_2);
  cVar1 = FUN_0198a580(plVar4);
  if (((cVar1 == '\x04') && (cVar1 = FUN_01d04d50(plVar4), cVar1 != '\0')) &&
     ((**(code **)(*plVar4 + 0x298))(plVar4,&local_30,param_3), local_30 != 0)) {
    iVar2 = (**(code **)(*plVar4 + 0x1c8))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        if ((iVar5 != param_3) &&
           (cVar1 = FUN_01996fd0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x30),param_2,
                                 iVar5), cVar1 == '\0')) {
          (**(code **)(*plVar4 + 0x298))(plVar4,&local_38,iVar5);
          iVar3 = FUN_00416db0(local_30,local_38);
          if (iVar3 == 0) {
            FUN_01997bc0(*(undefined8 *)(param_1 + 0x110),param_2,iVar5);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

