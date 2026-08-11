/* Ghidra address: 016e5de0 */
/* Ghidra symbol: FUN_016e5de0 */


bool FUN_016e5de0(undefined8 *param_1,double param_2,double param_3,double param_4)

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
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_970,&DAT_01d0d0b8);
  uVar3 = FUN_00b90620(param_2,param_3);
  dVar4 = (double)FUN_00b90620(uVar3,param_4);
  uVar3 = FUN_00b90650(param_2,param_3);
  dVar5 = (double)FUN_00b90650(uVar3,param_4);
  dVar6 = (double)FUN_0040c850(((local_888 / 3.0) * (param_2 + param_3 + param_4) + local_890) *
                               50.0);
  FUN_00417740(local_970,&DAT_01d0d0b8);
  return dVar6 <= dVar4 - dVar5;
}

