/* Ghidra address: 00b63950 */
/* Ghidra symbol: FUN_00b63950 */


void FUN_00b63950(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 local_60;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined4 uVar6;
  
  local_60 = 0;
  FUN_00415f40(&local_60,*(undefined8 *)(param_2 + 8));
  FUN_00b433b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x60),local_60,
               *(undefined8 *)(param_2 + 0x30),local_2c,&local_50,&local_54);
  local_38 = *(undefined4 *)(param_2 + 0x14);
  local_30 = *(undefined4 *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x28);
  FUN_00b637b0(param_1,*(undefined4 *)(param_2 + 0x14),iVar1,param_3,&local_38,&local_3c);
  puVar4 = &local_30;
  puVar7 = &local_34;
  FUN_00b63880(param_1,*(undefined4 *)(param_2 + 0x10),iVar2,param_3,puVar4,puVar7);
  uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
  uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
  local_48 = *(int *)(param_2 + 0x1c);
  if ((local_48 == -1) && (*(int *)(param_2 + 0x18) == -1)) {
    local_40 = *(int *)(param_2 + 0x18);
    if (0 < *(int *)(param_2 + 0x24)) {
      local_54 = *(int *)(param_2 + 0x24);
    }
    iVar3 = local_50;
    if (0 < *(int *)(param_2 + 0x20)) {
      iVar3 = *(int *)(param_2 + 0x20);
    }
    FUN_00b637b0(param_1,*(undefined4 *)(param_2 + 0x14),local_54 + iVar1,param_3,&local_48,
                 &local_4c);
    piVar5 = &local_40;
    puVar4 = &local_44;
    FUN_00b63880(param_1,*(undefined4 *)(param_2 + 0x10),iVar3 + iVar2,param_3,piVar5,puVar4);
    uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
    uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  }
  else {
    local_4c = 0;
    local_48 = *(int *)(param_2 + 0x1c) + 1;
    local_44 = 0;
    local_40 = *(int *)(param_2 + 0x18) + 1;
  }
  FUN_00b43640(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x60),param_3,
               local_2c[0],local_30,CONCAT44(uVar6,local_34),CONCAT44(uVar8,local_38),local_3c,
               local_40,local_44,local_48,local_4c);
  FUN_00414520(&local_60);
  return;
}

