/* Ghidra address: 00dd44c0 */
/* Ghidra symbol: FUN_00dd44c0 */


void FUN_00dd44c0(char *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong in_stack_ffffffffffffffd8;
  
  cVar2 = FUN_016ea1b0(param_2,5);
  param_1[0x2b8] = cVar2;
  in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffffffffff00;
  FUN_016ebe60(param_2,*param_1,param_1[2],param_1[4],in_stack_ffffffffffffffd8);
  FUN_016ebe60(param_2,*param_1 + '\x01',param_1[2],param_1[3],
               in_stack_ffffffffffffffd8 & 0xffffffffffffff00);
  FUN_016ed320(param_2,*param_1,0,1.0 / (*(double *)(param_1 + 0x48) + 1e-06),0);
  FUN_016ed320(param_2,*param_1 + '\x01',0,1.0 / (*(double *)(param_1 + 0x50) + 1e-06),0);
  bVar1 = 1e-30 < *(double *)(param_1 + 0x30);
  if (bVar1) {
    FUN_016ebfa0(param_2,*param_1 + '\x02',param_1[2],param_1[4],1);
    FUN_016ed220(param_2,*param_1 + '\x02',*(undefined8 *)(param_1 + 0x30),0);
  }
  if (1e-30 < *(double *)(param_1 + 0x28)) {
    FUN_016ebfa0(param_2,*param_1 + bVar1 + '\x02',param_1[2],param_1[3],1);
    FUN_016ed220(param_2,*param_1 + bVar1 + '\x02',*(undefined8 *)(param_1 + 0x28),0);
  }
  param_1[700] = '\0';
  param_1[0x2bd] = '\0';
  param_1[0x2be] = '\0';
  param_1[0x2bf] = '\0';
  return;
}

