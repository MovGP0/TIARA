/* Ghidra address: 00eb9b70 */
/* Ghidra symbol: FUN_00eb9b70 */


void FUN_00eb9b70(longlong param_1,longlong *param_2,longlong param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(*param_2 + 0x90))(param_2);
  if (local_res18[0] == 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (param_4 == '\0') {
LAB_00eb9c21:
          FUN_004b3cf0(*(undefined8 *)(param_1 + 0x10),local_30,iVar5);
          (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
        }
        else {
          plVar3 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                             (*(longlong **)(param_1 + 0x10),iVar5);
          iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (param_5 <= iVar2) goto LAB_00eb9c21;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b5390(*(undefined8 *)(param_1 + 0x10),&local_38,iVar5);
        FUN_004b4b10(plVar3,local_38);
        iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_res18[0]);
        if (-1 < iVar2) {
          if (param_4 != '\0') {
            plVar4 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                               (*(longlong **)(param_1 + 0x10),iVar5);
            iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
            if (iVar2 < param_5) goto LAB_00eb9d1a;
          }
          FUN_004b3cf0(*(undefined8 *)(param_1 + 0x10),&local_40,iVar5);
          (**(code **)(*param_2 + 0x78))(param_2,local_40);
        }
LAB_00eb9d1a:
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return;
}

