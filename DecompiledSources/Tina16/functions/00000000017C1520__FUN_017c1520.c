/* Ghidra address: 017c1520 */
/* Ghidra symbol: FUN_017c1520 */


void FUN_017c1520(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  int iVar5;
  int iVar6;
  short local_res10;
  short sStackX_12;
  short local_res18;
  short sStackX_1a;
  undefined1 local_47;
  undefined8 local_40;
  short local_34;
  short local_32;
  short local_30;
  short sStack_2e;
  short local_2c;
  short sStack_2a;
  
  local_40 = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x90) + 0xb) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x90) + 9) == '\0')) {
    local_res10 = (short)param_2;
    local_res18 = (short)param_3;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    sStackX_12 = (short)((uint)param_2 >> 0x10);
    if (local_res10 == local_res18) {
      local_34 = local_res10 + 2;
      if (param_5 != '\0') {
        local_34 = local_res10;
      }
      local_47 = 1;
      if (param_4 == '\0') {
        sVar1 = local_res10 + 6;
      }
      else {
        sVar1 = local_res10 + -6;
      }
      _local_2c = CONCAT22(sStackX_12,sVar1);
      sStackX_1a = (short)((uint)param_3 >> 0x10);
      if (sStackX_1a < sStackX_12) {
        _local_30 = CONCAT22(sStackX_12 + -6,local_res10);
        local_32 = sStackX_12 + -8;
        uVar3 = 0;
        sStackX_12 = sStackX_12 + -1;
      }
      else {
        _local_30 = CONCAT22(sStackX_12 + 6,local_res10);
        local_32 = sStackX_12 + 8;
        uVar3 = (undefined4)CONCAT71(uVar4,2);
        sStackX_12 = sStackX_12 + 1;
      }
    }
    else {
      local_32 = sStackX_12 + 2;
      if (param_5 != '\0') {
        local_32 = sStackX_12;
      }
      local_47 = 0;
      if (param_4 == '\0') {
        sVar1 = sStackX_12 + 6;
      }
      else {
        sVar1 = sStackX_12 + -6;
      }
      _local_2c = CONCAT22(sVar1,local_res10);
      if (local_res18 < local_res10) {
        _local_30 = CONCAT22(sStackX_12,local_res10 + -6);
        local_34 = local_res10 + -8;
        uVar3 = (undefined4)CONCAT71(uVar4,2);
        local_res10 = local_res10 + -1;
      }
      else {
        _local_30 = CONCAT22(sStackX_12,local_res10 + 6);
        local_34 = local_res10 + 8;
        uVar3 = 0;
        local_res10 = local_res10 + 1;
      }
    }
    uVar2 = FUN_01a99990(*(undefined8 *)(param_1 + 0x98));
    if (param_5 == '\0') {
      FUN_01a9a440(*(undefined8 *)(param_1 + 0x98),0);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                (*(longlong **)(param_1 + 0x98),(longlong)local_res10,(longlong)sStackX_12);
      iVar5 = (int)local_30;
      iVar6 = (int)sStack_2e;
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x48))
                (*(longlong **)(param_1 + 0x98),(int)local_30,iVar6);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0xb8))(*(longlong **)(param_1 + 0x98),uVar2);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                (*(longlong **)(param_1 + 0x98),(longlong)local_2c,(longlong)sStack_2a);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x48))
                (*(longlong **)(param_1 + 0x98),iVar5,iVar6);
    }
    if (((*(char *)(*(longlong *)(param_1 + 0x90) + 0xb) == '\0') &&
        (*(char *)(*(longlong *)(param_1 + 0x90) + 0x2d8) != '\0')) &&
       ((*(char *)(*(longlong *)(param_1 + 0x90) + 0x3d8) != '\0' || (*PTR_DAT_02001ca0 != '\0'))))
    {
      FUN_004169a0(&local_40,*(longlong *)(param_1 + 0x90) + 0x2d8);
      FUN_01a98770(*(undefined8 *)(param_1 + 0x98),(longlong)local_34,(longlong)local_32,uVar3,2,
                   local_47,0x3feb333333333333,0x3feb333333333333,uVar2,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0xfc),300,0,0,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x108),local_40,0,0);
    }
  }
  FUN_00414480(&local_40);
  return;
}

