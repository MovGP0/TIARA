/* Ghidra address: 0135b570 */
/* Ghidra symbol: FUN_0135b570 */


void FUN_0135b570(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_30[0] = FUN_01d30b30(&DAT_01d2e8e8,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                             param_2,0);
  *(undefined8 *)PTR_DAT_02003a18 = 0;
  FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,local_30);
  iVar3 = *(int *)(param_3 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_3,iVar2);
      FUN_0135b500(auStack_68,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00b95360(param_3);
  FUN_0198cd90(param_3,*(undefined8 *)PTR_DAT_02003a18,0x2401,1);
  FUN_0199e310(param_3,0,1,0);
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  uVar1 = (**(code **)**(undefined8 **)PTR_DAT_02003a18)(*(undefined8 **)PTR_DAT_02003a18);
  FUN_00418590(uVar1,&DAT_01984da0);
  return;
}

