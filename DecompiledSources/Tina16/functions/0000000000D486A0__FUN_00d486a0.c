/* Ghidra address: 00d486a0 */
/* Ghidra symbol: FUN_00d486a0 */


void FUN_00d486a0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00789f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

