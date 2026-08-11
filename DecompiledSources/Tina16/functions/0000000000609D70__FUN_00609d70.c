/* Ghidra address: 00609d70 */
/* Ghidra symbol: FUN_00609d70 */


void FUN_00609d70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(int *)(lVar1 + 8) < 2) {
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (*(longlong *)(lVar1 + 0x10) != *(longlong *)(lVar1 + 0x28))) {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        iVar2 = thunk_FUN_0416f828(*(longlong *)(lVar1 + 0x28));
        if (iVar2 == 0) {
          FUN_005fff20();
        }
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
  }
  else {
    FUN_0060a460(param_1);
    if (*(char *)(lVar1 + 0x38) == '\0') {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
    }
    else {
      uVar3 = 0;
    }
    FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),uVar3,lVar1 + 0x40);
  }
  return;
}

