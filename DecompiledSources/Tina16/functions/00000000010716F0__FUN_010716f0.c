/* Ghidra address: 010716f0 */
/* Ghidra symbol: FUN_010716f0 */


void FUN_010716f0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x71e) = 0;
  FUN_00419260(param_1 + 0x720,&DAT_00e02168,1,10);
  uVar1 = FUN_0105a0d0(&DAT_01057408,1);
  *(undefined8 *)(param_1 + 0x748) = uVar1;
  *(undefined8 *)(param_1 + 0x758) = 0;
  uVar1 = FUN_0105a4c0(&DAT_01057970,1);
  *(undefined8 *)(param_1 + 0x750) = uVar1;
  *(undefined1 *)(param_1 + 0x764) = 1;
  return;
}

