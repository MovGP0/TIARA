/* Ghidra address: 01664840 */
/* Ghidra symbol: FUN_01664840 */


void FUN_01664840(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_13e8 [181];
  undefined1 local_e40 [2616];
  undefined1 local_408;
  
  local_408 = 0;
  puVar3 = local_13e8;
  for (lVar2 = 0x278; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x1378) + 0x2d8);
  (*DAT_0210f8c8)(local_e40,local_13e8,*(longlong *)(param_3 + 0x1378) + 8);
  if (*(int *)(*(longlong *)(param_3 + 0x1378) + 0x2d8) != iVar1) {
    FUN_016e9f80(param_2,param_3,1,0);
  }
  return;
}

