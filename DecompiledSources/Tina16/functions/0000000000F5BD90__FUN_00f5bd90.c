/* Ghidra address: 00f5bd90 */
/* Ghidra symbol: FUN_00f5bd90 */


void FUN_00f5bd90(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 longlong param_5)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 in_stack_ffffffffffffff68;
  ulonglong uVar9;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  
  puVar7 = local_68;
  for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined8 *)(param_5 + 0x28) = local_68[0];
  *(undefined8 *)(param_5 + 0x30) = local_68[1];
  *(undefined8 *)(param_5 + 0x18) = local_48;
  *(undefined8 *)(param_5 + 0x20) = local_40;
  uVar1 = FUN_016e9e80(param_1,6);
  *(undefined1 *)(param_5 + 1) = uVar1;
  cVar2 = FUN_016e9d10(param_1,2);
  cVar6 = cVar2 + '\x02';
  cVar3 = FUN_016ea1b0(param_1,1);
  *(char *)(param_5 + 0x38) = cVar3 + '\x01';
  uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff68 >> 8),1);
  FUN_016ebdd0(param_1,*(char *)(param_5 + 1) + '\x01',cVar2 + '\x01',param_3,uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebef0(param_1,*(char *)(param_5 + 1) + '\x02',param_2,cVar2 + '\x01',uVar4);
  uVar9 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebe60(param_1,*(char *)(param_5 + 1) + '\x05',param_2,param_3,uVar9);
  FUN_016ebdd0(param_1,*(char *)(param_5 + 1) + '\x03',cVar6,0,uVar9 & 0xffffffffffffff00);
  cVar2 = *(char *)(param_5 + 1);
  FUN_016ecbf0(param_1,cVar2 + '\x06',cVar2 + '\x01',cVar2 + '\x03');
  if ((local_30 == 0.0) && (local_38 == 0.0)) {
    uVar4 = FUN_004095c0(0x10);
    *(undefined8 *)(param_5 + 8) = uVar4;
    FUN_00dd2c10(uVar4,&PTR_FUN_00dd01b8,cVar6,0,&local_69,&local_6a);
  }
  else {
    lVar5 = FUN_004095c0(0x9c80);
    *(longlong *)(param_5 + 8) = lVar5;
    FUN_00dd2ca0(lVar5,&PTR_FUN_00dd01f0,cVar6,0,&local_69,&local_6a);
    *(double *)(lVar5 + 0x18) = local_30;
    *(double *)(lVar5 + 0x10) = local_38;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined1 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(lVar5 + 0x21) = 0;
    *(undefined4 *)(lVar5 + 0x24) = 0;
  }
  *(undefined1 *)(*(longlong *)(param_5 + 8) + 6) = 3;
  FUN_016ed1a0(param_1,*(char *)(param_5 + 1) + '\x04',param_2,param_3);
  FUN_016ed320(param_1,*(char *)(param_5 + 1) + '\x01',0,local_48,0);
  FUN_016ed220(param_1,*(char *)(param_5 + 1) + '\x02',local_40,0);
  dVar8 = (double)FUN_00b90620(0x4059000000000000,local_48);
  FUN_016ed320(param_1,*(char *)(param_5 + 1) + '\x05',0,0.001 / dVar8,0);
  return;
}

