/* Ghidra address: 01473a40 */
/* Ghidra symbol: FUN_01473a40 */


void FUN_01473a40(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  (**(code **)(*plVar3 + 0x90))(plVar3);
  FUN_00685670(*(undefined8 *)(param_1 + 0x708),1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
                (*(longlong **)(param_1 + 0x730),local_30,iVar4);
      iVar2 = FUN_00416db0(local_30[0],&DAT_01473c24);
      if ((((iVar2 == 0) || (iVar2 = FUN_00416db0(local_30[0],&DAT_01473c38), iVar2 == 0)) ||
          (iVar2 = FUN_00416db0(local_30[0],L".noise"), iVar2 == 0)) ||
         (iVar2 = FUN_00416db0(local_30[0],L".tran"), iVar2 == 0)) {
        plVar3 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6b0),0);
        iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30[0]);
        if (iVar2 == -1) goto LAB_01473b51;
      }
      else {
LAB_01473b51:
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((local_res10[0] != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0),
     iVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_res10[0]), iVar1 == -1)) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_res10[0]);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

