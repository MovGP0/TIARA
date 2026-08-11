/* Ghidra address: 0153c310 */
/* Ghidra symbol: FUN_0153c310 */


longlong FUN_0153c310(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00414ad0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10));
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  iVar2 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_3 + 8) + 0x18))
                (*(longlong **)(param_3 + 8),&local_38,local_1c);
      (**(code **)(**(longlong **)(local_res8 + 8) + 0x78))(*(longlong **)(local_res8 + 8),local_38)
      ;
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

