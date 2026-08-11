/* Ghidra address: 00c00770 */
/* Ghidra symbol: FUN_00c00770 */


void FUN_00c00770(longlong *param_1,uint param_2,char param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 local_68;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong uStack_48;
  undefined4 uStack_40;
  undefined8 local_3c;
  ulonglong uStack_34;
  undefined4 uStack_2c;
  
  local_60[0] = 0;
  *(undefined1 *)
   (*(longlong *)(*(longlong *)(param_1[0x95] + 0x10) + 8) + 0x10 + (longlong)(int)param_2 * 0x14) =
       1;
  lVar3 = *(longlong *)(param_1[0x95] + 0x10);
  if (*(uint *)(lVar3 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)param_2 * 0x14);
  uVar2 = *puVar1;
  uStack_48 = puVar1[1];
  uStack_40 = (undefined4)puVar1[2];
  local_3c._0_4_ = (int)uVar2;
  local_50 = uVar2;
  uVar4 = uVar2;
  uStack_34 = uStack_48;
  uStack_2c = uStack_40;
  if (((int)local_3c < *(int *)((longlong)param_1 + 0x4cc)) &&
     (local_3c._4_4_ = (int)(uVar2 >> 0x20), *(int *)((longlong)param_1 + 0x4cc) <= local_3c._4_4_))
  {
    iVar5 = (int)local_3c + -1;
    local_3c = uVar2;
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))((longlong *)param_1[0x9d],local_60,iVar5);
    iVar5 = 0;
    if (local_60[0] != 0) {
      iVar5 = *(int *)(local_60[0] + -4);
    }
    local_68 = FUN_00bb7750(iVar5 + 1,uVar2 & 0xffffffff);
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_68);
    uVar4 = local_3c;
  }
  local_3c = uVar4;
  if (param_3 == '\0') {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 2;
  }
  else {
    FUN_00bf3990(param_1,uVar2 & 0xffffffff,0x7fffffff);
    FUN_00bf37c0(param_1,uVar2 & 0xffffffff,0x7fffffff);
    FUN_00bfd160(param_1);
  }
  FUN_00414480(local_60);
  return;
}

