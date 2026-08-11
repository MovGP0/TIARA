/* Ghidra address: 00716390 */
/* Ghidra symbol: FUN_00716390 */


void FUN_00716390(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong local_38;
  longlong local_30;
  uint local_24;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  local_38 = 0;
  puVar1 = auStack_88;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_24 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_48 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(local_48 + 0x10) <= local_24) {
        FUN_00594f90();
      }
      local_30 = *(longlong *)(*(longlong *)(local_48 + 8) + (longlong)(int)local_24 * 8);
      uVar3 = FUN_0041b800(&local_38);
      cVar2 = FUN_00452340(*(undefined8 *)(local_30 + 8),&DAT_007165a0,uVar3);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(local_30 + 8) + 0x18))(*(longlong **)(local_30 + 8),&local_58);
        (**(code **)(*local_20 + 0x80))(local_20,local_58,local_30);
      }
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00715060(param_1,&local_38,local_20);
  FUN_00410f20(local_20);
  if (local_38 == 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_02001380);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_0041b890(&local_60,local_38,&DAT_007165a0);
    (**(code **)(*local_60 + 0x80))(local_60,param_2);
  }
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_0041b800(&local_38);
  return;
}

