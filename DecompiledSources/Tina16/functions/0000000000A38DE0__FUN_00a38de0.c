/* Ghidra address: 00a38de0 */
/* Ghidra symbol: FUN_00a38de0 */


char FUN_00a38de0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  char local_431;
  undefined8 local_430 [2];
  undefined2 local_41c;
  undefined2 local_41a;
  undefined1 local_418 [1032];
  
  local_430[0] = 0;
  local_431 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if (local_431 != '\0') {
    if ((param_4 % 3 == 0) && (param_4 / 3 < 0x101)) {
      *(int *)(param_1 + 0x28) = param_4 / 3;
      FUN_0040d200(&local_41c,0x404,0);
      local_41c = 0x300;
      local_41a = *(undefined2 *)(param_1 + 0x28);
      pbVar2 = *(byte **)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0x28);
      if (-1 < iVar4 + -1) {
        puVar3 = local_418;
        do {
          *puVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)*pbVar2);
          puVar3[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)pbVar2[1]);
          puVar3[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)pbVar2[2]);
          puVar3[3] = 0;
          pbVar2 = pbVar2 + 3;
          puVar3 = puVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar1 = thunk_FUN_04123694(&local_41c);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))(*(longlong **)(param_1 + 0x18),uVar1);
    }
    else {
      local_431 = '\0';
      FUN_0041ddd0(local_430,PTR_PTR_02003370);
      FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d660,local_430[0]);
    }
  }
  FUN_00414480(local_430);
  return local_431;
}

