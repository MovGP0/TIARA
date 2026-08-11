/* Ghidra address: 014e4c70 */
/* Ghidra symbol: FUN_014e4c70 */


void FUN_014e4c70(longlong param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_128,&DAT_014e4d28,(ulonglong)local_128[0] + 1);
  if ((iVar1 != 0) && (param_1 != 0)) {
    lVar2 = FUN_004095c0(0x23a);
    *(undefined8 *)(lVar2 + 0x10c) = *(undefined8 *)(param_3 + 0x53d);
    *(undefined8 *)(lVar2 + 0x114) = *(undefined8 *)(param_3 + 0x545);
    *(undefined2 *)(lVar2 + 0x11c) = *(undefined2 *)(param_3 + 0x54d);
    *(undefined1 *)(lVar2 + 0x11e) = *(undefined1 *)(param_3 + 0x54f);
    *(undefined8 *)(lVar2 + 0x11f) = *(undefined8 *)(param_3 + 0x550);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x470),lVar2);
  }
  return;
}

