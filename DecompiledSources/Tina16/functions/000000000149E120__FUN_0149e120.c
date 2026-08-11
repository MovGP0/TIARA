/* Ghidra address: 0149e120 */
/* Ghidra symbol: FUN_0149e120 */


void FUN_0149e120(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined8 local_40;
  
  local_48 = (code *)*param_3;
  local_40 = param_3[1];
  FUN_01a98380(param_2,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],&local_4c,&local_50)
  ;
  if (*(char *)(param_2 + 0x12d) == '\0') {
    uVar4 = FUN_01a97e00(param_2);
    iVar1 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80));
    iVar2 = FUN_01d12340(*(undefined8 *)(param_1[5] + 0x90));
    fVar5 = (float)FUN_01a9a6d0(param_2);
    uVar3 = FUN_0040c770((double)iVar1 * (double)fVar5 * *(double *)(param_2 + 0x70));
    FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80),uVar3);
    fVar5 = (float)FUN_01a9a6d0(param_2);
    uVar3 = FUN_0040c770((double)iVar2 * (double)fVar5 * *(double *)(param_2 + 0x70));
    FUN_01d12350(*(undefined8 *)(param_1[5] + 0x90),uVar3);
    local_60[0] = FUN_00498310(local_4c,local_50);
    (**(code **)(*(longlong *)param_1[5] + 200))((longlong *)param_1[5],local_60);
    (*local_48)(local_40,uVar4);
    local_60[0] = FUN_00498310(*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2]);
    (**(code **)(*(longlong *)param_1[5] + 200))((longlong *)param_1[5],local_60);
    FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80),iVar1);
    FUN_01d12350(*(undefined8 *)(param_1[5] + 0x90),iVar2);
    FUN_01a97ea0(param_2,uVar4);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    FUN_01a98380(param_2,*(int *)((longlong)param_1 + 0xc) + iVar1,(int)param_1[2] + iVar2,&local_4c
                 ,&local_50);
  }
  return;
}

