/* Ghidra address: 015c3020 */
/* Ghidra symbol: FUN_015c3020 */


void FUN_015c3020(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_160 [5];
  undefined8 local_132;
  undefined8 local_d0 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_ac [70];
  longlong local_66;
  longlong local_37;
  char local_2f;
  int local_1c;
  
  local_d0[0] = 0;
  puVar4 = local_160;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_00417580(local_ac,&DAT_015b9418);
  if ((param_2 < 0) || (iVar1 = FUN_015c2df0(param_1), iVar1 <= param_2)) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,4,0);
    FUN_004134c0(uVar2);
  }
  FUN_015c29e0(param_1,local_ac,param_2);
  if ((local_37 != 0) && (local_2f != '\0')) {
    FUN_00410f20(local_37);
  }
  local_b8 = local_66;
  local_c0 = local_66;
  if (local_66 != 0) {
    local_c0 = *(longlong *)(local_66 + -8);
  }
  local_1c = 0;
  iVar1 = (int)local_c0;
  if (-1 < (int)local_c0 + -1) {
    do {
      if (*(longlong *)(local_66 + 4 + (longlong)local_1c * 0xc) != 0) {
        FUN_004095f0(*(undefined8 *)(local_66 + 4 + (longlong)local_1c * 0xc));
        *(undefined8 *)(local_66 + 4 + (longlong)local_1c * 0xc) = 0;
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar3 = FUN_015c2a60(param_1,param_2);
  FUN_00419430(lVar3 + 0x46,&DAT_015b93d0);
  FUN_015c29e0(param_1,local_160,param_2);
  FUN_015bf270(local_d0,local_132);
  local_1c = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                       (*(longlong **)(param_1 + 0x10),local_d0[0]);
  if (-1 < local_1c) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),local_1c);
  }
  iVar1 = FUN_015c2df0(param_1);
  local_1c = param_2;
  if (param_2 <= iVar1 + -2) {
    iVar1 = ((iVar1 + -2) - param_2) + 1;
    do {
      FUN_00417c40(*(longlong *)(param_1 + 8) + (longlong)local_1c * 0x90,
                   *(longlong *)(param_1 + 8) + (longlong)(local_1c + 1) * 0x90,&DAT_015b9418);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_015c2df0(param_1);
  FUN_015c2ad0(param_1,iVar1 + -1);
  FUN_00417740(local_160,&DAT_015b9418);
  FUN_00414480(local_d0);
  FUN_00417740(local_ac,&DAT_015b9418);
  return;
}

