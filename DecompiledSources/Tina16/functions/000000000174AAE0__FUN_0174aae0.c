/* Ghidra address: 0174aae0 */
/* Ghidra symbol: FUN_0174aae0 */


void FUN_0174aae0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong *local_res18;
  undefined8 local_res20;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 uVar7;
  
  local_48 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (*(int *)(param_1 + 0x4c) == 1) {
    iVar3 = 0;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xfffffffa,0xffffffec,&local_2c,&local_30,1,1);
    puVar5 = &local_38;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xe,0xd,&local_34,puVar5,1,1);
    uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if ((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0x4c) == 1)) {
      uVar1 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      (**(code **)(*param_2 + 0x60))
                (param_2,local_2c,local_30,local_34,CONCAT44(uVar7,local_38),uVar1);
    }
    if (*(char *)(param_1 + 9) != '\0') goto LAB_0174ae9b;
  }
  else {
    iVar3 = param_7 * 0x18 + -0x2c;
  }
  if ((param_8 & 1) == 0) {
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b020 + iVar3 + -3,DAT_01f9b024 + -0x11,
                 &local_2c,&local_30,local_res18 == (longlong *)0x0,1);
    puVar5 = &local_38;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b028 + iVar3 + -3,DAT_01f9b02c + -0x11,
                 &local_34,puVar5,local_res18 == (longlong *)0x0,1);
    uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (param_2 != (longlong *)0x0) {
      uVar1 = FUN_01a99990(param_2);
      uVar6 = CONCAT44(uVar7,local_38);
      (**(code **)(*param_2 + 0x60))(param_2,local_2c,local_30,local_34,uVar6,uVar1);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    if (local_res18 != (longlong *)0x0) {
      FUN_01243a40(&local_40,local_res18,local_res20,local_2c,CONCAT44(uVar7,local_30),local_34,
                   local_38,1,0x8000,0x8000);
    }
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2,2);
  }
  iVar2 = 1;
  piVar4 = &DAT_01f9b030;
  do {
    if ((1 << ((byte)iVar2 & 0x1f) & param_8) == 0) {
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),*piVar4 + iVar3 + -3,piVar4[1] + -0x11,&local_2c,
                   &local_30,local_res18 == (longlong *)0x0,1);
      puVar5 = &local_38;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),piVar4[2] + iVar3 + -3,piVar4[3] + -0x11,
                   &local_34,puVar5,local_res18 == (longlong *)0x0,1);
      uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_2c,local_30);
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != (longlong *)0x0) {
        FUN_01243890(&local_48,local_res18,local_res20,local_2c,CONCAT44(uVar7,local_30),local_34,
                     local_38,2,0x8000);
      }
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 4;
  } while (iVar2 != 8);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2,0);
  }
LAB_0174ae9b:
  FUN_00417840(&local_48,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

