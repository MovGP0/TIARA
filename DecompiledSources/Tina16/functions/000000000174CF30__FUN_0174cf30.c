/* Ghidra address: 0174cf30 */
/* Ghidra symbol: FUN_0174cf30 */


void FUN_0174cf30(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *puVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  byte *local_20 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174cf85:
    if (local_res18 == 0) goto LAB_0174d105;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_0174cf85;
  }
  plVar1 = (longlong *)param_1[5];
  if (*(char *)((longlong)plVar1 + 0xb) == '\0') {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,local_20);
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*(longlong *)param_1[5] + 0x2a8))((longlong *)param_1[5],param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    (**(code **)(*param_1 + 8))(param_1,&local_40,param_2,param_5,param_6);
    FUN_01d048c0(param_1[5],local_40 + 2,local_3c + 2,&local_24,&local_28,1,1);
    puVar5 = &local_30;
    FUN_01d048c0(param_1[5],local_38 + -6,local_34 + -2,&local_2c,puVar5,1,1);
    uVar3 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      (**(code **)(*param_2 + 0x60))
                (param_2,local_24,local_28,local_2c,CONCAT44(uVar3,local_30),uVar4);
    }
    FUN_0174cdb0(param_1,local_res18,local_res20,*local_20[0],param_2,1);
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      *(uint *)(param_1 + 7) = (uint)*local_20[0];
    }
  }
LAB_0174d105:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

