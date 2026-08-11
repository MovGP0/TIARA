/* Ghidra address: 0174a840 */
/* Ghidra symbol: FUN_0174a840 */


void FUN_0174a840(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174a897:
    if (local_res18 == 0) goto LAB_0174aa83;
  }
  else {
    cVar3 = FUN_0175ad40(param_1,param_2);
    if (cVar3 == '\0') goto LAB_0174a897;
  }
  plVar1 = (longlong *)param_1[5];
  if (*(char *)((longlong)plVar1 + 0xb) == '\0') {
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    lVar2 = param_1[5];
    uVar4 = FUN_015f7420(lVar2);
    FUN_015f77c0(local_48,lVar2,uVar4,3);
    if (*(int *)((longlong)param_1 + 0x4c) != 1) {
      (**(code **)(*param_1 + 8))(param_1,&local_58,param_2,param_5,param_6);
      FUN_01d048c0(param_1[5],local_58,local_54,local_2c,&local_30,1,1);
      FUN_01d048c0(param_1[5],local_50,local_4c,&local_34,&local_38,1,1);
      if (param_2 != (longlong *)0x0) {
        uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
        (**(code **)(*param_2 + 0x60))(param_2,local_2c[0],local_30,local_34,local_38,uVar4);
      }
      if (*(char *)((longlong)param_1 + 9) != '\0') goto LAB_0174aa83;
    }
    iVar7 = *(int *)((longlong)param_1 + 0x4c);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      puVar6 = local_48;
      do {
        FUN_0174aae0(param_1,param_2,local_res18,local_res20,param_5,param_6,iVar5,*puVar6);
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_0174af30(param_1,&local_68);
    param_1[7] = local_68;
    param_1[8] = lStack_60;
  }
LAB_0174aa83:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

