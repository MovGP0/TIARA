/* Ghidra address: 00627f80 */
/* Ghidra symbol: FUN_00627f80 */


void FUN_00627f80(undefined8 param_1,int param_2,longlong *param_3,uint *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  uint local_74;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_80 = auStack_a8;
  puVar4 = &local_70;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_74 = param_2 + 0xffU & 0xffffff00;
  if (param_5 == 0) {
    *param_4 = local_74;
  }
  else {
    *param_4 = param_5;
  }
  lVar3 = FUN_004095c0((longlong)(int)*param_4);
  *param_3 = lVar3;
  local_60 = *param_3;
  local_58 = *param_4;
  local_70 = param_1;
  local_68 = param_2;
  uVar1 = FUN_00627c80(&local_70);
  FUN_00627e40(uVar1);
  while( true ) {
    uVar1 = FUN_0062db10(&local_70,0);
    iVar2 = FUN_00627ee0(uVar1);
    if (iVar2 == 1) break;
    *param_4 = *param_4 + local_74;
    FUN_00409620(param_3);
    local_60 = *param_3 + (ulonglong)local_54;
    local_58 = local_74;
  }
  uVar1 = FUN_00630390(&local_70);
  FUN_00627e40(uVar1);
  FUN_00409620(param_3,local_54);
  *param_4 = local_54;
  return;
}

