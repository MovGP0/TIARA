/* Ghidra address: 00abbe00 */
/* Ghidra symbol: FUN_00abbe00 */


void FUN_00abbe00(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = FUN_00ac5680(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xf0),param_2);
  *(int *)(param_1 + 0x30) =
       *(int *)(param_1 + 0x30) + *(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 0x10);
  if (*(char *)(lVar4 + 0x48) != '\0') {
    uVar5 = FUN_00ac5680(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xf0),param_2);
    FUN_00ab97c0(*(undefined8 *)(param_1 + 0x70),uVar5);
    if (*(char *)(lVar4 + 0x48) != '\0') {
      *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x90);
      FUN_00ab9c50(param_1,param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(lVar4 + 0x4c);
  *(undefined1 *)(lVar4 + 0x48) = 0;
  *(undefined1 *)(lVar4 + 0x49) = 1;
  if (*(longlong *)(lVar4 + 0x40) != 0) {
    iVar7 = *(int *)(*(longlong *)(lVar4 + 0x40) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar5 = FUN_00ac5670(*(undefined8 *)(lVar4 + 0x40),iVar6);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
        FUN_00abfa30(uVar5,*(undefined8 *)(param_1 + 0x78),iVar1 - iVar2,
                     *(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(lVar3 + 0x92),
                     *(undefined1 *)(lVar3 + 0x90));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00ab9c50(param_1,param_2);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(lVar4 + 0x14);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2c8) = 0;
  return;
}

