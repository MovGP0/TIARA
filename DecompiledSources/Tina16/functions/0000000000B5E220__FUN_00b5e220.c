/* Ghidra address: 00b5e220 */
/* Ghidra symbol: FUN_00b5e220 */


void FUN_00b5e220(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort local_1e;
  short local_1c;
  undefined2 local_1a [5];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
    while( true ) {
      iVar2 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
      if (iVar2 < 3) break;
      FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
      iVar2 = FUN_00b24ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20));
      if ((int)(uint)local_1e < iVar2) {
        uVar3 = FUN_00b24ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),local_1e);
        cVar1 = FUN_00b24b00(uVar3);
        if (cVar1 == '\0') {
          lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x40));
          uVar3 = FUN_00b4fb40(*(undefined8 *)(lVar4 + 0x10),local_1a[0],local_1c);
          FUN_00b5d680(param_1,uVar3,local_1e);
        }
      }
      local_1c = local_1c + 1;
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

