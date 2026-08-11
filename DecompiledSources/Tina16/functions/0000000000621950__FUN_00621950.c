/* Ghidra address: 00621950 */
/* Ghidra symbol: FUN_00621950 */


void FUN_00621950(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_00411a80(param_1,param_2);
  if (DAT_02012268 == '\0') {
    if ((*(longlong *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\0')) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x10);
      (**(code **)*puVar1)(puVar1,0);
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      if (param_1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_1 + 0x30;
      }
      thunk_FUN_040b5558(lVar2,0);
    }
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

