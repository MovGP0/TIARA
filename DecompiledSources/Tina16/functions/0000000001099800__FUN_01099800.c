/* Ghidra address: 01099800 */
/* Ghidra symbol: FUN_01099800 */


void FUN_01099800(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    if (param_3 == '\0') {
      (**(code **)(*param_2 + 0x90))(param_2);
    }
    iVar2 = FUN_004d3e30(param_1);
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        uVar4 = FUN_004d3de0(param_1,iVar2);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_00bbdc60);
        if (cVar1 != '\0') {
          uVar4 = FUN_004d3de0(param_1,iVar2);
          plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_00bbdc60);
          (**(code **)(*plVar5 + 0xf0))(*plVar5,local_30);
          iVar3 = (**(code **)(*param_2 + 0xb0))(param_2,local_30[0]);
          if (iVar3 == -1) {
            (**(code **)(*plVar5 + 0xf0))(*plVar5,&local_38);
            (**(code **)(*param_2 + 0x80))(param_2,local_38,plVar5);
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  FUN_00414560(&local_38,2);
  return;
}

