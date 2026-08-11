/* Ghidra address: 01866ff0 */
/* Ghidra symbol: FUN_01866ff0 */


undefined8 FUN_01866ff0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_018673a0(param_1,iVar5);
      (**(code **)(lVar4 + 0x80))(lVar4,&local_38);
      FUN_0043e130(local_30,local_38);
      FUN_0043e130(&local_40,param_2);
      iVar2 = FUN_00416db0(local_30[0],local_40);
      if (iVar2 == 0) {
        lVar4 = FUN_018673a0(param_1,iVar5);
        uVar3 = (**(code **)(lVar4 + 0x98))(lVar4);
        cVar1 = FUN_01867400(param_1,param_3,uVar3);
        if (cVar1 != '\0') {
          local_48 = FUN_018673a0(param_1,iVar5);
          break;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_40,3);
  return local_48;
}

