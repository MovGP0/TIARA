/* Ghidra address: 005392f0 */
/* Ghidra symbol: FUN_005392f0 */


undefined8 FUN_005392f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  int local_2c [3];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  pcVar2 = (char *)FUN_00589390(*param_1);
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    local_2c[0] = (int)*(char *)(param_1 + 2);
  }
  else if (cVar1 == '\x02') {
    local_2c[0] = (int)*(short *)(param_1 + 2);
  }
  else if (cVar1 == '\x04') {
    local_2c[0] = *(int *)(param_1 + 2);
  }
  else {
    local_2c[0] = *(int *)(param_1 + 2);
  }
  uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
  FUN_00538080(local_2c,param_2,uVar3);
  return 1;
}

