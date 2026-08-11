/* Ghidra address: 01992c00 */
/* Ghidra symbol: FUN_01992c00 */


void FUN_01992c00(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  sVar2 = (**(code **)(*param_2 + 0x1c8))();
  sVar3 = 0;
  do {
    cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,sVar3);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x1f0))(param_2,sVar3,local_3c,&local_40);
      FUN_019921e0(param_1,local_3c[0],local_40);
    }
    sVar3 = sVar3 + 1;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  FUN_01991f70(param_1,param_2,0);
  FUN_00b95360(param_1);
  FUN_00b95260(param_1,param_2);
  return;
}

