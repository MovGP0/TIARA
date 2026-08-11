/* Ghidra address: 00f40b70 */
/* Ghidra symbol: FUN_00f40b70 */


void FUN_00f40b70(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  FUN_0082a200(param_1,param_2,param_3,param_4,param_5);
  if ((*(byte *)(param_1 + 0x348) & 2) != 0) {
    if (*(longlong *)(param_1 + 0x340) == 0) {
      uVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,param_1);
      *(undefined8 *)(param_1 + 0x340) = uVar1;
    }
    local_28 = FUN_00f40c70;
    local_20 = param_1;
    FUN_00742ef0(*(undefined8 *)(param_1 + 0x340),&local_28);
    FUN_00742ed0(*(undefined8 *)(param_1 + 0x340),400);
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x340),1);
  }
  return;
}

