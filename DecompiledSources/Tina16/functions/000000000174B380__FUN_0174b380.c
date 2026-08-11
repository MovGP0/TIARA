/* Ghidra address: 0174b380 */
/* Ghidra symbol: FUN_0174b380 */


void FUN_0174b380(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar6;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc [43];
  short *local_20 [2];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174b3d5:
    if (local_res18 == 0) goto LAB_0174b558;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_0174b3d5;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar1 + 0xb) == '\0') {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,local_20);
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    FUN_00498350(&local_e8,10,10,0x7e,CONCAT44(uVar6,0x1e));
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_e8,local_e4,local_cc,&local_d0,1,1);
    puVar4 = &local_d8;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_e0,local_dc,&local_d4,puVar4,1,1);
    uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      uVar5 = CONCAT44(uVar6,local_d8);
      (**(code **)(*param_2 + 0x60))(param_2,local_cc[0],local_d0,local_d4,uVar5,uVar3);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    FUN_0174b130(param_1,local_res18,local_res20,(longlong)*local_20[0],CONCAT44(uVar6,0x7c),0x14,
                 param_2,1);
    if (*(char *)(param_1 + 9) == '\0') {
      *(int *)(param_1 + 0x38) = (int)*local_20[0];
    }
  }
LAB_0174b558:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

