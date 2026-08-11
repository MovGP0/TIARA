/* Ghidra address: 01d2d440 */
/* Ghidra symbol: FUN_01d2d440 */


undefined8 FUN_01d2d440(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  cVar1 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3,param_4);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0')) {
    iVar2 = (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9]);
    iVar5 = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_1[9] + 0x30))((longlong *)param_1[9],iVar5 + -1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01d282a8);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)param_1[9] + 0x30))((longlong *)param_1[9],iVar5 + -1);
          cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,param_2,param_3,param_4);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

