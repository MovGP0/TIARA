/* Ghidra address: 01780c70 */
/* Ghidra symbol: FUN_01780c70 */


void FUN_01780c70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_stack_ffffffffffffff48;
  undefined2 uVar6;
  undefined1 local_50 [16];
  undefined8 local_40 [2];
  undefined4 local_2c;
  
  local_40[0] = 0;
  lVar2 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  *param_3 = lVar2;
  *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(*param_3 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(*param_3 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(*param_3 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(*param_3 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(*param_3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  local_2c = *(undefined4 *)(param_2 + 0x24);
  iVar1 = 0;
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar6 = (undefined2)((uint)in_stack_ffffffffffffff48 >> 0x10);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x30),iVar1);
      FUN_004169a0(local_40,lVar2 + 0xc);
      in_stack_ffffffffffffff48 = CONCAT22(uVar6,(short)iVar1);
      uVar3 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_40[0],*(undefined1 *)(lVar2 + 0x1d),
                           in_stack_ffffffffffffff48,*(undefined1 *)(lVar2 + 0x1e),
                           *(undefined1 *)(lVar2 + 0x1f),*(undefined1 *)(lVar2 + 0x20),
                           (int)*(short *)(lVar2 + 0x21),(int)*(short *)(lVar2 + 0x23),
                           *(undefined1 *)(lVar2 + 0x25),lVar2 + 0x26,*(undefined8 *)(lVar2 + 0x2e),
                           *(undefined4 *)(lVar2 + 0x36));
      FUN_004ae7e0(*(undefined8 *)(*param_3 + 0x30),uVar3);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x10);
  iVar1 = 0;
  if (-1 < iVar5 + -1) {
    do {
      piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),iVar1);
      if (*piVar4 == 0x65) {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),iVar1);
        FUN_00498350(local_50,(longlong)*(short *)(lVar2 + 0xc),(longlong)*(short *)(lVar2 + 0xe),
                     (longlong)*(short *)(lVar2 + 0x10),(int)*(short *)(lVar2 + 0x12));
        uVar3 = FUN_017b1980(&PTR_FUN_017a8d10,1,local_50,*(undefined4 *)(lVar2 + 0x14),
                             (int)*(short *)(lVar2 + 0x18));
        FUN_004ae7e0(*(undefined8 *)(*param_3 + 0x38),uVar3);
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_40);
  return;
}

