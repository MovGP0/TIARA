/* Ghidra address: 01953da0 */
/* Ghidra symbol: FUN_01953da0 */


void FUN_01953da0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 byte param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((param_4 != 0) &&
     ((cVar1 = (**(code **)(*param_1 + 0x208))(param_1,param_2), cVar1 != '\0' ||
      (iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]),
      0 < iVar2)))) {
    if (param_5 == 0) {
      param_5 = (*(byte *)(param_1 + 0x1a) & 0x40) == 0;
    }
    iVar2 = FUN_004aeba0(param_4,param_1);
    if (((param_5 & iVar2 == -1) != 0) &&
       (((iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]),
         iVar2 == 0 || (cVar1 = (**(code **)(*param_1 + 0x208))(param_1,param_2), cVar1 != '\0')) &&
        (cVar1 = FUN_00411580(*param_1,param_3), cVar1 != '\0')))) {
      FUN_004ae7e0(param_4,param_1);
    }
    iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x20))((longlong *)param_1[0x10],iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01918c28);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0x10] + 0x20))((longlong *)param_1[0x10],iVar5)
          ;
          (**(code **)(*plVar4 + 0x220))(plVar4,param_2,param_3,param_4,0);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

