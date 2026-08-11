/* Ghidra address: 01b76f80 */
/* Ghidra symbol: FUN_01b76f80 */


void FUN_01b76f80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_007e2ef0();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_007e2f10(param_3,iVar5);
      cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,local_res10[0],*(undefined8 *)(lVar4 + 0x10));
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x10))
                  (param_1,&local_30,local_res10[0],*(undefined8 *)(lVar4 + 0x10),0);
        uVar3 = FUN_007dca30(local_30);
        FUN_007e2f50(lVar4,uVar3);
      }
      FUN_01b76f80(param_1,local_res10[0],lVar4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

