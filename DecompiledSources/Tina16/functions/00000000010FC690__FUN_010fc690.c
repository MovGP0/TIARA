/* Ghidra address: 010fc690 */
/* Ghidra symbol: FUN_010fc690 */


undefined1 FUN_010fc690(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_0043f750(&local_40,param_2);
  FUN_00416cd0(local_30,3,&DAT_010fc888,local_40,&DAT_010fc89c);
  FUN_0043f750(&local_48,param_2);
  FUN_00416ba0(&local_38,&DAT_010fc888,local_48);
  local_61 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb30) + 8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,iVar5);
      iVar3 = FUN_004170c0(local_30[0],local_50,1);
      if (iVar3 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar5);
        iVar3 = FUN_00416db0(local_38,local_58);
        if (iVar3 == 0) goto LAB_010fc7c8;
      }
      else {
LAB_010fc7c8:
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb38) + 8);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_60,uVar4);
        local_61 = 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_60,7);
  return local_61;
}

