/* Ghidra address: 01084690 */
/* Ghidra symbol: FUN_01084690 */


void FUN_01084690(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  FUN_010901e0(param_1,param_2,local_30);
  *(undefined1 *)(param_1 + 0xb50) = 1;
  iVar2 = (**(code **)(*local_30[0] + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_30[0] + 0x18))(local_30[0],&local_48,iVar4);
      FUN_00441920(local_40,local_48);
      FUN_010845a0(param_1,local_40[0]);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_010b0330(*(undefined8 *)(param_1 + 0xac8));
  cVar1 = FUN_010b2eb0(*(undefined8 *)(param_1 + 0xac8));
  if (cVar1 == '\0') {
    FUN_0107a0c0(param_1);
    lVar3 = FUN_01081ce0(param_1);
    FUN_010792a0(param_1,lVar3);
    if (lVar3 == 0) {
      FUN_00c0fae0(*(undefined8 *)(param_1 + 0xa78));
    }
    else {
      FUN_01085110(param_1,*(undefined8 *)(lVar3 + 0x10),0xffffffff);
    }
  }
  else {
    FUN_00c0fae0(*(undefined8 *)(param_1 + 0xa78));
    FUN_010792a0(param_1,0);
    FUN_0107a0c0(param_1);
    FUN_01084570(param_1);
  }
  *(undefined1 *)(param_1 + 0xb50) = 0;
  FUN_00410f20(local_30[0]);
  FUN_00414560(&local_48,2);
  return;
}

