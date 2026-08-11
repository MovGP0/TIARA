/* Ghidra address: 019c4e80 */
/* Ghidra symbol: FUN_019c4e80 */


undefined8
FUN_019c4e80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
            longlong *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_a0 = auStack_d8;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  FUN_00419260(&local_60,&DAT_0147b708,1,1);
  FUN_00419260(param_4,&DAT_0147b748,1,1);
  local_3c = 0;
  local_90 = param_3;
  cVar2 = FUN_01995600(param_3,0,0);
  if (cVar2 != '\0') {
    local_30 = (longlong *)FUN_01995660(local_90,0,4);
    while (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0xf8))(local_30);
      (**(code **)(*local_30 + 0x288))(local_30,&local_a8);
      FUN_0147cfc0(&local_50,local_a8);
      FUN_00414480(&local_58);
      FUN_00419260(&local_60,&DAT_0147b708,1,(longlong)(local_3c + 1));
      uVar4 = FUN_0198d430(param_3);
      (**(code **)(*local_30 + 0x50))(local_30,uVar4,local_80);
      FUN_0147d0c0(&local_70,local_80);
      puVar1 = (undefined8 *)(local_60 + (longlong)local_3c * 0x10);
      *puVar1 = local_70;
      puVar1[1] = uStack_68;
      iVar3 = (**(code **)(*local_30 + 0x1c8))(local_30);
      local_34 = 0;
      local_38 = iVar3;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*local_30 + 0x1f0))(local_30,local_34,&local_88,&iStack_84);
          local_88 = local_88 / 8;
          iStack_84 = iStack_84 / 8;
          FUN_00419260(param_4,&DAT_0147b748,1,(longlong)(local_48 + 1));
          *(ulonglong *)(*param_4 + (longlong)local_48 * 8) = CONCAT44(iStack_84,local_88);
          local_48 = local_48 + 1;
          local_34 = local_34 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = local_3c + 1;
      FUN_00419260(param_5,&DAT_019bf790,1,(longlong)iVar3);
      lVar5 = (longlong)local_3c;
      (**(code **)(*local_30 + 0x288))(local_30,&local_b0);
      FUN_00414ad0(*param_5 + lVar5 * 8,local_b0);
      FUN_00419260(param_1 + 0x50,&DAT_019bf848,1,(longlong)iVar3);
      *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) = local_30;
      local_3c = local_3c + 1;
      FUN_01995800(local_90,0,4);
      local_30 = (longlong *)FUN_01995660(local_90,0,4);
    }
  }
  FUN_004194b0(param_2,local_60,&DAT_0147b708);
  FUN_00414560(&local_b0,2);
  FUN_00419430(&local_60,&DAT_0147b708);
  FUN_00414560(&local_58,2);
  return param_2;
}

