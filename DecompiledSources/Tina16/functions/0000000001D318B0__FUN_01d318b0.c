/* Ghidra address: 01d318b0 */
/* Ghidra symbol: FUN_01d318b0 */


void FUN_01d318b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_64 [8];
  undefined8 local_5c [4];
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  puVar9 = local_5c;
  for (lVar8 = 6; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)puVar9 = *(undefined4 *)param_2;
  FUN_004179d0(local_5c,&DAT_01d2e6d8);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_01d31a70(param_1,0x1000);
  }
  else {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_01d31350(local_5c[0]);
      iVar2 = FUN_01d31350(local_5c[1]);
      iVar3 = FUN_01d31350(local_5c[2]);
      iVar4 = FUN_01d31350(local_5c[3]);
      iVar5 = FUN_01d31350(local_3c);
      iVar6 = FUN_01d31350(local_34);
      FUN_01d310e0(param_1,local_64,2,0,iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + 4);
      FUN_01d31100(param_1,local_64);
      FUN_01d313e0(param_1,local_5c[0]);
      FUN_01d313e0(param_1,local_5c[1]);
      FUN_01d313e0(param_1,local_5c[2]);
      FUN_01d313e0(param_1,local_5c[3]);
      FUN_01d313e0(param_1,local_3c);
      FUN_01d313e0(param_1,local_34);
      FUN_01d31740(param_1,local_2c);
      uVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x30) = uVar7;
    }
  }
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  return;
}

