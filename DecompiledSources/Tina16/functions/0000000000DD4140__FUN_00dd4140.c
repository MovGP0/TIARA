/* Ghidra address: 00dd4140 */
/* Ghidra symbol: FUN_00dd4140 */


void FUN_00dd4140(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(&DAT_01ed5568 + (ulonglong)(byte)param_1[6] * 0x18);
  FUN_016ebdd0(param_2,*param_1,param_1[1],param_1[4],0);
  FUN_016ebfa0(param_2,*param_1 + '\x01',param_1[1],param_1[4],1);
  FUN_016ed220(param_2,*param_1 + '\x01',uVar1,0);
  return;
}

