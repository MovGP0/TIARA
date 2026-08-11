/* Ghidra address: 00442ff0 */
/* Ghidra symbol: FUN_00442ff0 */


void FUN_00442ff0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_2028 [4000];
  undefined1 local_1088;
  undefined1 local_88;
  
  local_88 = 0;
  local_1088 = 0;
  iVar4 = 0x1000;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (iVar2 < 0xc00) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + -4);
    }
    iVar2 = FUN_00442d80(local_2028,0xfff,param_2,uVar1,param_3,param_4,param_5);
  }
  else {
    iVar4 = 0;
    iVar2 = iVar4;
    if (param_2 != 0) {
      iVar4 = *(int *)(param_2 + -4);
      iVar2 = iVar4;
    }
  }
  if (iVar2 < iVar4 + -1) {
    FUN_00414740(param_1,local_2028,iVar2);
  }
  else {
    while (iVar4 + -1 <= iVar2) {
      iVar4 = iVar4 * 2;
      FUN_00414480(param_1);
      FUN_004169f0(param_1,iVar4);
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = *(undefined4 *)(param_2 + -4);
      }
      uVar3 = FUN_00416740(*param_1);
      iVar2 = FUN_00442d80(uVar3,iVar4 + -1,param_2,uVar1,param_3,param_4,param_5);
    }
    FUN_004169f0(param_1,iVar2);
  }
  return;
}

