/* Ghidra address: 00c83050 */
/* Ghidra symbol: FUN_00c83050 */


undefined8
FUN_00c83050(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar5);
      if (*(int *)(lVar3 + 0x50) == param_3) {
        FUN_00c84220(param_1,param_2,iVar5,local_res20);
        break;
      }
      if (*(int *)(lVar3 + 0x50) < 0) {
        plVar4 = (longlong *)FUN_00c81e70(lVar3);
        iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4,param_5);
        iVar6 = 0;
        if (-1 < iVar1 + -1) {
          do {
            iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,iVar6);
            if (iVar2 == param_3) {
              (**(code **)(*plVar4 + 0x30))(plVar4,param_2,iVar6,local_res20,param_5);
              break;
            }
            iVar6 = iVar6 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(&local_res20);
  return param_2;
}

