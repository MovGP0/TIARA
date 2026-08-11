/* Ghidra address: 017809e0 */
/* Ghidra symbol: FUN_017809e0 */


void FUN_017809e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  *param_3 = lVar1;
  *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(*param_3 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(*param_3 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(*param_3 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(*param_3 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(*param_3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined4 *)FUN_004095c0(0x3a);
      *puVar2 = 100;
      puVar2[1] = 0x105;
      puVar2[2] = 0x2e;
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x30),iVar4);
      FUN_00415020(puVar2 + 3,lVar1 + 0x40,0x10);
      *(undefined1 *)((longlong)puVar2 + 0x1d) = *(undefined1 *)(lVar1 + 0x140);
      *(undefined1 *)((longlong)puVar2 + 0x1e) = *(undefined1 *)(lVar1 + 0x144);
      *(undefined1 *)((longlong)puVar2 + 0x1f) = *(undefined1 *)(lVar1 + 0x145);
      *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(lVar1 + 0x147);
      *(undefined2 *)((longlong)puVar2 + 0x21) = *(undefined2 *)(lVar1 + 0x18);
      *(undefined2 *)((longlong)puVar2 + 0x23) = *(undefined2 *)(lVar1 + 0x1c);
      *(undefined1 *)((longlong)puVar2 + 0x25) = *(undefined1 *)(lVar1 + 0x148);
      uVar3 = FUN_00498310(0,0);
      *(undefined8 *)((longlong)puVar2 + 0x26) = uVar3;
      *(undefined8 *)((longlong)puVar2 + 0x2e) = 0x4020000000000000;
      *(undefined4 *)((longlong)puVar2 + 0x36) = 0x80;
      FUN_004ae7e0(*(undefined8 *)(*param_3 + 0x30),puVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined4 *)FUN_004095c0(0x28);
      *puVar2 = 0x65;
      puVar2[1] = 0x105;
      puVar2[2] = 0x1c;
      *(undefined1 *)((longlong)puVar2 + 0x1a) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x1b) = 100;
      *(undefined4 *)((longlong)puVar2 + 0x1d) = 0xfffffffe;
      *(undefined1 *)((longlong)puVar2 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x22) = 100;
      puVar2[9] = 0xfffffffe;
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),iVar4);
      uVar3 = FUN_00b95b20(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
                           *(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c));
      *(undefined8 *)(puVar2 + 3) = uVar3;
      puVar2[5] = *(undefined4 *)(lVar1 + 0x50);
      *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar1 + 0x54);
      FUN_004ae7e0(*(undefined8 *)(*param_3 + 0x38),puVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

