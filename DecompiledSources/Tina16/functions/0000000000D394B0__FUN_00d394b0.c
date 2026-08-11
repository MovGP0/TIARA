/* Ghidra address: 00d394b0 */
/* Ghidra symbol: FUN_00d394b0 */


undefined8 FUN_00d394b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x78))) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      FUN_00410f20(uVar1);
    }
    uVar1 = FUN_00d3a3b0(&PTR_FUN_00d31078,1,*(undefined8 *)(param_1 + 0x18),param_2,
                         *(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x70) = uVar1;
  }
  return uVar1;
}

