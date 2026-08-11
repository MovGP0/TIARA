/* Ghidra address: 01565560 */
/* Ghidra symbol: FUN_01565560 */


void FUN_01565560(longlong param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x9c0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x9c0),iVar4);
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8);
      uVar2 = FUN_01d03160(*(undefined8 *)(param_1 + 0x98));
      *(uint *)(param_1 + 0x88) = (uint)uVar2;
      cVar1 = FUN_01d3f210(param_2);
      if ((cVar1 != '\0') &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x10) == param_2)) {
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x1a8);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(param_1 + 0x88) == 0x40b) {
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2d0))
                    (*(longlong **)(param_1 + 0x98),0xb,param_1 + 0xa8);
          **(undefined2 **)(param_1 + 0xa8) = 0;
        }
        else if (*(int *)(param_1 + 0x88) == 0x40a) {
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x2d0))
                    (*(longlong **)(param_1 + 0x98),9,param_1 + 0xa8);
          **(undefined2 **)(param_1 + 0xa8) = 0;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x16c) = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

