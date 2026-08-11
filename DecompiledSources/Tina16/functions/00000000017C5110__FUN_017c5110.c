/* Ghidra address: 017c5110 */
/* Ghidra symbol: FUN_017c5110 */


void FUN_017c5110(longlong param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 8) == param_2) {
    *param_3 = '\0';
    *(undefined2 *)(param_1 + 8) = 0xffff;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_017c5110(*(longlong *)(param_1 + 0x10),param_2,param_3);
      if (*param_3 != '\0') {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = uVar1;
      }
    }
    *param_3 = '\0';
  }
  return;
}

