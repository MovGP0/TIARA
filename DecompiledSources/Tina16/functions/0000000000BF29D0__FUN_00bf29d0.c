/* Ghidra address: 00bf29d0 */
/* Ghidra symbol: FUN_00bf29d0 */


void FUN_00bf29d0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00c03380(param_1,0);
  if ((*(longlong *)(param_1 + 0x850) != 0) ||
     (*(longlong *)(param_1 + 0x4e8) != *(longlong *)(param_1 + 0x4f0))) {
    FUN_00c02b00(param_1);
  }
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x650));
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x668));
  *(undefined8 *)(param_1 + 0x668) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5e8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x658));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x660));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x540));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x500));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x610));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x600));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x620));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x918));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

