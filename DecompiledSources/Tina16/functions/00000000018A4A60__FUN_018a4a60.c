/* Ghidra address: 018a4a60 */
/* Ghidra symbol: FUN_018a4a60 */


undefined4
FUN_018a4a60(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,longlong param_5
            )

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_ec;
  char *local_e8;
  int *local_e0;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_84 [5];
  undefined4 local_58;
  uint local_54;
  undefined8 local_38;
  longlong local_30;
  
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_38 = 0;
  local_ec = 0xffffffff;
  local_e8 = param_3;
  if ((byte)(*param_3 + 0xb0U) < 8 && (1 << (*param_3 + 0xb0U & 0x1f) & 0x18U) != 0) {
    pcVar3 = param_3;
    puVar4 = local_84;
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *(undefined8 *)pcVar3;
      pcVar3 = pcVar3 + 8;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = *(undefined4 *)pcVar3;
    FUN_00418610(&local_38,param_3 + local_54,local_58);
    if (DAT_0211068c == '\0') {
      FUN_0043e5a0(&local_90,DAT_02110668);
      FUN_0043e5a0(&local_98,local_38);
      local_d4 = FUN_004170c0(local_90,local_98,1);
    }
    else {
      local_d4 = FUN_004170c0(DAT_02110668,local_38,1);
    }
    if ((local_d4 != 0) && (DAT_02110688 < DAT_02110684)) {
      if (DAT_0211068d == '\0') {
        DAT_02110670 = 1;
        DAT_02110674 = local_84[1];
        DAT_0211067c = local_84[2];
        DAT_02110688 = DAT_02110684;
        local_ec = 0;
      }
      else {
        local_e0 = (int *)FUN_004095c0(0x14);
        local_30 = param_5;
        iVar2 = *(int *)(param_5 + 0x50c);
        *(undefined8 *)(local_e0 + 1) = local_84[1];
        *(undefined8 *)(local_e0 + 3) = local_84[2];
        *local_e0 = iVar2;
        FUN_0180bfe0(&local_a8,0xca);
        iVar2 = iVar2 + 1;
        FUN_0043f750(&local_b0,iVar2);
        local_108 = local_b0;
        FUN_00416cd0(&local_a0,3,local_a8,&LAB_018a4de0);
        lVar1 = FUN_018a49f0(auStack_128,local_a0);
        if (lVar1 == 0) {
          FUN_0180bfe0(&local_c0,0xca);
          FUN_0043f750(&local_c8,iVar2);
          local_108 = local_c8;
          FUN_00416cd0(&local_b8,3,local_c0,&LAB_018a4de0);
          lVar1 = FUN_006def00(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(local_30 + 0x538) + 0x508) + 0x718) +
                                0x550),0,local_b8);
        }
        iVar2 = FUN_00414cb0(DAT_02110668);
        FUN_018a48f0(&local_d0,local_38,local_d4,(longlong)iVar2);
        FUN_006dee70(*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(local_30 + 0x538) + 0x508) + 0x718)
                      + 0x550),lVar1,local_d0,local_e0);
      }
    }
  }
  DAT_02110684 = DAT_02110684 + 1;
  FUN_00414560(&local_d0,9);
  FUN_00414480(&local_38);
  return local_ec;
}

