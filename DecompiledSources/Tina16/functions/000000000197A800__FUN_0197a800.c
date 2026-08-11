/* Ghidra address: 0197a800 */
/* Ghidra symbol: FUN_0197a800 */


undefined8 FUN_0197a800(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00441920(local_20,local_res10[0]);
  if (local_res10[0] == 0) {
    FUN_00414b50(local_res10,param_1[0x13]);
  }
  lVar2 = FUN_0197a550(param_1,local_res10[0],1,1);
  if (lVar2 == 0) {
    local_38 = local_res10[0];
    local_30 = 0x11;
    uVar3 = FUN_0044d530(&PTR_FUN_004334c0,1,L"Unable to parse path : \"%s\" to Nodes",&local_38,0);
    FUN_004134c0(uVar3);
  }
  cVar1 = FUN_004113d0(*(undefined8 *)(lVar2 + 0x30),&PTR_FUN_00478eb0);
  if ((cVar1 == '\0') ||
     ((*(char *)(lVar2 + 0x70) != (char)param_1[0x17] &&
      (*(char *)((longlong)param_1 + 0xd3) != '\0')))) {
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar2 + 0x30),&PTR_FUN_00478eb0);
    if (cVar1 != '\0') {
      FUN_00452320(lVar2 + 0x30);
    }
    local_40 = (**(code **)(*param_1 + 0xb0))(param_1,local_res10,local_20[0]);
    if (lVar2 == param_1[0x1c]) {
      lVar2 = FUN_0197d120(lVar2,local_res10[0],0);
    }
    FUN_0197d710(lVar2,local_res10[0]);
    FUN_0197d670(lVar2,local_40);
    *(char *)(lVar2 + 0x70) = (char)param_1[0x17];
  }
  else {
    local_40 = *(undefined8 *)(lVar2 + 0x30);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_40;
}

