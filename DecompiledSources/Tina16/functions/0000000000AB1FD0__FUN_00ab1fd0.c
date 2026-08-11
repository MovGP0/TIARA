/* Ghidra address: 00ab1fd0 */
/* Ghidra symbol: FUN_00ab1fd0 */


void FUN_00ab1fd0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x60) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0) + 0xc);
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc4);
  if ((-1 < iVar5) &&
     (iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168) +
                      0x10) + -1, iVar5 <= iVar6)) {
    iVar6 = (iVar6 - iVar5) + 1;
    do {
      uVar4 = FUN_00ac4a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar5);
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
                           0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x174)
                           ,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x140),
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar5);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8) < 1) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
    *(undefined1 *)(lVar1 + 8) = 4;
    *(int *)(lVar1 + 0xc) =
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xcc) + -1;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(lVar1 + 0x14) =
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) + iVar3;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
    *(undefined1 *)(lVar1 + 8) = 1;
    *(int *)(lVar1 + 0xc) = iVar3 - *(int *)(param_1 + 0x2c);
    *(int *)(lVar1 + 0x10) =
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb8) +
         *(int *)(param_1 + 0x2c);
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8)
   + 0x730) = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
  return;
}

