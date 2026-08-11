/* Ghidra address: 0173d380 */
/* Ghidra symbol: FUN_0173d380 */


void FUN_0173d380(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  bool bVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_38 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0173d3e5:
    if (local_res18 == 0) goto LAB_0173d65c;
  }
  else {
    cVar1 = FUN_0175ad40(param_1,param_2);
    if (cVar1 == '\0') goto LAB_0173d3e5;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  uVar3 = (short)uVar2 - 0x68;
  if (uVar3 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),1) << ((byte)uVar3 & 0x1f) & 0x280U) !=
            0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,0xfffffffc,local_1c,&local_20,local_res18 == 0,
                 1);
    puVar5 = &local_28;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,4,&local_24,puVar5,local_res18 == 0,1);
    uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  }
  else {
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x10,0xfffffffc,local_1c,&local_20,local_res18 == 0
                 ,1);
    puVar5 = &local_28;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x18,4,&local_24,puVar5,local_res18 == 0,1);
    uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  }
  if (param_2 != (longlong *)0x0) {
    if (*(char *)((longlong)param_2 + 0x12d) != '\0') goto LAB_0173d65c;
    if (*(char *)(param_1 + 9) == '\0') {
      (**(code **)(*param_2 + 0xb8))(param_2,0xff);
    }
    (**(code **)(*param_2 + 0xe8))(param_2,3);
    (**(code **)(*param_2 + 0x40))(param_2,local_1c[0],local_20);
    (**(code **)(*param_2 + 0x48))(param_2,local_24,local_28);
    (**(code **)(*param_2 + 0x40))(param_2,local_1c[0],local_28);
    (**(code **)(*param_2 + 0x48))(param_2,local_24,local_20);
    (**(code **)(*param_2 + 0xe8))(param_2,0);
  }
  if (local_res18 != 0) {
    FUN_01243890(&local_30,local_res18,local_res20,local_1c[0],CONCAT44(uVar6,local_20),local_24,
                 local_28,3,0xff);
    FUN_01243890(&local_38,local_res18,local_res20,local_1c[0],local_28,local_24,local_20,3,0xff);
  }
LAB_0173d65c:
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

