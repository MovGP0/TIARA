/* Ghidra address: 01cc31d0 */
/* Ghidra symbol: FUN_01cc31d0 */


void FUN_01cc31d0(longlong param_1,int param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_7);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x448);
  iVar4 = 0;
  iVar5 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar3 = FUN_01cc2930(param_1,local_res18[0],param_4,param_5,param_6,param_7,param_8,0);
      *(int *)(lVar3 + 0x150) = param_2;
      *(int *)(lVar3 + 0x154) = iVar4;
      *(undefined4 *)(lVar3 + 0x158) = uVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x448) = uVar2;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  if (0 < param_2) {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  }
  *(int *)(param_1 + 0x44c) = param_2;
  FUN_00414480(local_res18);
  FUN_00414480(&param_7);
  return;
}

