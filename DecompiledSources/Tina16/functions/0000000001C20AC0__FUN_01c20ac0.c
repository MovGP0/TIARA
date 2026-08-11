/* Ghidra address: 01c20ac0 */
/* Ghidra symbol: FUN_01c20ac0 */


void FUN_01c20ac0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  
  FUN_00414610(param_6);
  if (*(char *)(param_1 + 0x719) == '\0') {
    if (param_4 == param_3) {
      FUN_006e6920(*(undefined8 *)(param_1 + 0x6e0),0);
    }
    else if (*(char *)(param_1 + 0x718) == '\0') {
      FUN_006e6920(*(undefined8 *)(param_1 + 0x6e0),0);
      *param_7 = 1;
    }
    else {
      FUN_006e6860(*(undefined8 *)(param_1 + 0x6e0),param_4);
      FUN_006e6920(*(undefined8 *)(param_1 + 0x6e0),param_3);
      uVar1 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x490),0);
      FUN_006d85c0(uVar1,param_6);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  else {
    *param_7 = 1;
    *(undefined1 *)(param_1 + 0x719) = 0;
  }
  FUN_00414480(&param_6);
  return;
}

