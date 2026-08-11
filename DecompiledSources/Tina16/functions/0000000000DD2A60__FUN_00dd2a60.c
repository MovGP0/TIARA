/* Ghidra address: 00dd2a60 */
/* Ghidra symbol: FUN_00dd2a60 */


void FUN_00dd2a60(char *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = FUN_016ea1b0(param_2,1);
  param_1[0x210] = cVar2;
  FUN_016ebe60(param_2,*param_1,param_1[1],param_1[4],1);
  FUN_016ed320(param_2,*param_1,0,1.0 / *(double *)(param_1 + 0x28),0);
  bVar1 = 1e-30 < *(double *)(param_1 + 0x18);
  if (bVar1) {
    FUN_016ebfa0(param_2,*param_1 + '\x01',param_1[1],param_1[4],1);
    FUN_016ed220(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x18),0);
  }
  if (1e-30 < *(double *)(param_1 + 0x20)) {
    FUN_016ebe60(param_2,*param_1 + bVar1 + '\x01',param_1[1],param_1[3],1);
    FUN_016ed320(param_2,*param_1 + bVar1 + '\x01',0,1.0 / *(double *)(param_1 + 0x20),0);
  }
  param_1[0x214] = '\0';
  param_1[0x215] = '\0';
  param_1[0x216] = '\0';
  param_1[0x217] = '\0';
  return;
}

