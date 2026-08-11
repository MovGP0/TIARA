/* Ghidra address: 00e13f10 */
/* Ghidra symbol: FUN_00e13f10 */


undefined1 FUN_00e13f10(longlong *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_41;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  iVar6 = (int)param_1[2];
  local_41 = 0;
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_01d347d0(param_1,iVar5);
      FUN_017ff4f0(param_2,local_40);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x28),local_40[0]);
      if (iVar2 == 0) goto LAB_00e13fda;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  cVar1 = FUN_0198a580(param_2);
  lVar3 = param_2;
  if (cVar1 != '\x04') {
    lVar3 = 0;
  }
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x560) == '\0')) {
    uVar4 = FUN_00e13db0(param_2,param_3);
    (**(code **)(*param_1 + 0x50))(param_1,uVar4);
    local_41 = 1;
  }
LAB_00e13fda:
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return local_41;
}

