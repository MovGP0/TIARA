/* Ghidra address: 00e7b680 */
/* Ghidra symbol: FUN_00e7b680 */


void FUN_00e7b680(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 *local_30;
  
  puVar2 = (undefined8 *)FUN_00409570(0x60);
  puVar5 = &DAT_01edf408;
  puVar7 = puVar2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  do {
    uVar9 = FUN_016eb0a0(param_1,uVar6 & 0xffffffff);
    puVar2[(uVar6 & 0xff) - 1] = uVar9;
    cVar4 = (char)uVar6 + '\x01';
    uVar6 = CONCAT71((int7)(uVar6 >> 8),cVar4);
  } while (cVar4 != '\f');
  uVar1 = FUN_016eaa90(param_1,0xc);
  *(undefined2 *)(puVar2 + 0xb) = uVar1;
  uVar8 = 0;
  FUN_016ee260(param_1,&local_30,0x18,0);
  *local_30 = 3;
  FUN_00e7af60(param_1,param_2,CONCAT11(uVar8,1),2,3,4,5,6,puVar2,local_30);
  FUN_016e9f40(param_1,FUN_00e7b300);
  FUN_016e9fa0(param_1,FUN_00e7b2a0);
  FUN_016e9fb0(param_1,FUN_00e7b2c0);
  FUN_016e9f50(param_1,FUN_00e7b2e0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_004095f0(puVar2);
  }
  return;
}

