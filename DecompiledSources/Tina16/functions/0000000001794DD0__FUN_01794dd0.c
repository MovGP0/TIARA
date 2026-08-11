/* Ghidra address: 01794dd0 */
/* Ghidra symbol: FUN_01794dd0 */


void FUN_01794dd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_2c [3];
  
  plVar3 = *(longlong **)(param_1 + 0xd20);
  if ((plVar3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2), cVar1 == '\0')) {
    return;
  }
  uVar2 = FUN_01795470(param_1);
  uStack_34 = (undefined4)(uVar2 >> 0x20);
  puVar5 = &local_30;
  FUN_017954b0(param_1,uVar2 & 0xffffffff,uStack_34,local_2c,puVar5);
  plVar3 = (longlong *)FUN_01795510(param_1,local_2c[0],local_30);
  if (plVar3 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xc91) = 1;
    uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),2);
    uVar4 = FUN_00c5c220(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),plVar3,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),uVar4);
    cVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
    if (cVar1 != '\0') {
      FUN_01795670(param_1,1);
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_017a79c0);
      if ((cVar1 != '\0') && ((*(byte *)((longlong)plVar3 + 0x145) & 4) != 0)) {
        FUN_017a0190(param_1);
      }
    }
    uVar2 = FUN_01795470(param_1);
    uStack_3c = (undefined4)(uVar2 >> 0x20);
    FUN_017950f0(param_1,param_2,0,uVar2 & 0xffffffff,CONCAT44(uVar7,uStack_3c));
  }
  return;
}

