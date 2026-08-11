/* Ghidra address: 00b01560 */
/* Ghidra symbol: FUN_00b01560 */


void FUN_00b01560(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = FUN_00440a20(local_res10[0],1);
  if (cVar2 == '\0') {
    FUN_00416ba0(local_res10,*(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x20),local_res10[0]);
  }
  cVar2 = FUN_00440a20(local_res10[0],1);
  if (cVar2 != '\0') {
    FUN_009dfc70(local_20,local_res10[0],0x2f,0x5c);
    FUN_00414ad0(param_1 + 0x748,local_20[0]);
    FUN_00af0a20(*(undefined8 *)(param_1 + 0x728),local_res10[0],0);
    if (param_3 != '\0') {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))
                        (*(longlong **)(param_1 + 0x738));
      if (iVar3 != 0) {
        plVar1 = *(longlong **)(param_1 + 0x738);
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar3 + -1);
        iVar3 = FUN_00416db0(local_28,local_res10[0]);
        if (iVar3 == 0) goto LAB_00b01681;
      }
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
                (*(longlong **)(param_1 + 0x738),local_res10[0]);
    }
  }
LAB_00b01681:
  FUN_00b01b00(param_1);
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x728));
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

