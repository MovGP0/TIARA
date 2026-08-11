/* Ghidra address: 00e7d8c0 */
/* Ghidra symbol: FUN_00e7d8c0 */


void FUN_00e7d8c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  double dVar2;
  undefined8 local_e0;
  undefined1 local_d8 [160];
  double local_38;
  char local_30;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_30 = '\0';
  }
  else {
    local_30 = FUN_016eacf0(param_1,6,3);
  }
  cVar1 = FUN_016eacf0(param_1,4,2);
  local_38 = (double)FUN_016eb0a0(param_1,5);
  local_38 = local_38 + 273.15;
  if (cVar1 == '\0') {
    dVar2 = (double)FUN_016ed770(param_2);
    local_38 = local_38 + dVar2;
  }
  FUN_016ebb00(param_1,1,local_d8,0xa0);
  FUN_016ee260(param_1,&local_e0,0x178,0);
  if ((byte)(local_30 - 1U) == 0xff) {
    FUN_00e7c120(param_1,param_2,1,2,3,4,5,&local_38,local_d8,local_e0);
    FUN_016e9f40(param_1,FUN_00e7d870);
    FUN_016e9f60(param_1,FUN_00e7bfb0);
    FUN_016e9ff0(param_1,FUN_00e7b7b0);
  }
  else if ((byte)(local_30 - 1U) < 2) {
    FUN_00e7d4e0(param_1,1,2,3,4,5,&local_38,local_d8);
  }
  return;
}

