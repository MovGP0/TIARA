/* Ghidra address: 01c8edd0 */
/* Ghidra symbol: FUN_01c8edd0 */


void FUN_01c8edd0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    if ((*(longlong *)(param_1 + 0x2780) != 0) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10))) {
      lVar2 = FUN_01c8a3c0(param_1,0);
      *(undefined8 *)(param_1 + 0x27a8) = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(param_1 + 0x2768) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x2770) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined4 *)(param_1 + 0x17f4) = 0;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) + -1;
      if (-1 < iVar4) {
        do {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar4);
          FUN_004aee30(*(undefined8 *)(param_1 + 0x2780),uVar3);
          FUN_00418590(uVar3,&DAT_01c4d1b0);
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
      }
      FUN_004aee80(*(undefined8 *)(param_1 + 0x2780));
    }
    if (*(longlong *)(param_1 + 0x2768) == 0) {
      uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x27a8))(*(undefined8 **)(param_1 + 0x27a8));
      FUN_00418590(uVar3,&DAT_01984da0);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x2770);
      if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2768) == *(longlong *)(lVar2 + 0x1a8))) {
        *(undefined8 *)(lVar2 + 0x1a8) = 0;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 0x2768));
      *(undefined8 *)(param_1 + 0x2768) = 0;
      *(undefined8 *)(param_1 + 0x27a8) = 0;
      puVar1 = *(undefined8 **)(param_1 + 0x2770);
      if (puVar1 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar1)(puVar1);
        FUN_00418590(uVar3,&DAT_01cf1390);
        *(undefined8 *)(param_1 + 0x2770) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x27a8) = param_2;
  return;
}

