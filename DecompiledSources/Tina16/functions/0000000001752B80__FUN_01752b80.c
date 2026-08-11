/* Ghidra address: 01752b80 */
/* Ghidra symbol: FUN_01752b80 */


void FUN_01752b80(longlong param_1,byte param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uVar7;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = *param_3;
  if ((param_2 & 1) != 0) {
    iVar2 = DAT_01f9b140 + (int)local_30;
    local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    iVar4 = DAT_01f9b144 + local_30._4_4_;
    FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),iVar2,iVar4,&local_34,
                 &local_38,*(longlong *)(param_1 + 400) == 0,1);
    puVar5 = &local_40;
    FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),DAT_01f9b148 + (int)local_30
                 ,DAT_01f9b14c + local_30._4_4_,&local_3c,puVar5,*(longlong *)(param_1 + 400) == 0,1
                );
    uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      uVar1 = FUN_01a99990(*(undefined8 *)(param_1 + 0x188));
      uVar6 = CONCAT44(uVar7,local_40);
      (**(code **)(**(longlong **)(param_1 + 0x188) + 0x60))
                (*(longlong **)(param_1 + 0x188),local_34,local_38,local_3c,uVar6,uVar1);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_01243a40(local_50,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),local_34
                   ,CONCAT44(uVar7,local_38),local_3c,local_40,1,0x8000,0x8000);
    }
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0xe8))(*(longlong **)(param_1 + 0x188),1);
  }
  iVar2 = 1;
  piVar3 = &DAT_01f9b150;
  do {
    if ((1 << ((byte)iVar2 & 0x1f) & (uint)param_2) != 0) {
      FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),*piVar3 + (int)local_30,
                   piVar3[1] + local_30._4_4_,&local_34,&local_38,*(longlong *)(param_1 + 400) == 0,
                   1);
      puVar5 = &local_40;
      FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),piVar3[2] + (int)local_30,
                   piVar3[3] + local_30._4_4_,&local_3c,puVar5,*(longlong *)(param_1 + 400) == 0,1);
      uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
      if (*(longlong *)(param_1 + 0x188) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x40))
                  (*(longlong **)(param_1 + 0x188),local_34,local_38);
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x48))
                  (*(longlong **)(param_1 + 0x188),local_3c,local_40);
      }
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_01243890(&local_58,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                     local_34,CONCAT44(uVar7,local_38),local_3c,local_40,1,0x8000);
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar2 != 8);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0xe8))(*(longlong **)(param_1 + 0x188),0);
  }
  FUN_00417840(&local_58,&LAB_00b9fca0,2);
  return;
}

