/* Ghidra address: 00a34d00 */
/* Ghidra symbol: FUN_00a34d00 */


void FUN_00a34d00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a30a98);
  if (cVar1 == '\0') {
    FUN_0041ddd0(local_30,PTR_PTR_02003830);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2cf00,local_30[0]);
  }
  else {
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
    *(undefined1 *)(param_1 + 0x494) = *(undefined1 *)(param_2 + 0x494);
    FUN_00a35400(param_1);
    FUN_00409a70(*(undefined8 *)(param_2 + 0x478),*(undefined8 *)(param_1 + 0x478),
                 (longlong)(*(int *)(param_1 + 0x498) * *(int *)(param_1 + 0x48c)));
    FUN_00409a70(*(undefined8 *)(param_2 + 0x480),*(undefined8 *)(param_1 + 0x480),
                 (longlong)(*(int *)(param_1 + 0x488) * *(int *)(param_1 + 0x48c)));
    puVar4 = (undefined8 *)(param_2 + 0x6c);
    puVar5 = (undefined8 *)(param_1 + 0x6c);
    for (lVar3 = 0x80; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_00608880(*(undefined8 *)(param_2 + 0x38));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))(*(longlong **)(param_1 + 0x18),uVar2);
  }
  FUN_00414480(local_30);
  return;
}

