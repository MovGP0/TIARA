/* Ghidra address: 00a3d510 */
/* Ghidra symbol: FUN_00a3d510 */


void FUN_00a3d510(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a39e90(param_1);
  if (*(char *)(lVar1 + 0x40) != '\0') {
    if (param_3 != '\0') {
      uVar2 = FUN_00a39e90(param_1);
      FUN_00a35310(uVar2,param_2);
    }
    lVar1 = FUN_00a39e90(param_1);
    thunk_FUN_0418f5de(*(undefined8 *)(lVar1 + 0x30),param_2,0);
    lVar1 = FUN_00a39e90(param_1);
    thunk_FUN_03a5de49(*(undefined8 *)(lVar1 + 0x30));
    lVar1 = FUN_00a39e90(param_1);
    thunk_FUN_0416f828(*(undefined8 *)(lVar1 + 0x38));
    lVar1 = FUN_00a39e90(param_1);
    *(undefined8 *)(lVar1 + 0x38) = param_2;
  }
  return;
}

