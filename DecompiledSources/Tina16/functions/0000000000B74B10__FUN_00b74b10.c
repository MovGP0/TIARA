/* Ghidra address: 00b74b10 */
/* Ghidra symbol: FUN_00b74b10 */


int FUN_00b74b10(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00b74ab0(param_3 + param_1);
  return ((*(uint *)(&DAT_01e8c970 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_01e8cd70 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4)) -
         *(int *)(&DAT_01e8d170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
         *(int *)(&DAT_01e8d570 + (ulonglong)(uVar1 & 0xff) * 4);
}

