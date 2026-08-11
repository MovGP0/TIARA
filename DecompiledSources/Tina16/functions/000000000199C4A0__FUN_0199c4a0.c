/* Ghidra address: 0199c4a0 */
/* Ghidra symbol: FUN_0199c4a0 */


void FUN_0199c4a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  if (((param_2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) &&
     ((cVar1 = FUN_0198a580(param_2), cVar1 != '\x06' ||
      ((((short)param_2[0x5b] == -1 &&
        (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x210) + 0x129) == '\0')) ||
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x210) + 0x12a) == '\0')))))) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
    iVar3 = 0;
    iVar4 = iVar2;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar3);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
          cVar1 = FUN_019921c0(*(undefined8 *)(param_1 + 0x40),local_3c[0],local_40);
          if (cVar1 == '\0') {
            FUN_0199c3e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3a0),local_3c[0],local_40
                        );
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(*param_2 + 0x1d0))();
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar2 + iVar3);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar2 + iVar3,local_3c,&local_40);
          cVar1 = FUN_019921c0(*(undefined8 *)(param_1 + 0x40),local_3c[0],local_40);
          if (cVar1 == '\0') {
            FUN_0199c3e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3a0),local_3c[0],local_40
                        );
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

