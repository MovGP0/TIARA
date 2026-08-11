/* Ghidra address: 00ddd2c0 */
/* Ghidra symbol: FUN_00ddd2c0 */


void FUN_00ddd2c0(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined1 auStack_38 [32];
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x30))(*(longlong **)(param_1 + 0x4b0),1);
  }
  FUN_00dde570(param_1);
  FUN_00dde660(param_1);
  FUN_0041b800(param_1 + 0x4b8);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))(*(longlong **)(param_1 + 0x4b0),0);
  }
  FUN_0041b800(param_1 + 0x4b0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a0));
  FUN_00ddd260(auStack_38,param_1 + 0x4f8);
  FUN_00ddd260(auStack_38,param_1 + 0x500);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x490) + 100);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(*(longlong *)(param_1 + 0x490) + 100) == 0) {
    FUN_00dde5f0(param_1);
  }
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

