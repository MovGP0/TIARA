/* Ghidra address: 01d61850 */
/* Ghidra symbol: FUN_01d61850 */


bool FUN_01d61850(undefined8 param_1,undefined8 *param_2,double param_3,double param_4,
                 double param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_970 [28];
  double local_890;
  double local_888;
  
  puVar2 = local_970;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_970,&DAT_01d0d0b8);
  uVar3 = FUN_00b90620(param_3,param_4);
  dVar4 = (double)FUN_00b90620(uVar3,param_5);
  uVar3 = FUN_00b90650(param_3,param_4);
  dVar5 = (double)FUN_00b90650(uVar3,param_5);
  dVar6 = (double)FUN_0040c850(((local_888 / 3.0) * (param_3 + param_4 + param_5) + local_890) *
                               50.0);
  FUN_00417740(local_970,&DAT_01d0d0b8);
  return dVar6 <= dVar4 - dVar5;
}

