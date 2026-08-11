/* Ghidra address: 00dd1dd0 */
/* Ghidra symbol: FUN_00dd1dd0 */


void FUN_00dd1dd0(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = (ulonglong)(byte)param_1[6];
  dVar4 = (*(double *)(&DAT_01ed5498 + uVar2 * 0x18) + *(double *)(&DAT_01ed54a0 + uVar2 * 0x18)) /
          2.0;
  uVar1 = *(undefined8 *)(&DAT_01ed54a8 + uVar2 * 0x18);
  dVar3 = (double)FUN_00dd07b0();
  FUN_016ebe60(param_2,*param_1,param_1[1],param_1[4],1);
  FUN_016ebfa0(param_2,*param_1 + '\x01',param_1[1],param_1[4],1);
  FUN_016ec1c0(param_2,*param_1 + '\x02',param_1[1],param_1[4]);
  FUN_016ed320(param_2,*param_1,0,1.0 / dVar4,0);
  FUN_016ed220(param_2,*param_1 + '\x01',uVar1,0);
  FUN_016ed5d0(param_2,*param_1 + '\x02',-dVar3 / dVar4,0,0,0,0);
  return;
}

