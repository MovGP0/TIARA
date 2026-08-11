/* Ghidra address: 00715da0 */
/* Ghidra symbol: FUN_00715da0 */


void FUN_00715da0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_38;
  longlong local_30;
  uint local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_38 = (longlong *)0x0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_48 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(local_48 + 0x10) <= local_24) {
        FUN_00594f90();
      }
      local_30 = *(longlong *)(*(longlong *)(local_48 + 8) + (longlong)(int)local_24 * 8);
      cVar1 = (**(code **)(**(longlong **)(local_30 + 8) + 0x30))(*(longlong **)(local_30 + 8));
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(local_30 + 8) + 0x18))(*(longlong **)(local_30 + 8),&local_58);
        (**(code **)(*local_20 + 0x80))(local_20,local_58,local_30);
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00715060(param_1,&local_38,local_20);
  FUN_00410f20(local_20);
  if (local_38 == (longlong *)0x0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_020016a0);
    FUN_004134c0(uVar2);
  }
  else {
    (**(code **)(*local_38 + 0x38))(local_38);
  }
  FUN_00414480(&local_58);
  FUN_0041b800(&local_38);
  return;
}

