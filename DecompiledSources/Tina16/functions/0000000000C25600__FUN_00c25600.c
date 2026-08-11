/* Ghidra address: 00c25600 */
/* Ghidra symbol: FUN_00c25600 */


void FUN_00c25600(longlong *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_19;
  
  local_38 = 0;
  local_30[0] = 0;
  if (0 < *(int *)((longlong)param_1 + 0x44)) {
    FUN_00409a70(param_1[7],param_1[6],(longlong)*(int *)((longlong)param_1 + 0x44));
  }
  param_1[7] = param_1[6];
  lVar7 = param_1[6] + (longlong)*(int *)((longlong)param_1 + 0x44);
  while( true ) {
    if (((char)param_1[9] != '\0') || ((int)param_1[8] <= *(int *)((longlong)param_1 + 0x44)))
    goto code_r0x00c257cd;
    iVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],&local_19,1);
    if (iVar4 != 1) break;
    if (local_19 == 0) {
      *(undefined1 *)(param_1 + 9) = 1;
      goto code_r0x00c257cd;
    }
    lVar5 = (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3]);
    lVar6 = FUN_004b6da0(param_1[3]);
    if (lVar5 - lVar6 < (longlong)(ulonglong)local_19) {
      FUN_0041ddd0(local_30,PTR_PTR_02005bb8);
      (**(code **)(*param_1 + 0x58))(param_1,param_1,1,local_30[0]);
      cVar1 = (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3]);
      cVar2 = FUN_004b6da0(param_1[3]);
      local_19 = cVar1 - cVar2;
    }
    if ((int)param_1[8] < (int)((uint)local_19 + *(int *)((longlong)param_1 + 0x44))) {
      (**(code **)(*(longlong *)param_1[3] + 0x48))((longlong *)param_1[3],0xffffffff,1);
      goto code_r0x00c257cd;
    }
    bVar3 = (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],lVar7,local_19);
    if (local_19 != bVar3) {
      local_19 = bVar3;
      FUN_0041ddd0(&local_38,PTR_PTR_02005bb8);
      (**(code **)(*param_1 + 0x58))(param_1,param_1,1,local_38);
    }
    lVar7 = lVar7 + (ulonglong)local_19;
    *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + (uint)local_19;
  }
  *(undefined1 *)(param_1 + 9) = 1;
code_r0x00c257cd:
  FUN_00414560(&local_38,2);
  return;
}

