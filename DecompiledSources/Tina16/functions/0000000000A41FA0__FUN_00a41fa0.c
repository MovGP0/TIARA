/* Ghidra address: 00a41fa0 */
/* Ghidra symbol: FUN_00a41fa0 */


longlong * FUN_00a41fa0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined7 uVar5;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)0x0;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_005f92e8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar1 == '\0') {
      plVar3 = param_1;
      cVar1 = FUN_00a3dd70(param_1);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_009ec850(&PTR_FUN_009eb620,1,0);
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      }
      else {
        uVar5 = (undefined7)((ulonglong)PTR_DAT_020026b8 >> 8);
        if ((byte)*PTR_DAT_020026b8 < 8) {
          uVar2 = (undefined4)CONCAT71(uVar5,1);
        }
        else {
          uVar2 = (undefined4)CONCAT71(uVar5,4);
        }
        plVar3 = (longlong *)
                 FUN_00a41a10(param_1,uVar2,CONCAT71((int7)((ulonglong)plVar3 >> 8),1) & 0xffffffff)
        ;
      }
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_009eb620);
      if (cVar1 != '\0') {
        FUN_009ec7d0(plVar3,(char)param_1[0xf]);
        uVar4 = FUN_009ec7c0(param_1);
        FUN_009ec9b0(plVar3,uVar4);
      }
    }
  }
  return plVar3;
}

