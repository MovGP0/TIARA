/* Ghidra address: 015762b0 */
/* Ghidra symbol: FUN_015762b0 */


void FUN_015762b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x41f0))(lVar1);
    FUN_004095f0(uVar2);
  }
  FUN_015f4a70(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

