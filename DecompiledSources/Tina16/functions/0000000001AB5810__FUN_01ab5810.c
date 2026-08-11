/* Ghidra address: 01ab5810 */
/* Ghidra symbol: FUN_01ab5810 */


undefined8
FUN_01ab5810(longlong param_1,double param_2,code *param_3,double *param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 local_98;
  double local_90 [13];
  
  *(undefined8 *)PTR_DAT_02005620 = 0;
  *(undefined8 *)PTR_DAT_020041f8 = 0;
  (**(code **)(**(longlong **)(param_1 + 200) + 0x10))
            (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x48))
                    (*(longlong **)(param_1 + 200),param_2);
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
            (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),param_2,0);
  (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
            (*(longlong **)(param_1 + 200),local_90,&local_98,0);
  dVar3 = 1e+30;
  do {
    uVar6 = uVar2;
    dVar5 = dVar3;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
                      (*(longlong **)(param_1 + 200),local_90,&local_98,0);
    if (cVar1 == '\0') break;
    cVar1 = (*param_3)(local_98,uVar6);
    dVar3 = local_90[0];
    uVar2 = local_98;
  } while (cVar1 != '\0');
  uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x48))
                    (*(longlong **)(param_1 + 200),param_2);
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
            (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),param_2,0);
  dVar3 = 1e+30;
  do {
    uVar8 = uVar2;
    dVar7 = dVar3;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
                      (*(longlong **)(param_1 + 200),local_90,&local_98,1);
    if (cVar1 == '\0') break;
    cVar1 = (*param_3)(local_98,uVar8);
    dVar3 = local_90[0];
    uVar2 = local_98;
  } while (cVar1 != '\0');
  dVar3 = (double)FUN_0040c850(dVar5 - param_2);
  dVar4 = (double)FUN_0040c850(dVar7 - param_2);
  if (dVar4 <= dVar3) {
    *param_4 = dVar7;
    *param_5 = uVar8;
  }
  else {
    *param_4 = dVar5;
    *param_5 = uVar6;
  }
  return 1;
}

