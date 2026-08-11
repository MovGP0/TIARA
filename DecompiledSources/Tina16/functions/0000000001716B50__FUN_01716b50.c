/* Ghidra address: 01716b50 */
/* Ghidra symbol: FUN_01716b50 */


void FUN_01716b50(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_4 == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x38);
  }
  else if (param_4 == '\x01') {
    plVar4 = *(longlong **)(param_1 + 0x40);
  }
  else if (param_4 == '\x02') {
    plVar4 = *(longlong **)(param_1 + 0x48);
  }
  else if (param_4 == '\x03') {
    plVar4 = *(longlong **)(param_1 + 0x50);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x58);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (param_4 == '\0') {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_30,iVar5);
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4,iVar5);
        iVar2 = (**(code **)(*plVar3 + 0xb8))(plVar3,local_res18[0]);
        if (-1 < iVar2) {
          (**(code **)(*param_2 + 0x78))(param_2,local_30);
        }
      }
      else {
        FUN_004b3cf0(plVar4,&local_30,iVar5);
        FUN_004b5390(plVar4,&local_38,iVar5);
        iVar2 = FUN_004170c0(local_res18[0],local_38,1);
        if (0 < iVar2) {
          (**(code **)(*param_2 + 0x78))(param_2,local_30);
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res18);
  return;
}

