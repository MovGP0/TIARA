/* Ghidra address: 007fc180 */
/* Ghidra symbol: FUN_007fc180 */


longlong * FUN_007fc180(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined **local_20;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_50 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_007fab80(local_res8,0,param_3);
  *(undefined4 *)((longlong)local_res8 + 0x2cc) = 0;
  (**(code **)(**(longlong **)PTR_DAT_02005910 + 0x28))(*(longlong **)PTR_DAT_02005910);
  cVar2 = *(char *)(DAT_02012668 + 0x191);
  *(char *)(local_res8 + 0xd0) = cVar2;
  if (cVar2 != '\0') {
    *(undefined1 *)(DAT_02012668 + 0x191) = 0;
  }
  pcVar3 = (code *)FUN_00411550(local_res8,0xffa2);
  (*pcVar3)(local_res8);
  local_20 = (undefined **)*local_res8;
  if ((local_20 != &PTR_FUN_007f0370) && ((*(ushort *)((longlong)local_res8 + 0x34) & 0x10) == 0)) {
    *(byte *)(local_res8 + 0xd5) = *(byte *)(local_res8 + 0xd5) | 1;
    FUN_00654400(local_res8);
    cVar2 = FUN_004ae080(local_res8,&PTR_FUN_007f0370);
    if (cVar2 == '\0') {
      FUN_0041ddd0(&local_38,PTR_PTR_020033f8);
      FUN_00410ae0(*local_res8,&local_50);
      local_48 = local_50;
      local_40 = 0x11;
      local_68 = 0;
      uVar4 = FUN_0044d530(&PTR_FUN_00472138,1,local_38,&local_48);
      FUN_004134c0(uVar4);
    }
    *(byte *)(local_res8 + 0xd5) = *(byte *)(local_res8 + 0xd5) & 0xfe;
    FUN_00654410(local_res8);
    if (*(char *)((longlong)local_res8 + 0x691) != '\0') {
      (**(code **)(*local_res8 + 0x280))(local_res8);
    }
  }
  (**(code **)(**(longlong **)PTR_DAT_02005910 + 0x30))(*(longlong **)PTR_DAT_02005910);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x400000;
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

