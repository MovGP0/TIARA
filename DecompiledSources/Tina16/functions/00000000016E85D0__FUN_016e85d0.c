/* Ghidra address: 016e85d0 */
/* Ghidra symbol: FUN_016e85d0 */


void FUN_016e85d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) +
           (longlong)*(int *)(param_1 + 0x2c) * 8);
  lVar6 = (longlong)(*(int *)(param_1 + 0x2c) + 1);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + lVar6 * 8);
  uVar3 = *(undefined1 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80) + (longlong)*(int *)(param_1 + 0x2c)
           );
  uVar4 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80) + lVar6);
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x40) * 2;
    iVar7 = 0;
    if (iVar8 - 1U < 0x80000000) {
      do {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x98) + (longlong)iVar7 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) +
              (longlong)
              (*(int *)(param_1 + 0x28) * *(int *)(*(longlong *)(param_1 + 0x60) + 0x40) * 2 + iVar7
              ) * 8);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70);
  *(undefined8 *)(lVar6 + (longlong)*(int *)(param_1 + 0x2c) * 8) =
       *(undefined8 *)(lVar6 + (longlong)*(int *)(param_1 + 0x24) * 8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70);
  *(undefined8 *)(lVar6 + (longlong)(*(int *)(param_1 + 0x2c) + 1) * 8) =
       *(undefined8 *)(lVar6 + (longlong)(*(int *)(param_1 + 0x24) + 1) * 8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80);
  *(undefined1 *)(lVar6 + *(int *)(param_1 + 0x2c)) =
       *(undefined1 *)(lVar6 + *(int *)(param_1 + 0x24));
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80);
  *(undefined1 *)(lVar6 + (*(int *)(param_1 + 0x2c) + 1)) =
       *(undefined1 *)(lVar6 + (*(int *)(param_1 + 0x24) + 1));
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x40) * 2;
    iVar7 = 0;
    if (iVar8 - 1U < 0x80000000) {
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x40);
        *(undefined8 *)(lVar6 + (longlong)(*(int *)(param_1 + 0x28) * iVar5 * 2 + iVar7) * 8) =
             *(undefined8 *)(lVar6 + (longlong)(*(int *)(param_1 + 0x20) * iVar5 * 2 + iVar7) * 8);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + (longlong)*(int *)(param_1 + 0x24) * 8) =
       uVar1;
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) +
   (longlong)(*(int *)(param_1 + 0x24) + 1) * 8) = uVar2;
  *(undefined1 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80) + (longlong)*(int *)(param_1 + 0x24)) =
       uVar3;
  *(undefined1 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80) + (longlong)(*(int *)(param_1 + 0x24) + 1))
       = uVar4;
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x40) * 2;
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) +
         (longlong)
         (*(int *)(param_1 + 0x20) * *(int *)(*(longlong *)(param_1 + 0x60) + 0x40) * 2 + iVar7) * 8
         ) = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x98) + (longlong)iVar7 * 8);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

