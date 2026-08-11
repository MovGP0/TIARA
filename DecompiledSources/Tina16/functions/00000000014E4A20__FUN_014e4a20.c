/* Ghidra address: 014e4a20 */
/* Ghidra symbol: FUN_014e4a20 */


void FUN_014e4a20(byte *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  iVar1 = FUN_00414f50(local_128,&DAT_014e4b68,(ulonglong)local_128[0] + 1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_3 + 3) = 1;
    *(undefined1 *)(param_3 + 0x430) = 2;
    uVar2 = FUN_01d0efe0(&DAT_01d0ae90,1);
    *(undefined8 *)(param_3 + 0x428) = uVar2;
    FUN_01d0f0e0(uVar2,param_2);
    *(undefined8 *)(param_3 + 0x418) = param_2;
    *(undefined2 *)(param_3 + 0x416) = 1;
  }
  else {
    FUN_004169a0(&local_130,local_128);
    iVar1 = FUN_004170c0(L"PARAM",local_130,1);
    if (iVar1 == 1) {
      *(undefined1 *)(param_3 + 3) = 7;
    }
    else {
      *(undefined1 *)(param_3 + 3) = 2;
    }
    *(undefined1 *)(param_3 + 0x54f) = 2;
    uVar2 = FUN_01d0efe0(&DAT_01d0ae90,1);
    *(undefined8 *)(param_3 + 0x550) = uVar2;
    FUN_01d0f0e0(uVar2,param_2);
    *(undefined8 *)(param_3 + 0x53d) = param_2;
    *(undefined2 *)(param_3 + 0x54d) = 1;
    *(undefined2 *)(param_3 + 0x558) = 0x2d01;
  }
  FUN_00414480(&local_130);
  return;
}

