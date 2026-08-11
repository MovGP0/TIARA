/* Ghidra address: 01566bd0 */
/* Ghidra symbol: FUN_01566bd0 */


void FUN_01566bd0(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_48;
  longlong local_40 [2];
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar4);
      plVar1 = *(longlong **)(lVar3 + 8);
      sVar2 = FUN_01d03160(plVar1);
      if (sVar2 == 0x40b) {
        FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(lVar3 + 0x18),local_40);
        if (*(char *)(local_40[0] + 0x48) == '\x01') {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,10,&local_48);
          *local_48 = 1;
        }
        else if (*(char *)(local_40[0] + 0x48) == '\x02') {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,10,&local_48);
          *local_48 = 2;
        }
      }
      sVar2 = FUN_01d03160(plVar1);
      if ((sVar2 == 0x40a) &&
         (FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(lVar3 + 0x18),local_40),
         *(char *)(local_40[0] + 0x48) == '\x02')) {
        (**(code **)(*plVar1 + 0x2d0))(plVar1,10,&local_48);
        *local_48 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

