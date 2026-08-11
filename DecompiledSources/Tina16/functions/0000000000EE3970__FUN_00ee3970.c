/* Ghidra address: 00ee3970 */
/* Ghidra symbol: FUN_00ee3970 */


char FUN_00ee3970(longlong param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 auStack_188 [47];
  char local_159;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte local_131 [256];
  char local_31;
  longlong local_30;
  
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  lVar4 = (ulonglong)*param_3 + 1;
  pbVar6 = local_131;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar6 = *param_3;
    param_3 = param_3 + 1;
    pbVar6 = pbVar6 + 1;
  }
  local_30 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(*(longlong *)(local_30 + 0x10) + 0x230) == '\0') {
    if (*(longlong *)PTR_DAT_02004208 != 0) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_150,0x4ea);
      FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_150);
    }
  }
  else {
    cVar1 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0xd8),&PTR_FUN_0152be48);
    if ((cVar1 == '\0') && (*(longlong *)PTR_DAT_020057d0 != 0)) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_148,0x4ea);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x828),local_148);
    }
    else {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_140,0x4ea);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_140);
    }
  }
  local_31 = '\0';
  iVar5 = 0;
  while ((local_31 == '\0' && (*(longlong *)(local_30 + 0xa48) != 0))) {
    iVar2 = (**(code **)(**(longlong **)(local_30 + 0xa48) + 0x28))
                      (*(longlong **)(local_30 + 0xa48));
    if (iVar2 + -1 < iVar5) break;
    (**(code **)(**(longlong **)(local_30 + 0xa48) + 0x18))
              (*(longlong **)(local_30 + 0xa48),&local_158,iVar5);
    FUN_00ee2cd0(auStack_188,local_158);
    iVar5 = iVar5 + 1;
  }
  local_159 = local_31;
  FUN_00414560(&local_158,4);
  return local_159;
}

