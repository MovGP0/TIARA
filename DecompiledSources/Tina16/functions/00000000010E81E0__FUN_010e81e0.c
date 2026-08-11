/* Ghidra address: 010e81e0 */
/* Ghidra symbol: FUN_010e81e0 */


void FUN_010e81e0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_40;
  undefined4 local_3c [5];
  
  local_3c[0] = 0;
  local_40 = 0;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((char)(param_2 & 0xffffffff) == '\0') {
    lVar3 = *(longlong *)(lVar1 + 0xf8);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0xf0);
  }
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(lVar3 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      uVar4 = FUN_01abdc30(plVar2);
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_3,uVar4,local_3c,&local_40);
    }
    uVar4 = FUN_00b90650(param_3,*(undefined8 *)(param_1 + 0xe0 + (param_2 & 0xff) * 0x20));
    uVar4 = FUN_00b90620(uVar4,*(undefined8 *)(param_1 + 0xd8 + (param_2 & 0xff) * 0x20));
    FUN_01ae24a0(lVar1,param_2 & 0xffffffff,uVar4);
    FUN_010e7bd0(param_1,param_2 & 0xffffffff);
  }
  return;
}

