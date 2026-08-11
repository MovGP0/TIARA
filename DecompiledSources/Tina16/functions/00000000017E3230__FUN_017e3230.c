/* Ghidra address: 017e3230 */
/* Ghidra symbol: FUN_017e3230 */


undefined8 FUN_017e3230(longlong param_1,double param_2)

{
  undefined2 uVar1;
  undefined1 local_48 [8];
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0x64c) != '\0') {
    param_2 = (double)FUN_0040af40(param_2 / *(double *)(param_1 + 0x640));
    param_2 = param_2 * *(double *)(param_1 + 0x640);
  }
  if (*(char *)(param_1 + 0x530) == '\0') {
    uVar1 = *(undefined2 *)(param_1 + 0x566);
    FUN_010c7a40(local_48,param_2);
    FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),uVar1,local_48);
    FUN_017e2760(param_1,1);
    FUN_010d3800(*(undefined8 *)(param_1 + 0x4f0),local_48);
  }
  else {
    local_40 = FUN_010d6b90(*(undefined8 *)(param_1 + 0x538),param_2);
  }
  return local_40;
}

