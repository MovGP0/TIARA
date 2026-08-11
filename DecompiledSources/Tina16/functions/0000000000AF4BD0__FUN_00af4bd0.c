/* Ghidra address: 00af4bd0 */
/* Ghidra symbol: FUN_00af4bd0 */


void FUN_00af4bd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar7;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_58 = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  FUN_00aa63b0(*(undefined8 *)(param_1 + 0x8b0),1);
  if ((*(ushort *)(param_1 + 0x8a0) & 0x28) == 0) {
    if (*(char *)(param_1 + 0x4dc) == '\0') {
      uVar4 = FUN_00414480(&local_58);
      puVar5 = &local_50;
      cVar2 = FUN_00af4910(param_1,(longlong)(short)local_38,(longlong)local_38._2_2_,&local_4c,
                           puVar5,uVar4);
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x8e8) = local_4c + 1;
        lVar1 = *(longlong *)(param_1 + 0x8b0);
        *(int *)(lVar1 + 0x9c) = local_4c + 1;
        *(undefined4 *)(lVar1 + 0xa0) = local_50;
        uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x740));
        thunk_FUN_03a2fc9d(uVar4,0,0xffffffff);
      }
    }
    if (*(longlong *)(param_1 + 0x5f8) != 0) {
      uVar3 = FUN_007f9920(local_40 & 0xffff);
      (**(code **)(param_1 + 0x5f8))
                (*(undefined8 *)(param_1 + 0x600),param_1,0,uVar3,
                 CONCAT44(uVar6,(int)(short)local_38),CONCAT44(uVar7,(int)local_38._2_2_));
    }
  }
  FUN_00414480(&local_58);
  return;
}

