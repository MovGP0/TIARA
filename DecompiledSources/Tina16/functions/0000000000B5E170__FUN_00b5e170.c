/* Ghidra address: 00b5e170 */
/* Ghidra symbol: FUN_00b5e170 */


void FUN_00b5e170(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a [5];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
    uVar2 = FUN_00b24ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),local_1e);
    cVar1 = FUN_00b24b00(uVar2);
    if (cVar1 == '\0') {
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      uVar2 = FUN_00b4fb40(*(undefined8 *)(lVar3 + 0x10),local_1a[0],local_1c);
      FUN_00b5d680(param_1,uVar2,local_1e);
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

