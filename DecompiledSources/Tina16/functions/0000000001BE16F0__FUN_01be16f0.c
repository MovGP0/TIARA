/* Ghidra address: 01be16f0 */
/* Ghidra symbol: FUN_01be16f0 */


void FUN_01be16f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (DAT_02111468 == param_1) {
    DAT_02111468 = 0;
  }
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(longlong *)PTR_DAT_02001a48 != 0)) {
    (**(code **)(**(longlong **)PTR_DAT_02001a48 + 0x30))(*(longlong **)PTR_DAT_02001a48,0);
  }
  FUN_01be1490(param_1);
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x5a8) + 0x630) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x620);
  *(undefined8 *)(param_1 + 0x620) = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x570));
  FUN_01bff810(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

