/* Ghidra address: 006f5cf0 */
/* Ghidra symbol: FUN_006f5cf0 */


undefined1 FUN_006f5cf0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  longlong *local_38;
  longlong *local_30 [2];
  undefined1 local_19;
  
  local_38 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  local_19 = 1;
  if (param_3 == 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (param_3 == 2) {
      uVar4 = (undefined4)CONCAT71(uVar5,1);
    }
    else {
      if (param_3 != 8) goto LAB_006f5e0f;
      uVar4 = (undefined4)CONCAT71(uVar5,2);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x589) == '\0') && (param_1[0xc0] != 0)) {
    (*(code *)param_1[0xc0])(param_1[0xc1],param_1,param_2,uVar4,&local_19);
  }
  if ((char)uVar4 == '\x02') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(local_30,uVar3);
      cVar1 = (**(code **)(*local_30[0] + 0xa0))(local_30[0]);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_38,uVar3);
        cVar1 = (**(code **)(*local_38 + 0x48))(local_38);
        if (cVar1 == '\0') {
          local_19 = 0;
        }
      }
      else {
        local_19 = 1;
      }
    }
  }
LAB_006f5e0f:
  FUN_00417840(&local_38,&DAT_00484dc8,2);
  return local_19;
}

