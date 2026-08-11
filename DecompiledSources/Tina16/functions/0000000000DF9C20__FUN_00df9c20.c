/* Ghidra address: 00df9c20 */
/* Ghidra symbol: FUN_00df9c20 */


void FUN_00df9c20(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 local_2c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  local_2c = 0;
  if (param_3 == '\b') {
    FUN_017de2b0(*(undefined8 *)(param_2 + 0xd8),**(undefined8 **)(lVar1 + 0x18),
                 *(undefined8 *)(lVar1 + 0x58),&local_2c);
    FUN_017de380(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8),
                 *(undefined8 *)(lVar1 + 0x58),0);
  }
  else {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),4,*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x58),0,param_2 + 0x480,0);
    }
    FUN_017de2b0(*(undefined8 *)(param_2 + 0xd8),
                 **(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x480),
                 *(undefined8 *)(lVar1 + 0x58),&local_2c);
  }
  return;
}

