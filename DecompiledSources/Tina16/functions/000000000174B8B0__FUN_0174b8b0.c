/* Ghidra address: 0174b8b0 */
/* Ghidra symbol: FUN_0174b8b0 */


void FUN_0174b8b0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174b903:
    if (local_res18 == 0) goto LAB_0174bab8;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_0174b903;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar1 + 0xb) == '\0') {
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),2,2,&local_1c,&local_20,1,1);
    puVar5 = &local_28;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xee,0x26,&local_24,puVar5,1,1);
    uVar3 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      uVar6 = CONCAT44(uVar3,local_28);
      (**(code **)(*param_2 + 0x60))(param_2,local_1c,local_20,local_24,uVar6,uVar4);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    FUN_0174b730(param_1,local_res18,local_res20,*(undefined8 *)(param_1 + 0x48),CONCAT44(uVar3,4),
                 0xc,param_2,1,0,L"Lucida Console");
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_0174b730(param_1,local_res18,local_res20,*(undefined8 *)(param_1 + 0x50),4,0x1c,param_2,1,
                   0,L"Lucida Console");
    }
    FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  }
LAB_0174bab8:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

