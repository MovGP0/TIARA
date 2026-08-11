/* Ghidra address: 00ab1c00 */
/* Ghidra symbol: FUN_00ab1c00 */


void FUN_00ab1c00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218
                  );
  if (iVar6 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x88) +
      *(int *)(param_1 + 0x3c) < iVar2) {
    iVar2 = 0;
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar5 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar2);
        uVar3 = FUN_00aab7e0(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
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
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar2);
        *(undefined4 *)(param_1 + 0x60) = uVar3;
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18);
    *(undefined1 *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x730) + 8) = 0;
    *(undefined8 *)(lVar1 + 0x2f8) = 0;
  }
  else {
    *(int *)(param_1 + 0x30) = iVar2;
    iVar4 = 0;
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                    0x10);
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = FUN_00ac4a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar4);
        uVar3 = FUN_00aab7e0(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
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
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar4);
        *(undefined4 *)(param_1 + 0x60) = uVar3;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xcc) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218);
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc4) < 0) {
      if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8)) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0x218) =
             *(undefined4 *)(param_1 + 0x30);
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
        *(undefined1 *)(lVar1 + 8) = 1;
        *(int *)(lVar1 + 0xc) = iVar6 - *(int *)(param_1 + 0x2c);
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
           iVar6 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 200);
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
      iVar2 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      if (iVar2 <= iVar6) {
        iVar2 = iVar6;
      }
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
      *(int *)(lVar1 + 0x10) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) + iVar2 +
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

