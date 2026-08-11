/* Ghidra address: 00844e00 */
/* Ghidra symbol: FUN_00844e00 */


void FUN_00844e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_98 [16];
  undefined1 local_88 [64];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    FUN_00844000(param_1,param_2,local_38,1);
    FUN_008482c0(param_1,local_98);
    FUN_00844000(param_1,local_98,local_48,1);
    FUN_0083d700(local_38,local_48,local_88);
    iVar4 = 4;
    puVar3 = local_88;
    do {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar1,puVar3,0);
      puVar3 = puVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

