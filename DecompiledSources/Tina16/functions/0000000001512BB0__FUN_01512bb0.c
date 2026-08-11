/* Ghidra address: 01512bb0 */
/* Ghidra symbol: FUN_01512bb0 */


void FUN_01512bb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  double dVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 local_91 [81];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  double local_30;
  undefined4 uVar4;
  undefined4 uVar6;
  
  puVar3 = local_38;
  puVar5 = local_40;
  cVar1 = FUN_010e8310(*(undefined8 *)(param_1 + 0x9b0),1,local_91,&local_30,puVar3,puVar5);
  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if (cVar1 != '\0') {
    dVar2 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    *(double *)(*(longlong *)(param_1 + 0x9b0) + 0xd8) = local_30 + dVar2;
    FUN_01508f30(param_1,param_2,param_3,param_4,CONCAT44(uVar4,param_5),CONCAT44(uVar6,param_6));
  }
  return;
}

