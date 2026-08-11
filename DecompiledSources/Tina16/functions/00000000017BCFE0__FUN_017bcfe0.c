/* Ghidra address: 017bcfe0 */
/* Ghidra symbol: FUN_017bcfe0 */


undefined8
FUN_017bcfe0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  short local_2a;
  
  uVar3 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    cVar1 = FUN_017bded0(param_1,param_2,param_3,param_4,param_5);
    if (cVar1 == '\0') {
      FUN_01d30f00(*param_2,param_1 + 0x2d8,2);
      FUN_01d30f00(*param_2,&local_2a,2);
      *(int *)(param_1 + 0xb8) = (int)local_2a;
      FUN_01d30f00(*param_2,&local_2a,2);
      *(int *)(param_1 + 0xbc) = (int)local_2a;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

