/* Ghidra address: 00807cf0 */
/* Ghidra symbol: FUN_00807cf0 */


void FUN_00807cf0(longlong param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_00410f20(uVar2);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_00410f20();
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xc0),iVar3);
        FUN_00410f20(uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_00410f20(uVar2);
  FUN_008082e0(param_1);
  puVar1 = PTR_PTR_02002250;
  *(undefined8 *)PTR_PTR_02002250 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1 = PTR_PTR_020022a8;
  *(undefined8 *)PTR_PTR_020022a8 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

