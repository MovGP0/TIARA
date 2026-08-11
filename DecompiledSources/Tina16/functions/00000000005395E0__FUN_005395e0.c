/* Ghidra address: 005395e0 */
/* Ghidra symbol: FUN_005395e0 */


undefined8 FUN_005395e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulonglong local_30 [2];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  pcVar2 = (char *)FUN_00589390(*param_1);
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    local_30[0] = (ulonglong)*(char *)(param_1 + 2);
  }
  else if (cVar1 == '\x02') {
    local_30[0] = (ulonglong)*(short *)(param_1 + 2);
  }
  else if (cVar1 == '\x04') {
    local_30[0] = (ulonglong)*(int *)(param_1 + 2);
  }
  else {
    local_30[0] = (ulonglong)*(uint *)(param_1 + 2);
  }
  uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
  FUN_00538080(local_30,param_2,uVar3);
  return 1;
}

