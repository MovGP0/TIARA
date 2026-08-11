/* Ghidra address: 0094deb0 */
/* Ghidra symbol: FUN_0094deb0 */


undefined8 FUN_0094deb0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1);
  do {
    if (plVar3 == (longlong *)0x0) {
LAB_0094df73:
      FUN_004145c0(&local_28,2);
      return local_30;
    }
    cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
    if (cVar1 == '\x01') {
      (**(code **)(*plVar3 + 0x150))(plVar3,&local_20);
      iVar2 = FUN_00416420(local_20,param_2);
      if (iVar2 == 0) {
        (**(code **)(*plVar3 + 0x148))(plVar3,&local_28);
        iVar2 = FUN_00416420(local_28,param_3);
        if (iVar2 == 0) {
          local_30 = FUN_004113f0(plVar3,&PTR_FUN_0090a420);
          goto LAB_0094df73;
        }
      }
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x158))(plVar3);
  } while( true );
}

