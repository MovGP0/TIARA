/* Ghidra address: 0064e4c0 */
/* Ghidra symbol: FUN_0064e4c0 */


void FUN_0064e4c0(longlong param_1,char param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  
  if (param_2 == '\0') {
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xa4) & 0x800) != 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xa0) & 0x400) != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 0x78));
  if (cVar2 != '\0') {
    FUN_0064d000(param_1,local_28);
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x78));
    if (((param_3 == '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x78) + 0xa0) & 0x40) == 0)) &&
       (cVar2 = FUN_0064e410(auStack_48), cVar2 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    thunk_FUN_03a2fc9d(uVar3,local_28,-(uint)bVar1);
    return;
  }
  return;
}

