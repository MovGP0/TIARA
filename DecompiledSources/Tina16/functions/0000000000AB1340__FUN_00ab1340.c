/* Ghidra address: 00ab1340 */
/* Ghidra symbol: FUN_00ab1340 */


void FUN_00ab1340(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x60);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18);
  *(undefined8 *)(lVar4 + 0x2f8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50);
  if (*(int *)(lVar4 + 0x218) - iVar5 <
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x88) +
      *(int *)(param_1 + 0x3c)) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xd0) != '\0') {
      *(int *)(param_1 + 0x38) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c) / 2;
      lVar4 = FUN_00ac4a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xbc));
      *(int *)(param_1 + 0x34) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8) +
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) +
           *(int *)(lVar4 + 0x20);
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 4);
      if (((iVar1 < iVar5 - *(int *)(param_1 + 0x68)) &&
          (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) +
                   0x218) < iVar5 + *(int *)(param_1 + 0x34))) &&
         (*(int *)(param_1 + 0x34) <
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0xc) - iVar1)) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18);
        if (*(int *)(lVar4 + 0x218) <= *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x38)) {
          return;
        }
        *(undefined1 *)(lVar4 + 0x21c) = 1;
        *(int *)(lVar4 + 0x218) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x38);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x30) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218);
    *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218) =
         (((*(int *)(param_1 + 0x30) -
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0)) -
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c)) -
         *(int *)(param_1 + 0x3c)) + -5;
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar6);
        uVar2 = FUN_00aab7e0(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
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
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xcc) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218);
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc4) < 0) {
      if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8)) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
        *(undefined1 *)(lVar4 + 8) = 1;
        *(int *)(lVar4 + 0xc) = iVar5 - *(int *)(param_1 + 0x2c);
        *(int *)(lVar4 + 0x10) =
             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8) +
             *(int *)(param_1 + 0x2c);
        *(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) +
         0x730) = lVar4;
      }
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
      *(undefined1 *)(lVar4 + 8) = 5;
      *(int *)(lVar4 + 0xc) =
           iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 200);
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      if (iVar1 <= iVar5) {
        iVar1 = iVar5;
      }
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
      *(int *)(lVar4 + 0x10) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) + iVar1 +
           *(int *)(param_1 + 0x3c);
      *(longlong *)
       (*(longlong *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) + 0x730)
           = lVar4;
    }
    *(undefined8 *)
     (*(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8) + 0x730) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
  }
  else {
    iVar1 = 0;
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar1);
        uVar2 = FUN_00aab7e0(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
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
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar1);
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x2f8) = 0;
  }
  return;
}

