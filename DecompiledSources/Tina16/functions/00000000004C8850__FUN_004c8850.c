/* Ghidra address: 004c8850 */
/* Ghidra symbol: FUN_004c8850 */


longlong FUN_004c8850(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00417c40(local_res8 + 0x80,param_4,&DAT_00437810);
  *(undefined8 *)(local_res8 + 8) = param_3;
  FUN_00419260(local_res8 + 0x18,&DAT_00406578,1,0x1000);
  **(undefined1 **)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0xfff;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined4 *)(local_res8 + 0x50) = 1;
  *(undefined8 *)(local_res8 + 0x68) = local_38;
  *(undefined8 *)(local_res8 + 0x70) = uStack_30;
  FUN_004c9720(local_res8);
  iVar2 = FUN_00458e90(*(undefined8 *)(local_res8 + 0x18),local_res8 + 0x78);
  *(longlong *)(local_res8 + 0x30) = *(longlong *)(local_res8 + 0x30) + (longlong)iVar2;
  if (*(longlong *)(local_res8 + 0x78) != 0) {
    lVar3 = FUN_00458db0();
    if (*(longlong *)(local_res8 + 0x78) == lVar3) goto LAB_004c89dd;
    lVar3 = FUN_00458d50();
    if (*(longlong *)(local_res8 + 0x78) == lVar3) goto LAB_004c89dd;
    lVar3 = FUN_0045ae90();
    if (*(longlong *)(local_res8 + 0x78) == lVar3) goto LAB_004c89dd;
  }
  FUN_0041ddd0(&local_48,PTR_PTR_02001670);
  FUN_004c8fb0(local_res8,local_48);
LAB_004c89dd:
  FUN_004c9210(local_res8);
  FUN_00414480(&local_48);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

