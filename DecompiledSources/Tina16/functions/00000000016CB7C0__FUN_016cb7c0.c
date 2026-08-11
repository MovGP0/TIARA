/* Ghidra address: 016cb7c0 */
/* Ghidra symbol: FUN_016cb7c0 */


void FUN_016cb7c0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_248;
  undefined1 local_240 [256];
  undefined8 local_140 [2];
  undefined1 local_12c [4];
  undefined1 local_128 [256];
  
  local_248 = 0;
  local_140[0] = 0;
  iVar4 = 0;
  iVar5 = *(int *)(param_3 + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_3,iVar3);
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_3 + 0x10);
  iVar4 = iVar5 - iVar4;
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_3,iVar3);
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        if (((param_2 == (longlong *)0x0) ||
            (iVar1 = (**(code **)(*param_2 + 0x28))(param_2), iVar1 < 1)) ||
           (iVar1 = (**(code **)(*param_2 + 0x28))(param_2), iVar1 <= iVar3)) {
          lVar2 = FUN_01d347d0(param_3,iVar3);
          FUN_00414ff0(local_128,*(undefined8 *)(lVar2 + 8));
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2,local_140,iVar3);
          FUN_00416910(local_240,local_140[0],0xff);
          FUN_016b92b0(local_128,local_240,1);
        }
        FUN_004169a0(&local_248,local_128);
        FUN_014e5580(param_1,local_248,iVar4 / 2 + iVar4 % 2,iVar3,local_12c,0,param_4);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_248);
  FUN_00414480(local_140);
  return;
}

