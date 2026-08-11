/* Ghidra address: 0054c880 */
/* Ghidra symbol: FUN_0054c880 */


longlong * FUN_0054c880(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  iVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
  iVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
  FUN_00419260(param_2,&DAT_004210c0,1,(longlong)((iVar2 - iVar3) + 1));
  cVar1 = FUN_0054c670(param_1);
  if (cVar1 == '\0') {
    lVar5 = FUN_00547190(param_1);
    uVar6 = 0;
    if (*(undefined8 **)(lVar5 + 9) != (undefined8 *)0x0) {
      uVar6 = **(undefined8 **)(lVar5 + 9);
    }
    lVar5 = FUN_00589390(uVar6);
    uVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
    local_20 = FUN_0054c640(lVar5 + 0x11,uVar4);
  }
  else {
    local_20 = FUN_00547190();
    local_20 = local_20 + 0x11;
  }
  iVar2 = 0;
  if (*param_2 != 0) {
    iVar2 = (int)*(undefined8 *)(*param_2 + -8);
  }
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0053c650(local_30,&local_20);
      FUN_00414ad0(*param_2 + (longlong)iVar3 * 8,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

