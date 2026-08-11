/* Ghidra address: 00b2de10 */
/* Ghidra symbol: FUN_00b2de10 */


void FUN_00b2de10(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x03') {
    while (iVar1 = FUN_00b19580(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30)), 0 < iVar1) {
      uVar2 = FUN_00b19520(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      iVar1 = FUN_00415a60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 5),&DAT_00b2df78);
      if (iVar1 == 0) {
        return;
      }
      uVar2 = FUN_00b19540(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),
                   *(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    iVar1 = FUN_00415a60(*(undefined8 *)(param_2 + 5),&LAB_00b2df88);
    if (iVar1 == 0) {
      while (iVar1 = FUN_00b19580(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30)), 0 < iVar1)
      {
        uVar2 = FUN_00b19540(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
        *(undefined8 *)(param_1 + 0x28) = uVar2;
        iVar1 = FUN_00415a60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 5),&DAT_00b2df78);
        if (iVar1 == 0) {
          FUN_00b2d400(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
          return;
        }
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),
                     *(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
      while (iVar1 = FUN_00b19580(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30)), 0 < iVar1)
      {
        uVar2 = FUN_00b19520(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
        *(undefined8 *)(param_1 + 0x28) = uVar2;
        if (*(int *)(*(longlong *)(param_1 + 0x28) + 0xd) < *(int *)(param_2 + 0xd)) break;
        uVar2 = FUN_00b19540(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30));
        *(undefined8 *)(param_1 + 0x28) = uVar2;
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),
                     *(undefined8 *)(param_1 + 0x28));
      }
      FUN_00b19560(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x30),param_2);
    }
  }
  return;
}

