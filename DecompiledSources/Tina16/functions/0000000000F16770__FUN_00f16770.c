/* Ghidra address: 00f16770 */
/* Ghidra symbol: FUN_00f16770 */


void FUN_00f16770(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined1 local_19;
  
  FUN_00f11ef0(param_1,param_2);
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    local_1c = *(undefined2 *)(param_1 + 0x40);
    FUN_01d311c0(param_2,&local_1c,2);
    local_19 = *(undefined1 *)(param_1 + 0x9d);
    FUN_01d311c0(param_2,&local_19,1);
    local_19 = *(undefined1 *)(param_1 + 0x9c);
    FUN_01d311c0(param_2,&local_19,1);
    FUN_01d311c0(param_2,param_1 + 0x98,4);
    FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0xe8));
    lVar2 = *(longlong *)(param_1 + 0xf0);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x10) == '\0')) {
      local_1e = 0xffff;
    }
    else {
      local_1e = *(undefined2 *)(lVar2 + 0x40);
    }
    FUN_01d311c0(param_2,&local_1e,2);
    FUN_01d311c0(param_2,param_1 + 0xa8,8);
    FUN_01d311c0(param_2,param_1 + 0xb0,8);
    FUN_01d311c0(param_2,param_1 + 0xb8,8);
    FUN_01d311c0(param_2,param_1 + 0xc0,8);
    lVar2 = FUN_00f13040(param_1);
    if (lVar2 == 0) {
      local_1e = 0xffff;
    }
    else {
      lVar2 = FUN_00f13040(param_1);
      local_1e = *(undefined2 *)(lVar2 + 0x40);
    }
    FUN_01d311c0(param_2,&local_1e,2);
  }
  return;
}

