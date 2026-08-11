/* Ghidra address: 0080ffe0 */
/* Ghidra symbol: FUN_0080ffe0 */


void FUN_0080ffe0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  undefined1 local_68 [72];
  undefined8 local_20;
  
  local_90 = auStack_b8;
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041804fe(uVar2,local_68);
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (((lVar1 != 0) && (0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x98))) &&
     (0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x9c))) {
    uVar2 = FUN_0065b870(param_1);
    local_20 = thunk_FUN_0411fe47(uVar2);
    if (*(char *)(param_1 + 0x498) == '\0') {
      FUN_00811e70(*(undefined8 *)(param_1 + 0x490),&local_88);
      FUN_0064ae10(local_20,-local_88,-local_84);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x90))
                (*(longlong **)(param_1 + 0x490),local_20);
    }
    else {
      FUN_008117e0(*(undefined8 *)(param_1 + 0x490),&local_78);
      FUN_0064ae10(local_20,-local_78,-local_74);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x98))
                (*(longlong **)(param_1 + 0x490),local_20);
    }
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_041a9b5c(uVar2,local_20);
  }
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_0416269d(uVar2,local_68);
  return;
}

