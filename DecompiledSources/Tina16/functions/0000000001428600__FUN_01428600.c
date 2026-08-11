/* Ghidra address: 01428600 */
/* Ghidra symbol: FUN_01428600 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_01428600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined8 local_80 [13];
  
  DAT_0210c548 = param_5;
  uVar3 = 1;
  bVar1 = true;
  _DAT_0210c528 = param_1;
  DAT_0210c530 = param_2;
  DAT_0210c538 = param_3;
  DAT_0210c540 = param_4;
  dVar4 = (double)FUN_01428310(0x28);
  uVar5 = 0;
  uVar7 = 0x3ff0000000000000;
  dVar6 = (DAT_0210c558 / dVar4) * 1.0 + 0.0;
  dVar4 = (DAT_0210c550 / dVar4) * 1.0 + 0.0;
  dVar8 = (dVar6 + dVar4) / 2.0;
  while (bVar1) {
    FUN_014283d0(uVar5,dVar6,dVar4,uVar7,local_80,&local_88,&local_90,&local_98,(int)uVar3);
    uVar5 = local_80[0];
    dVar6 = local_88;
    dVar4 = local_90;
    uVar7 = local_98;
    uVar3 = (longlong)((int)uVar3 + 1) % 0x25 & 0xffffffff;
    dVar9 = (local_88 + local_90) / 2.0;
    cVar2 = FUN_01428550(dVar8,dVar9);
    dVar8 = dVar9;
    if (cVar2 != '\0') {
      bVar1 = false;
    }
  }
  return dVar8;
}

