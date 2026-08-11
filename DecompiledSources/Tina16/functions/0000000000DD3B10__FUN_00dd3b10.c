/* Ghidra address: 00dd3b10 */
/* Ghidra symbol: FUN_00dd3b10 */


void FUN_00dd3b10(char *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffffb8;
  
  uVar4 = (ulonglong)(byte)param_1[6];
  dVar1 = *(double *)(&DAT_01ed5558 + uVar4 * 0x18);
  dVar2 = *(double *)(&DAT_01ed5560 + uVar4 * 0x18);
  uVar3 = *(undefined8 *)(&DAT_01ed5568 + uVar4 * 0x18);
  FUN_016ebdd0(param_2,*param_1,param_1[1],param_1[4],in_stack_ffffffffffffffb8 & 0xffffffffffffff00
              );
  FUN_016ebfa0(param_2,*param_1 + '\x01',param_1[1],param_1[4],1);
  FUN_016ed320(param_2,*param_1,0,(dVar1 + dVar2) / 2.0,0);
  FUN_016ed220(param_2,*param_1 + '\x01',uVar3,0);
  return;
}

