/* Ghidra address: 00b66940 */
/* Ghidra symbol: FUN_00b66940 */


void FUN_00b66940(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  
  uVar1 = FUN_00b172d0(*(undefined8 *)(param_1 + 0x28));
  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x68),param_2);
  FUN_00b172f0(*(undefined8 *)(param_1 + 0x28),uVar2);
  FUN_00b17390(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  FUN_00b172f0(*(undefined8 *)(param_1 + 0x28),uVar1);
  FUN_00b62ce0(param_1,0x809);
  FUN_00b62ce0(param_1,0x10);
  FUN_00b62ce0(param_1,0x600);
  FUN_00b62ce0(param_1,0x10);
  FUN_00b62ce0(param_1,0x1846);
  FUN_00b62ce0(param_1,0x7cd);
  FUN_00b62ce0(param_1,0x40c1);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x106);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x20b);
  FUN_00b62ce0(param_1,0x10);
  FUN_00b62d00(param_1,0);
  FUN_00b62d00(param_1,0);
  FUN_00b62d00(param_1,0xffff);
  FUN_00b62d00(param_1,0);
  FUN_00b64d00(auStack_38);
  FUN_00b652e0(auStack_38);
  FUN_00b66610(auStack_38);
  FUN_00b65f40(auStack_38);
  FUN_00b66090(auStack_38);
  FUN_00b66130(auStack_38);
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  iVar3 = FUN_00b4e330();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_00b67310(param_1,param_2,iVar4);
      *(double *)(param_1 + 0x90) = *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0x98);
      FUN_00b68280(param_1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00b662b0(auStack_38);
  FUN_00b65050(auStack_38);
  FUN_00b64ef0(auStack_38);
  FUN_00b65c40(auStack_38);
  FUN_00b66380(auStack_38);
  FUN_00b66790(auStack_38);
  FUN_00b62ce0(param_1,10);
  FUN_00b62ce0(param_1,0);
  return;
}

