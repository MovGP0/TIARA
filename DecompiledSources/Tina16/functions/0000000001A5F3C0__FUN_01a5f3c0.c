/* Ghidra address: 01a5f3c0 */
/* Ghidra symbol: FUN_01a5f3c0 */


undefined1 FUN_01a5f3c0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_20);
  iVar3 = FUN_004170c0(&DAT_01a5f5b8,local_20[0],1);
  if (iVar3 < 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
    iVar3 = FUN_004170c0(&DAT_01a5f5cc,local_28,1);
    if (iVar3 < 1) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
      iVar3 = FUN_004170c0(&DAT_01a5f5e0,local_30,1);
      if (iVar3 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
        iVar3 = FUN_004170c0(&PTR_DAT_01a5f5f4,local_38,1);
        if (iVar3 < 1) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
          iVar3 = FUN_004170c0(&PTR_DAT_01a5f608,local_40,1);
          if (iVar3 < 1) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
            iVar3 = FUN_004170c0(&LAB_01a5f61c,local_48,1);
            if (iVar3 < 1) {
              uVar2 = 0;
              goto LAB_01a5f566;
            }
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_01a5f566:
  FUN_00414560(&local_48,6);
  return uVar2;
}

