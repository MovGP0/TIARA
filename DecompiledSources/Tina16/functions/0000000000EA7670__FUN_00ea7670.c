/* Ghidra address: 00ea7670 */
/* Ghidra symbol: FUN_00ea7670 */


longlong *
FUN_00ea7670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_58 [6];
  
  puVar7 = local_58;
  for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  lVar5 = FUN_00411460(param_2,&DAT_00ea69f0);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  FUN_00ea4ee0(uVar1,param_3);
  uVar3 = FUN_00ea6c40(param_4);
  FUN_00ea4d10(uVar1,uVar3);
  FUN_00ea4e40(uVar1,param_5);
  iVar6 = 0;
  FUN_00419430(param_1,&DAT_00ea6880);
  cVar2 = FUN_00ea4940(uVar1);
  while (cVar2 != '\0') {
    if (iVar6 % 100 == 0) {
      lVar5 = 0;
      if (*param_1 != 0) {
        lVar5 = *(longlong *)(*param_1 + -8);
      }
      FUN_00419260(param_1,&DAT_00ea6880,1,lVar5 + 100);
    }
    uVar3 = FUN_00ea4500(uVar1,0);
    uVar4 = FUN_00ea4460(uVar1,0);
    FUN_00ea7370(local_58,param_2,param_3,uVar3,uVar4,cVar2);
    FUN_00417c40(*param_1 + (longlong)iVar6 * 0x30,local_58,&DAT_00ea5ae8);
    cVar2 = FUN_00ea4940(uVar1);
    iVar6 = iVar6 + 1;
  }
  lVar5 = 0;
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + -8);
  }
  if (iVar6 < lVar5) {
    FUN_00419260(param_1,&DAT_00ea6880,1,(longlong)iVar6);
  }
  FUN_00417740(local_58,&DAT_00ea5ae8);
  return param_1;
}

