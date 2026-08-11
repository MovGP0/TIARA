/* Ghidra address: 00d3e480 */
/* Ghidra symbol: FUN_00d3e480 */


void FUN_00d3e480(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_00411a80(param_1,param_2);
  lVar2 = FUN_0080f3b0(*(undefined8 *)PTR_DAT_02004030);
  if (lVar2 == *(longlong *)(param_1 + 8)) {
    FUN_0080f3f0(*(undefined8 *)PTR_DAT_02004030,0);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x4ca,0,0);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x100));
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00d3b110(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

