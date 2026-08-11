/* Ghidra address: 00abdcb0 */
/* Ghidra symbol: FUN_00abdcb0 */


void FUN_00abdcb0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) {
    (**(code **)(lVar1 + 0x1f8))
              (*(undefined8 *)(lVar1 + 0x200),*(undefined8 *)(lVar1 + 0xb8),
               *(undefined8 *)(param_1 + 0x1a0));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1a0));
  FUN_00a93170(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

