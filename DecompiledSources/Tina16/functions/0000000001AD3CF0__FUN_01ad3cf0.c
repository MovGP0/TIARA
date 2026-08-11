/* Ghidra address: 01ad3cf0 */
/* Ghidra symbol: FUN_01ad3cf0 */


void FUN_01ad3cf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x58) != 0)) {
    plVar2 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar1 + 0x58));
    uVar3 = FUN_01abdb20(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58));
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    FUN_01ac1cf0(lVar1,*(undefined8 *)(param_1 + 0x80),1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) != '\0')) {
    FUN_01ac3650(lVar1,*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    FUN_01ac1cf0(lVar1,*(undefined8 *)(param_1 + 0x80),0);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x58) != 0)) {
    plVar2 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar1 + 0x58));
    uVar3 = FUN_01abdb20(*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58));
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    FUN_01ac1cf0(lVar1,*(undefined8 *)(param_1 + 0x80),1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) != '\0')) {
    FUN_01ac3650(lVar1,*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    FUN_01ac1cf0(lVar1,*(undefined8 *)(param_1 + 0x80),0);
  }
  FUN_01ad1740(param_1);
  FUN_01ad31e0(param_1,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
  return;
}

