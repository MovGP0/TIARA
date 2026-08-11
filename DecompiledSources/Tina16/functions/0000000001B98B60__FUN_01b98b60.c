/* Ghidra address: 01b98b60 */
/* Ghidra symbol: FUN_01b98b60 */


void FUN_01b98b60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined1 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  int local_20;
  int iStack_1c;
  
  *param_7 = 1;
  uVar2 = FUN_00498310(param_4,param_5);
  local_20 = (int)uVar2;
  if ((((local_20 < 1) ||
       (iVar1 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x7e8)), iVar1 <= local_20)) ||
      (iStack_1c = (int)((ulonglong)uVar2 >> 0x20), iStack_1c < 1)) ||
     (iVar1 = FUN_0064d120(*(undefined8 *)(param_1 + 0x7e8)), iVar1 <= local_20)) {
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x7b0),0);
    return;
  }
  if (iStack_1c < 0x1e) {
    if (*(char *)(*(longlong *)(param_1 + 0x7b0) + 0x98) != '\0') {
      return;
    }
    FUN_01b98aa0(param_1,1);
    return;
  }
  iVar1 = FUN_0064d120(*(undefined8 *)(param_1 + 0x7e8));
  if (iStack_1c <= iVar1 + -0x1e) {
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x7b0),0);
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x7b0) + 0x98) != '\0') {
    return;
  }
  FUN_01b98aa0(param_1,0);
  return;
}

