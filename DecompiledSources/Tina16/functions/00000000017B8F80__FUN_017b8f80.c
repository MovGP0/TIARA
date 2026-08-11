/* Ghidra address: 017b8f80 */
/* Ghidra symbol: FUN_017b8f80 */


void FUN_017b8f80(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_38);
    if (*(char *)((longlong)param_2 + 0x12d) == '\0') {
      if ((*(char *)((longlong)param_1 + 9) != '\0') &&
         (*(char *)((longlong)param_1 + 0x24) != '\x01')) {
        uVar4 = CONCAT44(uVar5,local_2c + 8);
        (**(code **)(*param_2 + 0x30))(param_2,local_38 + -8,local_34 + -8,local_30 + 8,uVar4);
        uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      }
      FUN_01a9faa0(param_2,local_48);
      FUN_01a9a720(param_2,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2]);
      FUN_01a9a730(param_2,0,0);
      FUN_01a9a740(param_2,0);
      FUN_01a9a770(param_2,0);
      FUN_01a9a780(param_2,0,0);
      uVar4 = CONCAT44(uVar5,*(undefined4 *)((longlong)param_2 + 0x13c));
      FUN_00498350(&local_58,(int)param_2[0x26],*(undefined4 *)((longlong)param_2 + 0x134),
                   (int)param_2[0x27],uVar4);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)(param_2 + 0x26) = 0x7fffffff;
      *(undefined4 *)(param_2 + 0x27) = 0x80000001;
      *(undefined4 *)((longlong)param_2 + 0x134) = 0x7fffffff;
      *(undefined4 *)((longlong)param_2 + 0x13c) = 0x80000001;
      iVar3 = *(int *)(param_1[8] + 0x10);
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar1 = FUN_004aeac0(param_1[8],iVar2);
          FUN_01a9ac70(param_2,uVar1);
          uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00b956d0(param_1 + 5,(int)param_2[0x26],*(undefined4 *)((longlong)param_2 + 0x134),
                   (int)param_2[0x27],CONCAT44(uVar5,*(undefined4 *)((longlong)param_2 + 0x13c)));
      FUN_00b956f0(param_1 + 5);
      if (local_58 < (int)param_2[0x26]) {
        *(int *)(param_2 + 0x26) = local_58;
      }
      if ((int)param_2[0x27] < local_50) {
        *(int *)(param_2 + 0x27) = local_50;
      }
      if (local_54 < *(int *)((longlong)param_2 + 0x134)) {
        *(int *)((longlong)param_2 + 0x134) = local_54;
      }
      if (*(int *)((longlong)param_2 + 0x13c) < local_4c) {
        *(int *)((longlong)param_2 + 0x13c) = local_4c;
      }
      FUN_01a9fb00(param_2,local_48);
      if (*(char *)((longlong)param_1 + 10) != '\0') {
        (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
      }
    }
    else {
      FUN_01a98380(param_2,local_38,local_34,&local_38,&local_34);
      FUN_01a98380(param_2,local_30,local_2c,&local_30,&local_2c);
    }
  }
  return;
}

