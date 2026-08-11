/* Ghidra address: 006519b0 */
/* Ghidra symbol: FUN_006519b0 */


void FUN_006519b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [32];
  
  cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((cVar1 == '\0') || (param_1[0xf] == 0)) {
    lVar2 = FUN_006517e0(param_1,*(longlong *)(param_2 + 0x10) + 0x60);
    if (lVar2 != 0) {
      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) = lVar2;
      uVar3 = FUN_0065b870(lVar2);
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10) = uVar3;
    }
  }
  else {
    FUN_006518c0(auStack_28);
  }
  return;
}

