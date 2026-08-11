/* Ghidra address: 01740b70 */
/* Ghidra symbol: FUN_01740b70 */


void FUN_01740b70(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *local_res18;
  undefined8 local_res20;
  undefined4 *puVar4;
  undefined4 in_stack_ffffffffffffff40;
  uint uVar5;
  undefined3 uVar6;
  uint3 uVar7;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70 [2];
  longlong *local_60 [6];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_80 = 0;
  local_70[0] = 0;
  local_78 = (longlong *)0x0;
  local_60[0] = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_01740be9:
    if (local_res18 == (longlong *)0x0) goto LAB_01741075;
  }
  else {
    cVar1 = FUN_0175ad40(param_1,param_2);
    if (cVar1 == '\0') goto LAB_01740be9;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) == '\0') {
    cVar1 = FUN_0173d820(param_1);
    *(char *)(param_1 + 0x3a) = cVar1;
    uVar5 = CONCAT31((int3)((uint)in_stack_ffffffffffffff40 >> 8),local_res18 == (longlong *)0x0);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,0,&local_1c,&local_20,uVar5,1);
    if (param_2 != (longlong *)0x0) {
      uVar6 = (undefined3)(uVar5 >> 8);
      if (cVar1 != '\0') {
        uVar3 = CONCAT31(uVar6,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,6,&local_24,&local_28,uVar3,1);
        uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,0xfffffff5,&local_2c,&local_30,uVar5,1);
      }
      else {
        uVar3 = CONCAT31(uVar6,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,0xfffffff5,&local_24,&local_28,uVar3,1);
        uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,6,&local_2c,&local_30,uVar5,1);
      }
      (**(code **)(*param_2 + 0xe8))(param_2,1);
      FUN_01a9a440(param_2,0);
      (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
      (**(code **)(*param_2 + 0x48))(param_2,local_2c,local_30);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
      (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
      (**(code **)(*param_2 + 0x48))(param_2,local_24,local_28);
      (**(code **)(*param_2 + 0xe8))(param_2,0);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x100))(local_res18,&local_78);
      (**(code **)(*local_78 + 0x100))(local_78,local_70,L"interactive");
      cVar2 = FUN_0043fc50(local_70[0],0);
      uVar7 = (uint3)(uVar5 >> 8);
      if (cVar2 == '\0') {
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,0xfffffff5,&local_24,&local_28,
                     (uint)uVar7 << 8,1);
        uVar5 = local_24;
        FUN_01243890(local_60,local_res18,local_res20,local_1c,local_20,local_24,local_28,1,0x8000);
        (**(code **)(*local_60[0] + 0x108))(local_60[0],L"showif",&DAT_01741174);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,6,&local_24,&local_28,uVar5 & 0xffffff00,1
                    );
        FUN_01243890(local_60,local_res18,local_res20,local_1c,local_20,local_24,local_28,1,0x8000);
        (**(code **)(*local_60[0] + 0x108))(local_60[0],L"showif",&DAT_01741188);
      }
      else {
        if (cVar1 != '\0') {
          puVar4 = &local_28;
          FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,6,&local_24,puVar4,(uint)uVar7 << 8,1);
          uVar3 = (undefined4)((ulonglong)puVar4 >> 0x20);
        }
        else {
          puVar4 = &local_28;
          FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1f,0xfffffff5,&local_24,puVar4,
                       uVar5 & 0xffffff00,1);
          uVar3 = (undefined4)((ulonglong)puVar4 >> 0x20);
        }
        FUN_01243890(&local_80,local_res18,local_res20,local_1c,CONCAT44(uVar3,local_20),local_24,
                     local_28,1,0x8000);
      }
    }
  }
LAB_01741075:
  FUN_00417840(&local_80,&LAB_00b9fca0,2);
  FUN_00414480(local_70);
  FUN_0041b800(local_60);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

