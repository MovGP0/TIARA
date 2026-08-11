/* Ghidra address: 00ab1820 */
/* Ghidra symbol: FUN_00ab1820 */


void FUN_00ab1820(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18);
  iVar6 = *(int *)(lVar1 + 0x218);
  if (iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x88) +
      *(int *)(param_1 + 0x3c) < iVar6) {
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar4 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar6);
        uVar2 = FUN_00aab7e0(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x60),
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x158),
                             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 0x68),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x138),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c),
                             0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) +
                                         0x174),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x140),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar6);
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined1 *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) + 0x730)
     + 8) = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(lVar1 + 0x218) =
         ((iVar6 - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0)) + iVar3) -
         *(int *)(param_1 + 0x3c);
    iVar3 = 0;
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar3);
        uVar2 = FUN_00aab7e0(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x60),
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x158),
                             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 0x68),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x138),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c),
                             0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) +
                                         0x174),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x140),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar3);
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xcc) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218);
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc4) < 0) {
      if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8)) {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
        *(undefined1 *)(lVar1 + 8) = 1;
        *(int *)(lVar1 + 0xc) = iVar5 - *(int *)(param_1 + 0x2c);
        *(int *)(lVar1 + 0x10) =
             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8) +
             *(int *)(param_1 + 0x2c);
        *(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) +
         0x730) = lVar1;
      }
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
      *(undefined1 *)(lVar1 + 8) = 5;
      *(int *)(lVar1 + 0xc) =
           iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 200);
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
      iVar6 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
      }
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
      *(int *)(lVar1 + 0x10) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) + iVar6 +
           *(int *)(param_1 + 0x3c);
      *(longlong *)
       (*(longlong *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) + 0x730)
           = lVar1;
    }
    *(undefined8 *)
     (*(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) + 0x730) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
  }
  return;
}

