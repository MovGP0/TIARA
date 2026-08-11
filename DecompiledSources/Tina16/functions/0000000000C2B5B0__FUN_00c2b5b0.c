/* Ghidra address: 00c2b5b0 */
/* Ghidra symbol: FUN_00c2b5b0 */


void FUN_00c2b5b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_28 [16];
  undefined8 local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  uVar2 = FUN_0060ce20(param_2);
  iVar1 = thunk_FUN_03ea2ad7(uVar2,local_28);
  if (iVar1 != 0) {
    FUN_00c2b4f0(param_1,local_18);
    thunk_FUN_0416f828(local_18);
    if (local_10 != 0) {
      thunk_FUN_0416f828(local_10);
    }
  }
  return;
}

