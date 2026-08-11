/* Ghidra address: 0162e870 */
/* Ghidra symbol: FUN_0162e870 */


undefined8 FUN_0162e870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = 0;
  cVar2 = FUN_0161bbb0(param_2);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x5c8) == 2)) {
      unaff_R13 = _GetDigitalTemp(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + 8) + 0x20) +
                                   0x10b0),*(undefined8 *)(param_1 + 0x138),
                                  *(undefined4 *)(param_2 + 0xc),lVar1 + 0x5c4,&local_2c,&local_30);
    }
    iVar3 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x4c);
      if (-1 < iVar3 + -1) {
        do {
          uVar4 = FUN_0162e810(param_1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x68),iVar3);
    }
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x5c8) == 2)) {
      FUN_01615b80(uVar4,unaff_R13,local_2c,local_30);
    }
  }
  return uVar4;
}

