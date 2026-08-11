/* Ghidra address: 016c3640 */
/* Ghidra symbol: FUN_016c3640 */


void FUN_016c3640(longlong param_1,undefined8 *param_2,byte *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_12c [4];
  byte local_128 [256];
  
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9c8),local_128,local_12c);
  if (cVar1 == '\0') {
    uVar2 = FUN_016c34a0(&DAT_016b3a30,1,local_128);
    *param_2 = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x50))(*(longlong **)(param_1 + 0x9c8),*param_2)
    ;
  }
  else {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xf,local_128,0xffffffff);
  }
  return;
}

