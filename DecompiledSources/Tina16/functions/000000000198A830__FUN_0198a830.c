/* Ghidra address: 0198a830 */
/* Ghidra symbol: FUN_0198a830 */


void FUN_0198a830(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_1c;
  
  puVar2 = (undefined8 *)FUN_0198a760(0,&LAB_0198a750,param_2,param_3);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,puVar2,&local_1c);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,puVar2);
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2);
    FUN_004095f0(uVar3);
    lVar4 = FUN_00b94e60(param_1,local_1c);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  return;
}

