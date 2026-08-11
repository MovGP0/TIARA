/* Ghidra address: 00e13930 */
/* Ghidra symbol: FUN_00e13930 */


void FUN_00e13930(longlong param_1,undefined4 param_2,char *param_3,char *param_4,undefined1 param_5
                 )

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  int local_2c;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  *param_3 = '\0';
  *param_4 = '\0';
  local_20 = 0;
  puVar2 = auStack_88;
  if (param_1 == 0) goto code_r0x00e13b15;
  local_20 = FUN_00e13db0(param_1,param_2);
  if (*(char *)(local_20 + 8) == '\0') {
LAB_00e13a8f:
    *param_4 = '\0';
  }
  else {
    cVar3 = FUN_01d3f210(*(undefined8 *)(local_20 + 0x10));
    if (cVar3 == '\0') goto LAB_00e13a8f;
    plVar1 = *(longlong **)(local_20 + 0x10);
    (**(code **)(*plVar1 + 0x298))(plVar1,&local_68,*(undefined4 *)(local_20 + 0x24));
    FUN_0043e1a0(&local_48,local_68);
    FUN_00414b50(&local_40,*(undefined8 *)(plVar1[0x35] + 0x38));
    cVar3 = FUN_01d404e0(local_40,local_30);
    if (cVar3 == '\0') {
LAB_00e13a7e:
      cVar3 = '\0';
    }
    else {
      iVar4 = FUN_00416db0(local_48,&DAT_00e13ba8);
      if (iVar4 != 0) {
        iVar4 = FUN_00416db0(local_48,&DAT_00e13bbc);
        if (iVar4 != 0) goto LAB_00e13a7e;
      }
      cVar3 = '\x01';
    }
    *param_4 = cVar3;
  }
  cVar3 = FUN_01d3f510(local_20,param_5);
  *param_3 = cVar3;
  puVar2 = local_60;
  if (((*param_3 == '\0') && (*param_4 == '\0')) && ((local_2c == 0x3fe || (local_2c == 0x4b1)))) {
    local_58 = *(longlong *)(local_20 + 0x10);
    *param_3 = *(char *)(local_58 + 0x3d2);
    *param_4 = *param_3 == '\0';
  }
code_r0x00e13b15:
  local_60 = puVar2;
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_68);
  FUN_00414560(&local_48,3);
  return;
}

